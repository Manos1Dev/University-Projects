#include "header.h"

// //briskei gramma se text
void find(char *text, struct trumpPost *head, char source[])
{
    int i, k, j, cnt, found = 0;
    post *temp = head;

    while (temp != NULL)
    {
        for (i = 0; i < strlen(temp->text); i++)
        {
            cnt = 0;
            j = 0;
            if (!strcmp(source, "text"))
            {
                for (k = i; k < strlen(temp->text); k++)
                {
                    if (temp->text[k] == text[j])
                    {
                        cnt++;
                    }

                    j++;
                }
            }
            else if (!strcmp(source, "information"))
            {
                for (k = i; k < strlen(temp->info); k++)
                {
                    if (temp->info[k] == text[j])
                    {
                        cnt++;
                    }

                    j++;
                }
            }
            else if (!strcmp(source, "link"))
            {
                for (k = i; k < strlen(temp->link); k++)
                {
                    if (temp->link[k] == text[j])
                    {
                        cnt++;
                    }

                    j++;
                }
            }

            j = 0;

            if (strlen(text) == cnt)
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
                break;
            }
        }

        temp = temp->next;
    }

    if (found == 0)
    {
        printf("Error! Sorry but we didnt find anything.\n");
    }
}