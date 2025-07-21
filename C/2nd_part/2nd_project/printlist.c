#include "header.h"

// kanoume print olh thn lista 
void PrintList(post *head, int number)
{

    // printf("\n%s\n", number);

    struct trumpPost *temp;

    if (head == NULL)
    {
        printf("The list is empty\n");
    }
    else 
    {
        temp = head;
        while(temp != NULL && number > 0)
        {
            printf(blue "\n");
            if (strlen(temp->text) > 30)
            {
                for (int i = 0; i < 30; i++)
                {
                    printf("%c", temp->text[i]);
                }
                printf(";\t%s;\t%s;\t%s;\t%d/%d/%d %d:%d:%d;", temp->info, temp->type, temp->link, temp->posted.month, temp->posted.day, temp->posted.year, temp->posted.hour, temp->posted.minute, temp->posted.second);
            }
            else 
            {
                printf("\n%s;\t%s;\t%s;\t%s;\t%d/%d/%d %d:%d:%d;", temp->text, temp->info, temp->type, temp->link, temp->posted.month, temp->posted.day, temp->posted.year, temp->posted.hour, temp->posted.minute, temp->posted.second);
            }
            printf("  %d;  %d;  %d;  %d;  %d;  %d;  %d;  %d;  %d;  %s;\n", temp->feelings.reactions, temp->feelings.comments, temp->feelings.shares, temp->feelings.likes, temp->feelings.loves, temp->feelings.wows, temp->feelings.hahas, temp->feelings.sads, temp->feelings.angrys, temp->learnedFrom);           
            printf("\n" reset);
            temp = temp->next;
            number--;
        }
    }
}