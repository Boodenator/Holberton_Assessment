#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} s_list;


s_list* create_node(int data) {
    s_list* new_node = malloc(sizeof(s_list));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}


void insert_sorted(s_list** sorted_head, int data) {
    s_list* new_node = create_node(data);


    if (*sorted_head == NULL || data < (*sorted_head)->data) {
        new_node->next = *sorted_head;
        *sorted_head = new_node;
    } else {
        s_list* current = *sorted_head;
        while (current->next != NULL && current->next->data < data) {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
}

void print_list(s_list* head) {
    s_list* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}


int main(int argc, char* argv[]) {
    s_list* sorted_list = NULL;
    int i;


    for ( i = 1; i < argc; i++) {
        int num = atoi(argv[i]);
        insert_sorted(&sorted_list, num);
    }


    printf("Sorted list: ");
    print_list(sorted_list);
    return 0;
}