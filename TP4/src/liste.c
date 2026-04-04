#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

// Initializes the list by setting the head pointer to NULL
void init_liste(struct liste_couleurs *l) {
    l->premier = NULL;
}

// Adds a new color to the front of the list
void insertion(struct couleur *c, struct liste_couleurs *l) {
    // 1. Allocate memory for a new node
    struct element *nouveau = malloc(sizeof(struct element));

    if (nouveau == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    // 2. Copy the color data into the new node
    nouveau->data = *c;

    // 3. Link the new node to the current first element
    nouveau->suivant = l->premier;

    // 4. Update the list head to point to this new node
    l->premier = nouveau;
}

// Iterates through the list and prints each color's values
void parcours(struct liste_couleurs *l) {
    struct element *actuel = l->premier;

    // Loop until we reach the end of the list (NULL)
    while (actuel != NULL) {
        printf("RGBA(%02X, %02X, %02X, %02X)\n",
               actuel->data.r, actuel->data.g,
               actuel->data.b, actuel->data.a);

        // Move to the next node
        actuel = actuel->suivant;
    }
}