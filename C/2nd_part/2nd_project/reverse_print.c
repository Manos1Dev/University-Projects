#include "header.h"

//pritarei ta arxeia anapoda
void reverseprint(struct trumpPost *head, int num)
{
    struct trumpPost *temp;
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        while (temp != NULL && num > 0)
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
            temp = temp->prev;
            num--;
        }
    }
}