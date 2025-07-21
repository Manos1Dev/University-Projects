#include "header.h"

//to eidos tou post
void typecount(char *text, struct trumpPost *head)
{
    post *tmp = head;
    int count = 0;

    if (!(!strcmp(text, "status") || !strcmp(text, "photo") || !strcmp(text, "link") || !strcmp(text, "video"))) 
    {
        printf("Error! Autos o typos dhmosieushs pou epelekses den uparxei!\n");
    }
    else 
    {
        while (tmp != NULL)
        {
            if (!strcmp(tmp->type, text))
            {
                count++;
            }

            tmp = tmp->next;
        }

        printf("Ta %s einai %d\n", text, count);
    }
}