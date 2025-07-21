#include "header.h"

void free_mem(struct trumpPost *head)
{
    while (head != NULL) //eleyueronei mnhmh
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
        head = head->next;
    } 
}