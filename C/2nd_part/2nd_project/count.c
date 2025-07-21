#include "header.h"

//kanei count
void count(int value, struct trumpPost *head, char *text)
{
    post *tmp = head;
    int counter = 0;

    if (value != 10)
    {
        while (tmp != NULL)
        {
            if (value == 1)
            {
                counter = counter + tmp->feelings.reactions;
            } 
            else if (value == 2)
            {
                counter = counter + tmp->feelings.comments;
            }
            else if (value == 3)
            {
                counter = counter + tmp->feelings.shares;
            }
            else if (value == 4)
            {
                counter = counter + tmp->feelings.likes;
            }
            else if (value == 5)
            {
                counter = counter + tmp->feelings.loves;
            }
            else if (value == 6)
            {
                counter = counter + tmp->feelings.wows;
            }
            else if (value == 7)
            {
                counter = counter + tmp->feelings.hahas;
            }
            else if (value == 8)
            {
                counter = counter + tmp->feelings.sads;
            }
            else if (value == 9)
            {
                counter = counter + tmp->feelings.angrys;
            }

            tmp = tmp->next;
        }
    }
    else 
    {
        printf("Error! Edwses lathos entolh ths count.");
    }
    
    if (value != 10)
    {
        printf("Einai %d", counter);
    }

    printf("\n");
}