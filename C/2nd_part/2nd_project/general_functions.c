#include "header.h"

//emfanizei to menu
void instructions()
{
    printf("\n");
    printf("            WELCOME TO TRaSH        \n");
    printf("Please choose a option:\n");
    printf("Write newPost to enter a new data\n");
    printf("Write print and a number to display the double list until the number you give\n");
    printf("Write exit to exit the programm\n");
    printf("Write findT or findt to find a word in the text\n");
    printf("Write findI or findi to find a word in  information\n");
    printf("Write findL or findl to find a word in the link\n");
    printf("Write a command and * to display all the double list\n");
    printf("Write printA to show all the posts after the date you insert\n");
    printf("Write printB to show all the posts before the date you insert\n");
    printf("Write count to count the reactions of the posts\n");
    printf("Write printR to display the list from the end\n");
    printf("Write save to save a post\n");
    printf("Write load to load a file\n");
    printf("Write typeCount or typecount (video,link,status) to select the type of count you want\n");
    printf("Write deleteo or deleteO to delete the first post\n");
    printf("Write deleten or deleteN to delete the first post\n");

}


//elegxei to input tou user
int CheckCommand(char option[option_value]) 
{
    char temp[10] = "\0";
    for (int i = 0; i < 10; i++)
    {
        if (option[i] == '\n' || option[i] == ' ') break;
        temp[i] = option[i];
    }

    for (int i = 0; i < strlen(temp); i++)
    {
        temp[i] = tolower(temp[i]);
    }

    if (!strcmp(temp, "newpost"))
    {
        return 1;
    }   
    else if (!strcmp(temp, "print"))
    {
        return 2;
    }    
    else if (!strcmp(temp, "exit"))
    {
        return 3;
    }  
    else if (!strcmp(temp, "findt"))
    {
        return 4;
    }   
    else if (!strcmp(temp, "findi"))
    {
        return 5;
    }
    else if (!strcmp(temp, "findl"))
    {
        return 6;
    }   
    else if (!strcmp(temp, "printa"))
    {
        return 7;
    }   
    else if (!strcmp(temp, "printb"))
    {
        return 8;
    }
    else if (!strcmp(temp, "count"))
    {
        return 9;
    }
    else if (!strcmp(temp, "printr"))
    {
        return 10;
    }    
    else if (!strcmp(temp, "save"))
    {
        return 11;
    }   
    else if (!strcmp(temp, "load"))
    {
        return 12;
    }   
    else if (!strcmp(temp, "typecount"))
    {
        return 13;
    }
    else if (!strcmp(temp, "deleteo"))
    {
        return 14;
    }
    else if (!strcmp(temp, "deleten"))
    {
        return 15;
    }
    else
    {
        return 16;
    }
}

//anoigei to arxeio
void *ReturnSecondArgument(char option[option_value])
{
    int value = 0;
    char *token;

    token = strtok(option, " ");
    while (token != NULL) 
    {
        value++;
        if (value == 2)
        {
            return token;
        }  
        token = strtok(NULL, " ");
    }
}


//epeistrefei ariumo analoga to emoji
int check(char *emoji)
{
    if (!strcmp(emoji, "reactions"))
    {
        return 1;
    }
    else if (!strcmp(emoji, "comments"))
    {
        return 2;
    }  
    else if (!strcmp(emoji, "shares"))
    {
        return 3;
    }  
    else if (!strcmp(emoji, "likes"))
    {
        return 4;
    }  
    else if (!strcmp(emoji, "loves"))
    {
        return 5;
    }  
    else if (!strcmp(emoji, "wows"))
    {
        return 6;
    }  
    else if (!strcmp(emoji, "hahas"))
    {
        return 7;
    }  
    else if (!strcmp(emoji, "sads"))
    {
        return 8;
    }  
    else if (!strcmp(emoji, "angrys"))
    {
        return 9;
    }
    else
    {
        return 10;
    }
}