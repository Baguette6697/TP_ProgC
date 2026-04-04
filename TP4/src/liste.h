#ifndef LISTE_H
#define LISTE_H

// Structure to represent an RGBA color
struct couleur {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

// The node structure for the linked list
struct element {
    struct couleur data;
    struct element *suivant; // Pointer to the next node
};

// Wrapper structure for the list
struct liste_couleurs {
    struct element *premier; // Pointer to the first element (head)
};

// Function prototypes
void init_liste(struct liste_couleurs *l);
void insertion(struct couleur *c, struct liste_couleurs *l);
void parcours(struct liste_couleurs *l);

#endif