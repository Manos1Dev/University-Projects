#include "header.h"

//printarei after to date poy dinei 
void after(int month, int day, int year, struct trumpPost *head)
{
    int found = 0;
    post *temp = head;
    while (temp != NULL)
    {
        if ((year == temp->posted.year && month < temp->posted.month) || (year == temp->posted.year && month == temp->posted.month && day < temp->posted.day) || year < temp->posted.year)
        {
            printf("\n");
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
            printf("\n");
            found = 1;
        }
    
        temp = temp->next;
    }

    if (found == 0)
    {
        printf("Not found after\n");
    }
}


//printarei before to date pou dinei
void before(int month, int day, int year, struct trumpPost *head)
{ 
    int found = 0;
    post *temp = head;
    while (temp != NULL)
    {
        if ((year == temp->posted.year && month > temp->posted.month) || (year == temp->posted.year && month == temp->posted.month && day > temp->posted.day) || year > temp->posted.year)
        {
            printf("\n");
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
            printf("\n");
            found = 1;
        }
    
        temp = temp->next;
    }

    if (found == 0)
    {
        printf("Not found before\n");
    }
}