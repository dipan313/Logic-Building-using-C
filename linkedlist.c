#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void Traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("element:%d\n", ptr->data);
        ptr = ptr->link;
    }
}

int main()
{
    struct node *head, *second, *third;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    // link first node and second node
    head->data = 699;
    head->link = second;
    // link second node and third node
    second->data = 966;
    second->link = third;
    // linked third node with null
    third->data = 696;
    third->link = NULL;
    // printf("")
    Traversal(head);
}