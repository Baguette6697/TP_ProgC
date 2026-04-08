/*
 * SPDX-FileCopyrightText: 2021 John Samuel
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#include "client.h"

/**
 * Fonction pour envoyer et recevoir un message depuis un client connecté à la socket.
 *
 * @param socketfd Le descripteur de la socket utilisée pour la communication.
 * @return 0 en cas de succès, -1 en cas d'erreur.
 */
int envoie_recois_message(int socketfd) {
  char message[1024];
  char data[1024];
  memset(data, 0, sizeof(data));

  printf("Votre message ou calcule (ex: calcule : + 23 45): ");
  fgets(message, sizeof(message), stdin);

  char op;
  int n1, n2;
  // Si l'entrée correspond au format de calcul
  if (sscanf(message, "calcule : %c %d %d", &op, &n1, &n2) == 3) {
    envoie_operateur_numeros(socketfd, op, n1, n2);
  } else {
    // Sinon, envoi standard
    snprintf(data, sizeof(data), "message: %s", message);
    write(socketfd, data, strlen(data));
  }

  // Lecture de la réponse (résultat ou echo)
  memset(data, 0, sizeof(data));
  read(socketfd, data, sizeof(data));
  printf("Réponse reçue: %s\n", data);

  return 0;
}


//-------Calcul pour exo5.5---------------
int envoie_operateur_numeros(int socketfd, char op, int n1, int n2) {
  char data[1024];
  // Formate la chaîne : "calcule : + 23 45"
  snprintf(data, sizeof(data), "calcule : %c %d %d", op, n1, n2);

  if (write(socketfd, data, strlen(data)) < 0) {
    perror("Erreur d'écriture calcul");
    return -1;
  }
  return 0;
}

int main()
{
  int socketfd;

  struct sockaddr_in server_addr;

  /*
   * Creation d'une socket
   */
  socketfd = socket(AF_INET, SOCK_STREAM, 0);
  if (socketfd < 0)
  {
    perror("socket");
    exit(EXIT_FAILURE);
  }

  // détails du serveur (adresse et port)
  memset(&server_addr, 0, sizeof(server_addr));
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(PORT);
  server_addr.sin_addr.s_addr = INADDR_ANY;

  // demande de connection au serveur
  int connect_status = connect(socketfd, (struct sockaddr *)&server_addr, sizeof(server_addr));
  if (connect_status < 0)
  {
    perror("connection serveur");
    exit(EXIT_FAILURE);
  }

  while (1)
  {
    // appeler la fonction pour envoyer un message au serveur
    envoie_recois_message(socketfd);
  }

  close(socketfd);
}
