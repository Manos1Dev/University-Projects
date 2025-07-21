#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define pinakas 6
#define blue "\x1b[34m"
#define red "\33[73;91m"
#define green "\33[73;92m"
#define reset "\x1b[0m"

int gamemenu(int epilogh, int games);
int randomnumber(int l);
int levelmenu(int level);
void statistics(int level, int try, int kamia_epilogh);
void emfanish_arithmou(int play[pinakas][pinakas], int x[pinakas][pinakas], int l, int row, int col);
void thelw_na_brw_to_level(int *x[pinakas][pinakas], int arithmos[19], int l);

int main(void)
{
    int flag2 = 0, painxidia = 1, gamemenu_epilogh, epilogh, l, level = 0, i, k, x[pinakas][pinakas], *ptr[pinakas][pinakas], play[pinakas][pinakas], arithmos[19], row1, col1, row2, col2, pl1 = 0, enas_arithmos, try = 0;
    printf(red "\nPROSOXH! AN EPILEKSEIS AKURO " green "LEVEL (>3 H <0)" red " H EPILEKSEIS APEUTHEIAS TO " green "PLAY" red " XWRIS NA EPILEKSEIS TO " green "LEVEL" red " AUTOMATA TO " green "LEVEL" red " GINETAI " green "MEDIUM" red "!!!\n\n" blue);
    printf(blue "\t--------------------");
    printf("\n\t" blue "|" red " MEMORY GAME MENU " blue "|" blue);
    printf("\n\t--------------------\n");
    gamemenu_epilogh = gamemenu(epilogh, painxidia);
    for (i = 0; i < 19; i++)
        arithmos[i] = 0;
    for (i = 0; i < 6; i++)
        for (k = 0; k < 6; k++)
            x[i][k] = 0;
    while (1)
    {
        switch (gamemenu_epilogh)
        {
            case 1:
                if (flag2 == 0)
                {
                    for (i = 0; i < 4; i++)
                        for (k = 0; k < 4; k++)
                            ptr[i][k] = &x[i][k];
                    l = 2;
                    thelw_na_brw_to_level(ptr, arithmos, l);
                }
                for (i = 0; i < l * 2; i++)
                    for (k = 0; k < l * 2; k++)
                        play[i][k] = 0;
                pl1 = 0;
                int flag = 0;
                while (pl1 < (((l * 2) * (l * 2)) / 2))
                {
                    try++;
                    printf("\n");
                    emfanish_arithmou(play, x, l, 0, 0);
                    do
                    {
                        printf("\nInsert the first card row and column (with space): ");
                        scanf("%d%d", &row1, &col1);
                        if (((row1 < 0) || (row1 > ((l * 2) - 1))) || (((col1 < 0) || (col1 > ((l * 2) - 1)))))
                            printf(red "Autos o sundiasmos den uparxei!\n" blue);
                    } while (((row1 < 0) || (row1 > ((l * 2) - 1))) || (((col1 < 0) || (col1 > ((l * 2) - 1)))));
                        if (play[row1][col1] == 1)
                        {
                            printf(red "Warning: This card is already opened. Try again!\n" blue);
                            flag = 1;
                        }
                        else
                            play[row1][col1] = 1;
                        if (flag == 0)
                        {
                            printf("\n\n");
                            emfanish_arithmou(play, x, l, row1, col1);
                            do
                            {
                                printf("\nInsert the second card row and column (with space): ");
                                scanf("%d%d", &row2, &col2);
                                if (((row2 < 0) || (row2 > ((l * 2) - 1))) || (((col2 < 0) || (col2 > ((l * 2) - 1)))))
                                    printf(red "Autos o sundiasmos den uparxei!\n" blue);
                            } while (((row2 < 0) || (row2 > ((l * 2) - 1))) || (((col2 < 0) || (col2 > ((l * 2) - 1)))));
                                if (play[row2][col2] == 1)
                                {
                                    // printf(red "Warning: This card is already opened. Try again!\n" blue);
                                    printf(red "Einai hdh anoixth auth h karta!\n" blue);
                                    flag = 1;
                                }
                                else
                                    play[row2][col2] = 1; 
                                if (flag == 0)
                                {
                                    printf("\n\n");
                                    emfanish_arithmou(play, x, l, row1, col1);
                                    play[row1][col1] = 1;
                                    play[row2][col2] = 1;
                                    if (x[row1][col1] == x[row2][col2])
                                    {
                                        pl1++;
                                        if (pl1 < (((l * 2) * (l * 2)) / 2))
                                            printf(green "BRAVO! Cards matched!\n" blue);
                                    }
                                    else
                                    {
                                        play[row1][col1] = 0;
                                        play[row2][col2] = 0;
                                        printf(red "Atuxhses, autes oi kartes den einai idies! Dokimase ksana...\n" blue);
                                    }
                                }
                        }
                    flag = 0;
                }
                printf(green "\nAll cards matched!!!\n" blue);
                printf(red "\nPata to " green "Statistics" red " gia na deis plhrofories gia to " green "%do" red " game!\n" blue , painxidia);
                painxidia++;
                flag2 = 0;
                for (i = 0; i < 19; i++)
                    arithmos[i] = 0;
            break;
            case 2:
                flag2 = 1;
                level = l = levelmenu(level);
                for (i = 0; i < l * 2; i++)
                    for (k = 0; k < l * 2; k++)
                    {
                        x[i][k] = 0;
                        ptr[i][k] = &x[i][k];
                    }
                thelw_na_brw_to_level(ptr, arithmos, l);
                for (i = 0; i < 19; i++)
                    arithmos[i] = 0;
            break;
            case 3:
                statistics(l, try, level);
            break;
            case 4:
                printf(red "\nNtroph sou pou stamathses na paizeis to kalutero paixnidi pou uparxei!!!\n" blue);
                return 0;
            default:
                printf(red "\nERROR 305: DEN EDWSES TIMH STO DIASTHMA [1, 4], KSANAPROSPATHISE.");
            break;
        }
        gamemenu_epilogh = gamemenu(epilogh, painxidia);
    }
    return 0;
}

