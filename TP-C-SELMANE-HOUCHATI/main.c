#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node; 


Node *CreateNode(int value) {
    Node *h =(Node *)malloc(sizeof(Node));
    h->data = value;
    h->next = NULL;
}