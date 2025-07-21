#include "header.h"

int main(void) 
{
    int i, k, index, delete_all_index_value = option_value, stop_while = 1, correct_value = 0, value, c, month_int, day_int, year_int, loops, cnt;
    char *temp, *token, *ptr1, option[option_value] = "\0", *text, *pointer1;
    struct trumpPost *head = NULL;
   
    instructions();//menu

    while (stop_while) 
    {
        printf("$> ");
        fgets(option, sizeof(option), stdin);

        option[strlen(option)] = '\0';
        option[strlen(option) - 1] = '\0';

        correct_value = 0;

        if (option[0] == ' ') 
        {
            printf("Error! Den tha prepei na exei paththei SPACE aristera apo to command. Ksanaprospathise.\n");
            continue;
        } 

        switch (CheckCommand(option))
        {
            case 1: // newpost

                for (i = 0; i < strlen(option); i++)
                {
                    if (option[i] == ';')
                    {
                        correct_value++;
                    }
                }

                if (correct_value < 13 || correct_value > 13) 
                {
                    printf("Error! Ta ';' tha prepei na einai 13. Ksanaprospathise.\n");
                    continue;
                }

                head = insertToList(head, option, "kbrd");

                break;
            case 2: // print

                index = 0;
                token = strtok(option, " ");
                while (token != NULL)
                {
                    index++;
                    if (index == 2) 
                    {
                        ptr1 = token;
                    }
                    token = strtok(NULL, " ");
                }

                if (*ptr1 == '*') 
                {
                    post *ptr_value = head;
                    index = 0;
                    while (ptr_value != NULL)
                    {
                        index++;
                        ptr_value = ptr_value->next;
                    } 

                    PrintList(head, index);
                }
                else
                {
                    if (index > 2)
                    {
                        printf("Error! To command exei parapanw parametrous.\n");
                        continue;
                    }
                    else if (index == 1)
                    {
                        printf("Error! Prepei na dwthei kai o arithmos pou tha ginoun print.\n");
                        continue;
                    }
                    else 
                    {
                        index = atoi(ptr1);
                        PrintList(head, index);               
                    }
                }

                break;
            case 3: // exit (stamataei to programma)

                stop_while = 0;
            
                break;
            case 4: // findT

                text = ReturnSecondArgument(option);

                if (*text == '*')
                {
                    post *ptr_value = head;
                    index = 0;
                    while (ptr_value != NULL)
                    {
                        index++;
                        ptr_value = ptr_value->next;
                    }

                    PrintList(head, index);
                }
                else
                {
                    find(text, head, "text");
                }

                break;
            case 5: // findI

                text = ReturnSecondArgument(option);

                if (*text == '*')
                {
                    post *ptr_value = head;
                    index = 0;
                    while (ptr_value != NULL)
                    {
                        index++;
                        ptr_value = ptr_value->next;
                    }

                    PrintList(head, index);
                }
                else
                {
                    find(text, head, "information");
                }

                break;
            case 6: // findL

                text = ReturnSecondArgument(option);

                if (*text == '*')
                {
                    post *ptr_value = head;
                    index = 0;
                    while (ptr_value != NULL)
                    {
                        index++;
                        ptr_value = ptr_value->next;
                    }

                    PrintList(head, index);
                }
                else
                {
                    find(text, head, "link");
                }

                break;
            case 7: // printA

                for (i = 0; i < strlen(option) - 1; i++)
                {
                    if (option[i] == ' ')
                    {
                        char month[5] = "", day[5] = "", year[6] = "";
                        for (k = i + 1; k < strlen(option) - 1; k++)
                        {
                            if (option[k] == '/' || option[k] == ' ') break;
                            strncat(month, &option[k], 1);
                        }

                        month_int = atoi(month);

                        c = 0;
                        for (k = i + 1; k < strlen(option) - 1; k++)
                        {
                            if (option[k] == ' ') break;
                            if (c == 1)
                                strncat(day, &option[k], 1);
                            if (option[k] == '/') c++;
                        }

                        day_int = atoi(day);

                        c = 0;
                        for (k = i + 1; k < strlen(option); k++)
                        {
                            if (option[k] == '\n') break;
                            if (c == 2)
                                strncat(year, &option[k], 1);
                            if (option[k] == '/') c++;
                        }

                        year_int = atoi(year);
                    }
                }

                after(month_int, day_int, year_int, head);

                break;
            case 8: // printB

                for (i = 0; i < strlen(option) - 1; i++)
                {
                    if (option[i] == ' ')
                    {
                        char month[5] = "", day[5] = "", year[6] = "";
                        for (k = i + 1; k < strlen(option) - 1; k++)
                        {
                            if (option[k] == '/' || option[k] == ' ') break;
                            strncat(month, &option[k], 1);
                        }

                        month_int = atoi(month);

                        c = 0;
                        for (k = i + 1; k < strlen(option) - 1; k++)
                        {
                            if (option[k] == ' ') break;
                            if (c == 1)
                                strncat(day, &option[k], 1);
                            if (option[k] == '/') c++;
                        }

                        day_int = atoi(day);

                        c = 0;
                        for (k = i + 1; k < strlen(option); k++)
                        {
                            if (option[k] == '\n') break;
                            if (c == 2)
                                strncat(year, &option[k], 1);
                            if (option[k] == '/') c++;
                        }

                        year_int = atoi(year);
                    }
                }

                before(month_int, day_int, year_int, head);

                break;
            case 9: // count
                
                text = ReturnSecondArgument(option);

                value = check(text);
                count(value, head, text);

                break;
            case 10: // printR

                index = 0;
                token = strtok(option, " ");
                while (token != NULL)
                {
                    index++;
                    if (index == 2) 
                    {
                        ptr1 = token;
                        break;
                    }
                    token = strtok(NULL, " ");
                }

                if (*ptr1 == '*') 
                {
                    post *ptr_value = head;
                    index = 0;
                    while (ptr_value != NULL)
                    {
                        index++;
                        ptr_value = ptr_value->next;
                    } 

                    reverseprint(head, index);
                }
                else
                {
                    if (index > 2)
                    {
                        printf("Error! To command exei parapanw parametrous.\n");
                        continue;
                    }
                    else if (index == 1)
                    {
                        printf("Error! Prepei na dwthei kai o arithmos pou tha ginoun print.\n");
                        continue;
                    }
                    else 
                    {
                        index = atoi(ptr1);
                        reverseprint(head, index);
                    }
                }

                break;
            case 11: // save

                temp = ReturnSecondArgument(option);

                FILE *file;
                file = fopen(temp, "r+");
                if (file == NULL)
                {
                    file = fopen(temp, "w+");
                }

                post *item = head;
                
                while (1) {
                    fgetc(file);
                    if (feof(file))
                    {
                        while(item != NULL)
                        {
                            fprintf(file, "%s;%s;%s;%s;%d/%d/%d %d:%d:%d;%d;%d;%d;%d;%d;%d;%d;%d;%d\n", item->text, item->info, item->type, item->link, item->posted.month, item->posted.day, item->posted.year, item->posted.hour, item->posted.minute, item->posted.second, item->feelings.reactions, item->feelings.comments, item->feelings.shares, item->feelings.likes, item->feelings.loves, item->feelings.wows, item->feelings.hahas, item->feelings.sads, item->feelings.angrys);           
                            item = item->next;
                        }

                        break;
                    }
                }

                fclose(file);
                
                break;
            case 12: // load

                pointer1 = ReturnSecondArgument(option);

                FILE *file_ptr;
                file_ptr = fopen(pointer1, "r");

                if (file_ptr == NULL)
                {
                    printf("Error! To arxeio [%s] den uparxei.\n", pointer1);
                    continue;
                }

                char first_arr[1000];
                char second_arr[option_value];
                cnt = 0;

                while (fscanf(file_ptr, "%s", first_arr) != EOF)
                {
                    for (i = 0; i < strlen(first_arr); i++)
                    {
                        if (first_arr[i] == ';')
                        {
                            cnt++;
                        }
                    }
                    strcat(second_arr, first_arr);
                    strcat(second_arr, " ");
                    if (cnt == 13)
                    {
                        loops = strlen(option);
                        while (loops >= 0)
                        {
                            option[loops] = '\0';
                            loops--;
                        }

                        strcpy(option, " ");
                        strcat(option, second_arr);

                        head = insertToList(head, option, "file");

                        loops = strlen(second_arr);
                        while (loops >= 0)
                        {
                            second_arr[loops] = '\0';
                            loops--;
                        }

                        cnt = 0;
                    }
                }

                fclose(file_ptr);

                break;
            case 13: // typecount

                text = ReturnSecondArgument(option);
                typecount(text, head);
                
                break;
            case 14://deleteN
                
                head = deleteO(head);

                break;
            case 15:

                head = deleteN(head);

                break;
            default: //ama ginei lauos emfanizei mhnhma

                printf("Error! To command pou edwses den uparxei.\n");
                break;
        }

        delete_all_index_value = strlen(option) + 1;
        while (delete_all_index_value >= 0)//kauarizei to input
        {
            option[delete_all_index_value] = '\0';
            delete_all_index_value--;
        }
        temp = NULL;
    }

    free_mem(head);
    return 0;
}

// $> newpost Beautiful evening in Wisconsin- THANK YOU for your incredible support tonight! Everyone get out on November 8th - and VOTE! LETS MAKE AMERICA GREAT AGAIN! -DJT;Timeline Photos;photo;https://www.facebook.com/DonaldTrump/photos/a.488852220724.393301.153080620724/10157915294545725/?type=3;10/17/2016 20:56:51;6813;543;359;6178;572;39;17;0;7