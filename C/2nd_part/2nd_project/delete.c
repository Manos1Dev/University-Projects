#include "header.h"

//diagrafei to teleytaio stoixeio apo thn lista
void *deleteN(struct trumpPost *head)
{
    // post *temp = head;

    if(head == NULL)
    {
        printf("List is empty,There is nothing to delete.\n");
        return NULL;
    }
    else if (head->next == NULL && head->prev == NULL)
    {
        free_memDelete(head);
        return NULL;
    }
    // else
    // {
        // while (temp->next != NULL)
        // {   
        //     temp = temp->next;
        // }

        // temp2 = temp->prev;
        // temp2->next = NULL;

        // free_memDelete(head);

        // printf("Newest post deleted!\n");
    
    // }
}


//diagrafei to proto stoixeio apo thn lista
void *deleteO(struct trumpPost *head)
{ 
    post *temp;

    if(head == NULL)
    {
        printf("List is empty,There is nothing to delete.\n");
        return NULL;
    }
    else if (head->next == NULL && head->prev == NULL)
    {
        free_memDelete(head);
        return NULL;
    }
    else
    {
        temp = head->next;
        temp->prev = NULL;

        free_memDelete(head);
    
        printf("Oldest post deleted!\n");
    
        return temp;
    }
}

void free_memDelete(struct trumpPost *head)
{
    if (strlen(head->text) >= 0)
    {
        free(head->text);
    }
    if (strlen(head->info) >= 0)
    {
        free(head->info);
    }
    if (strlen(head->link) >= 0)
    {
        free(head->link);
    }
    free(head);
}