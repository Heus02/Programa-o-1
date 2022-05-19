#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <ctype.h>

struct node
{
    int data;
    struct node* link;
};

typedef struct node NODE;

NODE* create_linked_list()
{
    return NULL;
}
 
NODE *add(NODE *head, int data)
{
    NODE *new_node = malloc (sizeof(NODE));
    new_node ->data = data;
    new_node ->link = head;
 
    return new_node;
}


void print_linked_list(NODE *head)
{
    while (head != NULL) { 

        printf("%d ", head->data);

        head = head->link;
    }
}


int isEmpty(NODE *head)
{
    return (head == NULL);
}

void soma (NODE **head, NODE **head2, NODE **head3)
{
    NODE *list1 = *head;
    NODE *list2 = *head2;
    NODE *list3 = *head3;

    int carry = 0, sum = 0;

    while (list1 || list2)
    {
        sum = 0;
        if(list1)
        {
            sum += list1->data;
        }
        if(list2)
        {
            sum+= list2->data;
        }

        sum += carry;

        carry = sum/10;
        sum = sum % 10;

        list3 = add(list3, sum);

        if (list1)
        {
            list1 = list1->link;
        }
        if (list2)
        {
            list2 = list2->link;

        }


    }

    if (carry)
    {
        list3 = add(list3, carry);
    }
    

    print_linked_list(list3);
}

void read (NODE **head, char parada)
{
    char dig;

    while (scanf(" %c", &dig) && dig != parada)
    {
        if (dig == '0' && *head == NULL)
        {
            getchar();
            
        }
        else if (!isspace(dig))
        {
            *head = add (*head, dig - '0');
            
        }
        //printf ("%c ", dig);
        
    }
}

int main ()
{
    NODE *head = create_linked_list();
    NODE *head2 = create_linked_list();
    NODE *head3 = create_linked_list();

    
    read (&head, '+');
    read (&head2, '=');

    if (isEmpty(head) && isEmpty(head2))
    {
        printf ("Lista vazia!\n");
    }
    else
    {
        
        soma (&head, &head2, &head3);
    }

    
    //print_linked_list(head2);

    return 0;
}