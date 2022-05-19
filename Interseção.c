#include <stdlib.h>
#include <stdio.h>
#include <math.h>
 
 
struct node 
{
    int item;
    struct node *next;
};
 
typedef struct node NODE;
 
NODE* create_linked_list()
{
    return NULL;
}
 
void add(NODE **head, int item)
{
    NODE *new_node = malloc (sizeof(NODE));
    new_node->item = item;
    
    NODE *tempo = *head;
    
    if(*head == NULL){
        *head = new_node;
        return;
    }
    while(tempo->next != NULL)
    {
        tempo = tempo->next;
    }
    new_node->next = tempo->next;
    tempo->next = new_node;

}
 

void print_linked_list(NODE *head, int chato)
{
    while (head != NULL) { 
        
        if (chato != head->item)
        {
            
            printf("%d\n", head->item);
            
        }
        chato = head->item;
        
 
        head = head->next;
    }
}

 
void intersection (NODE *head, NODE *listb)
{
    NODE *temp = head;
    NODE *listc = create_linked_list();
    int flag = 0;
    
    while (listb != NULL)
    {
        head = temp;
        
        while (head != NULL)
        {
            if (listb->item == head->item)
            {
                add (&listc, listb->item);
                
                //printf("%d\n", listb->item);
                flag = 1;
            }
            
            head = head->next;
        }
        
        listb = listb->next;
    }
    
    if (flag == 0)
    {
        printf ("VAZIO\n");
    }
    
    bbsort(listc);
 
    
    print_linked_list(listc, -1);
}

void swap (NODE *head, NODE *head2)
{
    int data = head->item;
    head->item = head2->item;
    head2->item = data;
}

int size (NODE *head, int contador)
{
    while (head != NULL) { 

        contador++;
        
        //printf ("%d\n", contador);
        head = head->next;
    }
    
    return contador;
    
}

void bbsort (NODE *head)
{
    NODE *temp = head;
    
    int tam = size(head, 0);
    
    //printf ("%d", tam);

    for (int j = tam - 1; j >= 0; j--)
    {
        head = temp;
        
        for (int i = 0; i < j; i++)
        {
            if (head->item > head->next->item)
            {
                
                swap(head, head->next);
                
            }
            
            head = head->next;
        }
        
    }
    
    
}
 
 
 
int main ()
{
 
    NODE *list1 = create_linked_list();
    NODE *list2 = create_linked_list();
    
    int a;
 
    for(int i = 0; i < 20; i++)
    {
        scanf ("%d", &a);
        add (&list1, a);
    }
 
 
    for (int j = 0; j < 20; j++)
    {
        scanf ("%d", &a);
        add (&list2, a);
    }

    //print_linked_list(list3);
    
    
    intersection(list1, list2);
 
 
    return 0;
}