void thelw_na_brw_to_level(int *x[pinakas][pinakas], int arithmos[19], int l)
{
    int i, k, enas_arithmos;
    srand(time(NULL));
    for (i = 0; i < l * 2; i++)
    {
        for (k = 0; k < l * 2; k++)
        {
            enas_arithmos = randomnumber(l);
            if (arithmos[enas_arithmos] < 2)
            {
                arithmos[enas_arithmos]++;
                *x[i][k] = enas_arithmos;
            }
            else
                if (*x[i][k] == 0)
                    while (*x[i][k] == 0)
                    {
                        enas_arithmos = randomnumber(l);
                        if (arithmos[enas_arithmos] < 2)
                        {
                            arithmos[enas_arithmos]++;
                            *x[i][k] = enas_arithmos;
                        }
                    }
        }
    }
}

int randomnumber(int l)
{ 
    switch (l)
    {
        case 1:
            return 1 + rand() % 2;
        case 2:
            return 1 + rand() % 8;
        case 3:
            return rand() % 18 + 1;
    }
    // 2os tropos
    // return 1 + rand() % (((l * 2) * (l * 2)) / 2); (mia entolh mono)
    // mporw kai me mia entolh apla to kanw me switch gia dikh mou diekolunsh
}

void emfanish_arithmou(int play[6][6], int x[6][6], int l, int row, int col)
{
    int i, k;
    for (i = 0; i < l * 2; i++)
        printf("    %d ", i);  
    switch (l)
    {
        case 1:
            printf("\n   ----------\n");  
        break;
        case 2:
            printf("\n  ----------------------\n");  
        break;
        case 3:
            printf("\n  ----------------------------------\n");  
        break;
        // oti pio axrhsto uparxei auth h switch alla ok 
    }
    for (i = 0; i < l * 2; i++)
    {
        printf("%d | ", i);                
        for (k = 0; k < l * 2; k++)
        {
            if (play[i][k] == 0)
                printf(red "*     " blue);
            else if (play[i][k] == 1)
                printf(green "%d     " blue , x[i][k]);
        }
        printf("\n");
    }   
}

void statistics(int level, int try, int kamia_epilogh)
{
        if (kamia_epilogh == 0)
        {
            printf("\nLevel: " red "Medium\n" blue);
            printf(red "Pata to " green "Play" red " sto menu gia na paikseis!\n" blue);
        }
        else
        {
            switch (level)
            {
                case 1:
                    printf("\nLevel: " red "Easy\n" blue);
                break;
                case 2:
                    printf("\nLevel: " red "Medium\n" blue);
                break;
                case 3:
                    printf("\nLevel: " red "Hard\n" blue);
                break;
            }
            if (try != 0)
                printf(green "CONGRATS! " red "You have done it after " green "%d" red " tries!!!\n" blue , try);
            else
                printf(red "Pata to " green "Play" red " sto menu gia na paikseis!\n" blue);
        }
}

int gamemenu(int epilogh, int games)
{
    printf(blue "\n\t  -----------------\n\t  |" red "    <%d game>   " blue "|" blue "\n\t  " blue "|" red " Press:\t " blue " |\n\t  |" red " 1" blue "-" green "Play\t" blue "  |\n\t  |" red " 2" blue "-" green "Level" blue "\t  |\n\t  |" red " 3" blue "-" green "Statistics" blue "  |\n\t  |" red " 4" blue "-" green "Exit" blue "\t  |\n\t  -----------------\n\n" blue, games);
    printf(blue "Enter choice: ");
    scanf("%d", &epilogh);
    return epilogh;
}

int levelmenu(int level)
{
    printf("\n\t\t --------------\n\t\t |" red " LEVEL MENU " blue "|"" \n\t\t --------------\n\n\t\t" red "1. " green "Easy " red "(2x2)\n\t\t2. " green "Medium " red "(4x4)\n\t\t3. " green "Hard " red "(6x6)\n" blue);
    printf("\nEnter choice: ");
    scanf("%d", &level);
    if (level > 3 || level < 0)
        return 2;
    else
        return level;
}