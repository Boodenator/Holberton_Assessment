#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} s_list;

s_list* createNode(int data) {
    s_list* newNode = malloc(sizeof(s_list));

    if (newNode == NULL) {
        printf("error\n");
    }


    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int function_list(s_list *head) {
    s_list * current = head;
    while (current != NULL)
    {
        printf("%d", current->data);
        current = current->next;
    }

}