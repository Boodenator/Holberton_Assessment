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

void print_list(s_list *head) {
    s_list * current = head;
    while (current != NULL)
    {
        printf("%d", current->data);
        current = current->next;
    }

}

int main(int argc, char *argv[]) {
    s_list *head = NULL, *tmp = NULL;
    int i, value;

    for (i = 1; i < argc; i++)
    {
        value = atoi(argv[i]);
        }
        if (head == NULL)
        {
            head = createNode(value);
            tmp = head;
        }
        else {
            tmp->next = createNode(value);
            tmp = tmp->next;
        }
     print_list(head);
    return (0);
    }