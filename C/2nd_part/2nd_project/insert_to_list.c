#include "header.h"

//eisagei sth lista apo to telos
struct trumpPost *insertToList(struct trumpPost *head, char option[option_value], char where[])
{ 
    struct trumpPost *newItem, *temp;

    newItem = (struct trumpPost *) malloc(sizeof(struct trumpPost));

    if (newItem == NULL)
    {
        // den exei mnhmh diathesimh
        printf("Error! No memory available.\n");
    }
    else 
    {  
        newItem->next = NULL;

        strcpy(newItem->learnedFrom, where); // an einai apo keyboard h apo file

        newItem = text(newItem, option);

        newItem = Date(newItem, option);
        
        newItem = Time(newItem, option);
        
        newItem = newpost(newItem, option);

        if (CheckValues(newItem))
        {
            free(newItem);
            return head;
        }
        
        if(head == NULL)
        {
            head = newItem;
            newItem->prev = NULL;
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {   
                temp = temp->next;
            }
            temp->next = newItem;
            newItem->prev = temp;
        } 
   	}

   return head;
}

struct trumpPost *text(post *newItem, char option[option_value])
{
    int i, k, j, sum = 0;
    for (i = 0; option[i] != ';'; i++)
    {
        if (option[i] == ' ')
        {
            j = i;
            for (k = i + 1; option[k] != ';'; k++)
            {
                sum++;
            }

            break;
        }
    }

    newItem->text = (char *) malloc(sizeof(char) * sum);

    k = 0;
    for (i = j + 1; option[i] != ';'; i++)
    {
        newItem->text[k] = option[i];
        k++;
    }

    return newItem;
}

//briskei thn hmeromhnia tou post
struct trumpPost *Date(struct trumpPost *newItem, char option[option_value])
{
    int counter = 0, i, k, c;
    for (i = 0; i < strlen(option) - 1; i++)
    {
        if (option[i] == ';')
        {
            counter++;
            if (counter == 4)
            {
                char month[5] = "";

                for (k = i + 1; k < strlen(option) - 1; k++)
                {
                    if (option[k] == '/' || option[k] == ' ') break;
                    strncat(month, &option[k], 1);
                }

                newItem->posted.month = atoi(month);

                char day[5] = "";

                c = 0;
                for (k = i + 1; k < strlen(option) - 1; k++)
                {
                    if (option[k] == ' ') break;
                    if (c == 1)
                        strncat(day, &option[k], 1);
                    if (option[k] == '/') c++;
                }

                newItem->posted.day = atoi(day);

                char year[6] = "";

                c = 0;
                for (k = i + 1; k < strlen(option) - 1; k++)
                {
                    if (option[k] == ' ') break;
                    if (c == 2)
                        strncat(year, &option[k], 1);
                    if (option[k] == '/') c++;
                }

                newItem->posted.year = atoi(year);
            }
        }
    }

    return newItem;
}

struct trumpPost *Time(struct trumpPost *newItem, char option[option_value])
{
    int i, k, j, c, counter = 0;
    char hours[5] = "";
    char minutes[5] = "";
    char seconds[5] = "";

    for (i = 0; i < strlen(option) - 1; i++)
    {
        if (option[i] == ';')
        {
            counter++;
            if (counter == 4)
            {
                for (k = i + 1; k < strlen(option) - 1; k++)
                {
                    if (option[k] == ' ')
                    {
                        for (int j = k + 1; option[j] != ';'; j++)
                        {
                            if (option[j] == ':') break;
                            strncat(hours, &option[j], 1);
                        }

                        newItem->posted.hour = atoi(hours);

                        c = 0;
                        for (j = k + 1; option[j] != ';'; j++)
                        {
                            if (c == 2) 
                                break;
                            else if (c == 1)
                                strncat(minutes, &option[j], 1);
                            if (option[j] == ':') c++;
                        }

                        newItem->posted.minute = atoi(minutes);
                    
                        c = 0;
                        for (j = k + 1; option[j] != ';'; j++)
                        {
                            if (c == 2) 
                                strncat(seconds, &option[j], 1);
                            if (option[j] == ':') c++;
                        }

                        newItem->posted.second = atoi(seconds);
                    }
                }

                break;
            }
        }
    }


    return newItem;
}

//gia ta react
struct trumpPost *newpost(struct trumpPost *newItem , char option[option_value])
{
    int counter = 0, i;

    for (i = 0; i < strlen(option) - 1; i++)
    {
        if (option[i] == ';')
        {
            counter++;
            if ((counter >= 1 && counter <= 3) || (counter >= 5 && counter <= 13))
            {
                newItem = TpothetiseNoumera(i, newItem, option, counter);
            }
        }
    }

    return newItem;
}

//gia ta react synarhthsh
struct trumpPost *TpothetiseNoumera(int i, struct trumpPost *newItem, char option[option_value], int counter)
{
    int j, sum = 1;
    char *value = NULL;

    for (j = i + 1; j < strlen(option) - 1; j++)
    {
        if (option[j] == ';')
        {
            break;
        }
        else
        {
            sum++;
        }
    }

    value = (char *) malloc(sizeof(char) * sum);

    if (value == NULL)
    {
        printf("Error! Den uparxei arketh mnhmh!\n");
        exit(0);
    }

    if (strlen(value) == 1)
    {
        strcpy(value, " ");
    }

    for (j = i + 1; j < strlen(option) - 1; j++)
    {
        if (option[j] == ';')
        {
            break;
        }
        strncat(value, &option[j], 1);
    }

    if (counter == 1)
    {
        newItem->info = (char *) malloc(sizeof(char) * strlen(value));

        if (newItem->info == NULL)
        {
            printf("Error! Den uparxei arketh mnhmh!\n");
            exit(0);
        }
        
        strcpy(newItem->info, value);
    }
    else if (counter == 2)
    {
        strcpy(newItem->type, value);
    }
    else if (counter == 3)
    {
        newItem->link = (char *) malloc(sizeof(char) * strlen(value));
        
        if (newItem->link == NULL)
        {
            printf("Error! Den uparxei arketh mnhmh!\n");
            exit(0);
        }
        
        strcpy(newItem->link, value);
    }
    else if (counter == 5)
    {
        newItem->feelings.reactions = atoi(value);
    }
    else if (counter == 6)
    {
        newItem->feelings.comments = atoi(value);
    }
    else if (counter == 7)
    {
        newItem->feelings.shares = atoi(value);
    }
    else if (counter == 8)
    {
        newItem->feelings.likes = atoi(value);
    }
    else if (counter == 9)
    {
        newItem->feelings.loves = atoi(value);
    }  
    else if (counter == 10)
    {
        newItem->feelings.wows = atoi(value);
    } 
    else if (counter == 11)
    {
        newItem->feelings.hahas = atoi(value);
    }  
    else if (counter == 12)
    {
        newItem->feelings.sads = atoi(value);
    }
    else if (counter == 13)
    {
        newItem->feelings.angrys = atoi(value);
    }

    free(value);

    return newItem;
}