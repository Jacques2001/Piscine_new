#include <stdio.h>
#include <stdlib.h>

// Définition du nœud
typedef struct s_node {
    int data;
    struct s_node *next;
} t_node;

// Création d'un nœud
t_node *create_node(int value) {
    t_node *new_node = malloc(sizeof(t_node));
    if (!new_node)
        return NULL;
    new_node->data = value;
    new_node->next = NULL;
    return new_node;
}

// Ajout en début de liste
void push_front(t_node **head, int value) {
    t_node *new_node = create_node(value);
    if (!new_node)
        return;

    new_node->next = *head;
    *head = new_node;
}

// Affichage de la liste
void print_list(t_node *head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Programme principal
int main() {
    t_node *head = NULL;  // Déclaration de la liste vide

    push_front(&head, 10);
    push_front(&head, 20);
    push_front(&head, 30);

    print_list(head);  // Affiche : 30 -> 20 -> 10 -> NULL

    return 0;
}

