#include <stdio.h>
#include <stdlib.h>

typedef struct node_type
{
    int data;
    struct node_type *next;
}node;


void display_list(node **head)
{
    if(*head==NULL)
    {
        printf("\n\nList is empty\n\n");
        return;
    }
    printf("\n\nList is\n");
    
    node * trev = *head;
    
    while((trev)->next != NULL)
    {
        printf("%d->", trev->data);
        trev = trev->next;
        
    }
    printf("%d", trev->data);
    printf("\n\n");
    return;
}


void add_end(int val, node ** head, node ** tail)
{
    
    node * newnode = (node *)malloc(sizeof(node));
    if(newnode == NULL)
    {
        printf("add node :Memory not available\n");
        return;
    }
    newnode->data = val;
    newnode->next = NULL;
    
    if(*head == NULL && *tail == NULL)
    {
        *head = *tail = newnode;
    }
    else
    {
        (*tail)->next = newnode;
        *tail = newnode;
    }
    return;
}

void add_first(int val, node **head, node **tail)
{
    node * newnode = (node *)malloc(sizeof(node));
    if(newnode == NULL)
    {
        printf("add node :Memory not available\n");
        return;
    }
    newnode->data = val;
    newnode->next = NULL;
    
    if(*head == NULL && *tail == NULL)
    {
        *head = *tail = newnode;
    }
    else
    {
        newnode->next = (*head);
        *head = newnode;
    }
    return;
}

void delete_end(node **head, node **tail)
{
    if(*head == NULL  && *tail  == NULL)
    {
        printf("\nList is empty\n\n");
        return;
    }
    
    if(*head == *tail)
    {
        free(*tail);
        *head = *tail = NULL;
        printf("\nNo more nodes in list, list is empty now\n\n");
        return;
    }
    
    node * temp = (*head);
    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }
    
    *tail = temp;
    free(temp->next);
    temp->next =NULL;
    return;
}

void delete_front(node **head, node **tail)
{
    if(*head == NULL  && *tail  == NULL)
    {
        printf("\nList is empty\n\n");
        return;
    }
    
    if(*head == *tail)
    {
        free(*head);
        *head = *tail = NULL;
        printf("\nNo more nodes in list, list is empty now\n\n");
        return;
    }
    
    node *temp = *head;
    *head = (*head)->next;
    free(temp);
    temp=NULL;
    return;
}

int add_at_value(int val, int pos, node **head, node **tail)
{
    if(*head == NULL  && *tail  == NULL)
    {
        printf("\nList is empty\n\n");
        return -1;
    }
    
    node * newnode = (node *)malloc(sizeof(node));
    if(newnode == NULL)
    {
        printf("add node :Memory not available\n");
        return -1;
    }
    newnode->data = val;
    newnode->next = NULL;
    
    if((*head == *tail) )
    {
        if((*head)-> data == pos)
        {    newnode->next = *head;
            *head = newnode;
            return 0;
        }
        else{
            printf("value at position not found\n");
            return -1;
        }
    }

    if((*head)->data == pos)
    {
        newnode->next = *head;
        *head = newnode;
        return 0;
    }
    
    node * trev = (*head);
    node *prev =(*head)->next;
    
    
    while(trev->next != NULL && trev->data != pos)
    {
        prev = trev;
        trev = trev->next;
    }
    
    if(trev->data == pos)
    {
        newnode->next = prev->next;
        prev->next = newnode;
        return 0;
    }
    else{
         printf("value at position not found\n");
            return -1;
    }
    
    return -1;
}


int main()
{
    int choice=0, val=0, pos=0;
    node *head =NULL;
    node *tail =NULL;
  
    
    while(1)
    {
        printf("Enter Choice\n");
        printf("1. Add node at start\n2. Add node at end\n3. Delete node at start\n4. Delete node at end\n5. Display List\n6. Add_at_value\n0. Exit\n") ;
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
            printf("\n\nEnter Value\n");
            scanf("%d",&val);
            printf("\n");
            add_first(val, &head, &tail);
            break;
            
            case 2:
            printf("\n\nEnter Value\n");
            scanf("%d",&val);
            printf("\n");
            add_end(val, &head, &tail);
            break;
            
            case 3:
            delete_front(&head,&tail);
            break;
            
            case 4:
            delete_end(&head, &tail);
            break;
            
            case 5:
            display_list(&head);
            break;
            
            case 6:
            printf("Enter the value\n");
            scanf("%d",&val);
            printf("Enter the value where you want to add\n");
            scanf("%d",&pos);
            add_at_value(val, pos, &head, &tail);
            break;
            
            case 0:
            return 0;
            
            default :
            printf("\n\nInvalid  Choice\n\n");
            
        }
    }    
    return 0;
}
