#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define table_min 16
#define table_max 406
#define grammes_min 5
#define sthles_min 5
#define wait_if_win 6
#define red "\x1b[31m"
#define green "\x1b[32m"
#define blue "\x1b[35m"
#define reset "\x1b[0m"

#include "functions.h"

int main(void) {

  if (!WelcomeMessage()) {
    printf("Game Finished!\n");
    return 0;
  }

  int n, m, **mainTable, boubalia, i, k, SelectedLevel, prospathies_gia_to_help = 3;

  SelectedLevel = level();

  printf("\n");

  // dinei o paixths grammes kai sthles
  do {
    do {
      n = ReturnInputValue(n, "Dwse to n (grammes pinaka): ");
      if (n < grammes_min) {
        printf(red "Error! H grammh pou edwses einai mikoterh tou %d, ksanaprospathise.\n" reset, grammes_min);
      }
    } while(CheckInput("Error! Edwses estw kai enan xarakthra. ksanaprospathise.") != 0 || n < grammes_min); // elegxei ean edwse xarakthres h einai mikroteros tou minimun (grammes)
    
    do {
      m = ReturnInputValue(m, "Dwse to m (sthles pinaka): ");
      if (m < grammes_min) {
        printf(red "Error! H sthlh pou edwses einai mikoterh tou %d, ksanaprospathise.\n" reset, sthles_min);
      }
    } while(CheckInput("Error! Edwses estw kai enan xarakthra. ksanaprospathise.") != 0 || m < sthles_min); // elegxei ean edwse xarakthres h einai mikroteros tou minimun (sthles)
    
    if (n * m < table_min) {
      MessageHandler("Error! To athroisma twn sthlwn kai twn grammwn einai mikrotero tou elaxistou, ksanaprospathise.", 0);
    } else if (((n * m) + (8 - SelectedLevel)) > table_max) {
      MessageHandler("Error! To athroisma twn sthlwn kai twn grammwn einai megalutero tou megistou, ksanaprospathise.", 0);
    } 
  } while((n * m < table_min) || (((n * m) + (8 - SelectedLevel)) > table_max)); // elegxei ean to athroisma einai mikrotero tou min pou exei oristei h ean bash to level mporei o pinakas na megalwsei 

  // ftiaxnw dynamika ton pinaka (grammes)
  mainTable = (int **) malloc((n + 1) * sizeof(int *));
  if (mainTable == NULL) exit(1);

  // ftiaxnw dynamika ton pinaka (sthles)
  for (i = 0; i <= n; i++) {
    mainTable[i] = (int *) malloc((m + 1) * sizeof(int));
    if (mainTable[i] == NULL) exit(1);
  }

  int grammes, sthles;
  
  // kanw ola ta stoixeia # (100) mexri na dwsei o paikths prwta ena input
  for (i = 1; i <= n; i++) {
    for (k = 1; k <= m; k++) {
      mainTable[i][k] = 100;
    }
  }

  // kanw print ton pinaka mexri na dwsei to prwto input
  PrintTable(mainTable, n, m, SelectedLevel, 0, 0);

  // selector = ean prwta edwse input, ftiaxeTaBoubaliaMonoOtanEpilekseiS = gia na mhn mporei na dwsei b/B, w, h/H 
  int selector = 1, ftiaxeTaBoubaliaMonoOtanEpilekseiS = 0;
  char move;

  // molis nikhseis kai to teleutaio level (4) fuge apo thn while
  while (SelectedLevel <= 4) {
    do {
      MessageHandler(green "Make your move: " reset, 1);
      scanf("%c", &move);
      if ((move == 's' || move == 'S') || (move == 'b' || move == 'B')) { 
        scanf("%d, %d", &grammes, &sthles); // pare tis syntetagmenes apo to input meta to b, s
      } else if (move == 'x' || move == 'X' ) {
        MessageHandler("Epelekses na stamathsei to paixnidi. Euxaristoume pou epaikses!\n", 1);

        for (i = 0; i <= n; i++) { // kanw free ton pinaka afou termatisthke to paixnidi
          free(mainTable[i]);
        }
        free(mainTable);

        return 0;
      }

      if ((move != 's' && move != 'b' && move != 'h' && move != 'w' && move != 'S' && move != 'B' && move != 'H' && move != 'W' && move != 'h' && move != 'H' && move != 'x' && move != 'X')) {
        MessageHandler("Error! Den edwses swsta s/S h b/B h h/H h x/X ws kinhsh, ksanaprospathise.", 0);
      }
      if (CheckInput("Error! Edwses estw kai enan xarakthra.") == 1) {
        continue;
      } else if ((move == 's' || move == 'S' || move == 'b' || move == 'B') && (grammes < 1 || grammes > n) && (sthles < 1 || sthles > m)) {
        MessageHandler("Error! H grammh kai h sthlh pou edwses den uparxei, ksanaprospathise.", 0);
      } else if ((move == 's' || move == 'S') && (grammes < 1 || grammes > n)) {
        MessageHandler("Error! H grammh pou edwses den uparxei, ksanaprospathise!", 0);
      } else if ((move == 's' || move == 'S') && (sthles < 1 || sthles > m)) {
        MessageHandler("Error! H sthlh pou edwses den uparxei, ksanaprospathise!", 0);
      }
    } while(((move == 's' || move == 'S' || move == 'b' || move == 'B') && (grammes < 1 || grammes > n) || (sthles < 1 || sthles > m)) || (move != 's' && move != 'b' && move != 'w' && move != 'h' && move != 'S' && move != 'B' && move != 'W' && move != 'H' && move != 'h' && move != 'H' && move != 'x' && move != 'X'));
    // elegxei ean den exei dwsei swsto input h do while apo panw

    printf("\n");

    if ((move == 's' || move == 'S') && selector == 1) {

      ftiaxeTaBoubaliaMonoOtanEpilekseiS = 1;

      boubalia = GenerateBoubalia(n, m, SelectedLevel); // ftiaxe ta boubalia bash to level

      // printf("\n boubalia = %d \n", boubalia); // debug

      for (i = grammes - 1; i <= grammes + 1; i++) {
        if (i > 0 && i <= n) {
          for (k = sthles - 1; k <= sthles + 1; k++) {
            if (k > 0 && k <= m) {
              mainTable[i][k] = 200; // kane gurw gurw apo to prwto input blacklist ta koutakia gia na mhn mpei boubali
            } else {
              continue;
            }
          }
        } else {
          continue;
        } 
      }

      // bale ta boubalia ston pinaka
      srand(time(NULL));
      int number1 = 0, number2 = 0;
      for (i = 1; i <= boubalia; i++) {
        for (k = 1; k <= 2; k++) {
          if (k == 1) {
            number1 = RandomValue(n);
          } else if (k == 2) {
            number2 = RandomValue(m);
            if (number1 > 0 && number2 > 0 && mainTable[number1][number2] != 110 && mainTable[number1][number2] == 100) {
              mainTable[number1][number2] = 110;
            } else {
              i--;
            }
          }
        }
      }

      // bale tis kampanoules (1 - 8)
      int ik, ki, sum = 0;
      for (i = 1; i <= n; i++) {
        for (k = 1; k <= m; k++) {
          if (mainTable[i][k] == 200) mainTable[i][k] = 100;
          if (mainTable[i][k] == 100) {
            for (ik = i - 1; ik <= i + 1; ik++) {
              if (ik > 0 && ik <= n) {
                for (ki = k - 1; ki <= k + 1; ki++) {
                  if (ki > 0 && ki <= m && !(i == ik && k == ki) && mainTable[ik][ki] == 110) {
                    sum++;
                  } else {
                    continue;
                  }
                }
              } else {
                continue;
              }
            }
            if (sum > 0)
              mainTable[i][k] = sum;
            sum = 0;
          }
        }
      }

      printf("\n"); 
      selector++;
    } 

    if (ftiaxeTaBoubaliaMonoOtanEpilekseiS == 0) {
      MessageHandler("Error! Prepei prwta na epilekseis na anoixei mia thesh gia na mporeis na paikseis.", 0);
      continue;
    }

    if (move == 's' || move == 'S') {
      if (!DesAnEpesesPanwSeBoubali(mainTable, grammes, sthles)) { 
        if (TableCheck(mainTable, grammes, sthles, n, m, grammes, sthles, 1) == 0) {
          // MessageHandler("Error! Auth h thesh einai hdh anoixth. Ksanaprospathise se thesh pou na einai klhsth.", 0);
        } else {
          if (mainTable[grammes][sthles] == 100) {
            mainTable[grammes][sthles] = 120;  
          } else if (mainTable[grammes][sthles] >= 1 && mainTable[grammes][sthles] <= 8) { 
            mainTable[grammes][sthles] += 10; 
          }
        }
      } else {
        selector = 1;
      }
    }

    if (selector == 1) { // des an epese panw se boubali apo to input pou edwse
      PrintTable(mainTable, n, m, SelectedLevel, boubalia, 1);
      MessageHandler("Dustuxws exases epeidh epeses panw se boubali. To paixnidi teleiwse.", 0);
      break;
    } else {
      PrintTable(mainTable, n, m, SelectedLevel, boubalia, 0);

      if ((move == 'h' || move == 'H')) { // help
        int g, s, sss = 0;
        if (prospathies_gia_to_help > 0) {
          // prospathies_gia_to_help--; 
          g = RandomValue(n);
          s = RandomValue(m);
          while (sss <= n * m && (mainTable[g][s] != 100 || !(mainTable[g][s] >= 1 && mainTable[g][s] >= 8))) {
            if (PareTisTheseisTouPinakaXwrisTaBoubalia(mainTable, n, m) > 0) {
              g = RandomValue(n);
              s = RandomValue(m);
            } else {
              g = 0;
              s = 0;
              break;
            }
            sss++;
          } 
          if (g != 0 && s != 0) {
            printf("Yparxei keno stoixeio sthn grammh [%d] kai sthn sthlh [%d]\n", g, s);
          }
        } else {
          MessageHandler("Error! Exeis xrhsimopoihsei oles sou tis prospathies gia to help.", 0);
        }
      } else if (move == 'b' || move == 'B') { // shmadepse ta koutakia h kseshmadepse ta
        if (DesAnEinaiHdhAnoixthHThesh(mainTable, grammes, sthles)) {
          // system("clear");
          PisteueiOPaikthsOtiEinaiEdw(mainTable, grammes, sthles);
          PrintTable(mainTable, n, m, SelectedLevel, boubalia, 0);
        } else {
          MessageHandler("Error! H thesh pou edwses einai hdh anoixth.", 0);
        }
      } else if (move == 'w' || move == 'W') {
        Wisdom(mainTable, n, m); 
      }

      if (PareTisTheseisTouPinakaXwrisTaBoubalia(mainTable, n, m) == 0) { // elegxei ean den exei kanena stoixeio pou mporei na anoixtei

        if (SelectedLevel >= 0 && SelectedLevel < 4) {

          // afou einai < 4 level mporei na sunexisei auksanontas to level,to n kai to m, kanontas free kai ksana malloc ton pinaka
          // system("clear");
          PrintTable(mainTable, n, m, SelectedLevel, boubalia, 1);
          printf("Nikhses auto to level!!! Perimene mexri na pas sto epomeno level...\n");
          delay(wait_if_win * 1000);
          // system("clear");

          ftiaxeTaBoubaliaMonoOtanEpilekseiS = 0;
          
          for (i = 0; i <= n; i++) {
            free(mainTable[i]);
          }
          free(mainTable);

          n++;
          m++;
          SelectedLevel++;

          mainTable = (int **) malloc((n + 1) * sizeof(int *));
          if (mainTable == NULL) exit(1);

          for (i = 0; i <= n; i++) {
            mainTable[i] = (int *) malloc((m + 1) * sizeof(int));
            if (mainTable[i] == NULL) exit(1);
          }

          for (i = 1; i <= n; i++) {
            for (k = 1; k <= m; k++) {
              mainTable[i][k] = 100;
            }
          }

          selector = 1;
          PrintTable(mainTable, n, m, SelectedLevel, boubalia, 0);
        } else {
          MessageHandler("You win! Game finished!!!\n", 1);

          for (i = 0; i <= n; i++) {
            free(mainTable[i]);
          }
          free(mainTable);

          return 0;
        }
      }
    }
  }

  // kane free ton pinaka
  for (i = 0; i <= n; i++) {
    free(mainTable[i]);
  }
  free(mainTable);
  
  return 0;
}

int CheckInput(char message[]) {
    int checkForString;
    // while (1) {
        checkForString = 1;

        char args = getchar();
        while (args != '\n' && args != EOF) {
            // printf("test %c\n", args);
            if (!(args >= 48 && args <= 57)) {
                checkForString = 0;
                // break; // den mporw na balw break dioti prepei na elegxei ola ta strings logw getchar
            }
            args = getchar();
        }
        
        if (checkForString) { 
            return 0;
        } else {
            MessageHandler(message, 0);
            return 1;
        }
    // }
}

void MessageHandler(char args[], int check) {
    if (check == 1) {
        printf("\n%s", args);
    } else {
        printf("\n");
        printf(blue "%s " reset, args);
        printf("\n");
    }
}

int ConvertNumberToClosestInt(double number) {
    return ((( (int) (number * 10)) % 10) >= 5) ? number += 1 : number;
}

int WelcomeMessage() {
    double select;
    int ckecker = 1;
    printf(red "\n\t\t\t\t\t\t\t\t--------------------------");
    printf("\n\t\t\t\t\t\t\t\t| "green"ENA BOUBALI STO KEFALI"red" |\n" reset);
    printf(red "\t\t\t\t\t\t\t\t--------------------------\n\n" reset);

    printf(red "-----------------------------------------------------------------" green " SXETIKA ME TO PAIXNIDI " reset red" -----------------------------------------------------------");
    printf("\n| "green"-"red" ARXIKA dineis to "green"n"red" (grammes) kai to "green"m"red" (sthles) tou pinaka poy thes na ksekinhseis.                                                              |");
    printf("\n| "green"-"red" To "green"n"red" pairnei times apo "green"%d"red" kai panw kai to "green"m"red" pairnei times apo "green"%d"red" kai panw.                                                                        |", grammes_min, sthles_min);
    printf("\n| "green"-"red" PROSOXH O PINAKAS SUNOLIKA DEN THA PREPEI NA KSEPERNAEI TO "green"%d"red" KAI DEN THA PREPEI NA EINAI LIGOTEROS TOU "green"%d"red".                                    |", table_max, table_min);
    printf("\n| "green"-"red" H PRWTH KINHSH AFOU FTIAXETE TON PINAKA EINAI NA ANOIXETE ENA KOUTAKI, OTAN TO ANOIXETE THA PROSTHETHOUN TA BOUBALIA.                           |");
    printf("\n| "green"1."red" O skopos tou paixnidiou einai na breis ola ta koutakia pou na einai kleista.                                                                   |");
    printf("\n| "green"2."red" Kleisth thesh thewreitai ean to koutaki exei to sumbolo "green"#"red" h einai arithmos "green"(1 - 8)"red".                                                            |");
    printf("\n| "green"3."red" Ta koutakia me to sumbolo "green"@"red" einai ta boubalia dhladh an peseis panw tous xaneis.                                                               |");
    printf("\n| "green"4."red" An thes na anoixeIs ena meros tou pinaka tha prepei na epilekseis sthn arxh to gramma "green"s"red" h "green"S"red" kai meta tis suntetagmenes.                        |");
    printf("\n|    toy shmeiou pou thes, opws fainontai ston pinaka, na anoikseis px "green"(s 4, 3)"red" h "green"(S 4, 3)"red".                                                         |");
    printf("\n| "green"5."red" An h thesh pou thes na anoikseis einai hdh anoixth tote den tha allaksei tipota ston pinaka.                                                   |");
    printf("\n| "green"6."red" An thes na shmadepseis ena shmeio ston pinaka tote epilegeis sthn arxh to gramma "green"b"red" h "green"B"red" kai meta.                                               |");
    printf("\n|    tis suntetagmenes opws fainontai ston pinaka px "green"(b 2, 8)"red" h "green"(B 2, 8)"red". Epishs to shmademeno shmeio sumbolizetai ston pinaka me to *.             |");
    printf("\n| "green"7."red" Sthn periptwsh pou exeis hdh shmadepsei ena shmeio kai to ksana epilekseis me to gramma "green"b"red" h "green"H"red".                                                 |");
    printf("\n|    tha epaneltei opws htan prin to shmadepseis.                                                                                                   |");
    printf("\n| "green"8."red" An thes na pareis bohtheia gia to poio koutaki den einai anoixto apla patas to gramma "green"h"red" h "green"H"red".                                                   |");
    printf("\n| "green"9."red" An thes na pareis bohtheia gia to megalutero meros mias perioxhs apo kleista koutakia apla patas to gramma "green"w"red" h "green"W"red".                              |");
    printf("\n| "green"10."red" Sthn periptwsh pou thes na stamathseis to programma apla patas to gramma "green"x"red" h "green"X"red".                                                               |");
    printf("\n| "green"11."red" An thn sugkekrimenh pista thn kerdiseis tote anebaineis "green"+1"red" level apo to auto pou epaizeis kai o pinakas ginetai "green"+1 grammes"red" kai "green"+1 sthles"red".     |");
    printf("\n| "green"12."red" An eisai sto level "green"4"red" kai to kerdiseis tote to paixnidi teleiwnei.                                                                             |");
    printf("\n| "green"13."red" POLU MEGALH PROSOXH STO INPUT POU DINEIS DIOTI DEN THA PREPEI NA EMPERIEXOUN XARAKTHRES EKTOS APO AUTOUS ANAFERTHKAN EPANW.                   |");
    printf("\n| "green"14."red" Tha prepei na dineis prosxoxh sta mhnumata pou sou dinei to programma.                                                                        |");
    printf("\n| "green"15."red" OLES OI TIMES THA PREPEI NA EINAI AKERAIES, STHN PERIPTWSH POU DEN EINAI THA METATREPONTAI STON KONTINOTERO AKERAIO.                          |");
    printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------" reset);

    printf("\n\n");

    do {
        do {
            if (ckecker) {
                printf(red "\nPlhktrologhste: \n\t"green"0"red" = Gia na stamathsete to paixnidi\n\t"green"1"red" = Gia na paiksete\n"green"Epilogh: " reset);
            } else {
                printf("\nEpilogh: ");
            }
            scanf("%lf", &select);
            select = ConvertNumberToClosestInt(select);
            if (select < 0 || select > 3) {
                MessageHandler("Error! Edwses lathos arithmo.", 0);
            }
        } while(CheckInput("Error! Edwses estw kai enan xarakthra. Ksanprospathise. ") != 0);
        
        if ( (int) select == 0) {
            return 0;
        } else {
            select = Selection(select);
            // if (select == 3) {
            //     ckecker = !ckecker;
            // }
        }

    } while( (int) select != 1);

    return 1;
}

int Selection(int s) {
    switch (s) {
        case 1:
            return 1;    
        // case 2:
        //     printf("\n\nCommands:\n\t/help <= Se periptwsh pou xreiasteis bohtheia.\n");
        //     break;
        // case 3:
        //     return 3;
        default:
            return 0;
    }
}

int level() {
    float diff;
    do {
        //o parakato kodikas einai gia na epilejei thn dyskolia sto paixnidi
        printf(green "\nGame difficulties:\n" reset);
        printf(green"\t1"red" - Easy\n");
        printf(green "\t2"red" - Medium\n");
        printf(green"\t3"red" - Hard\n");
        printf(green"\t4"red" - Very Hard\n");
        printf(green"Please choose difficulty: "reset);
        scanf("%f", &diff);
        
        if (diff < 0 || diff > 4) {
            MessageHandler("Error! Edwses lathos arithmo. Ksanaprospathise. ", 0);
        }
    } while(CheckInput("Error! Edwses estw kai enan xarakthra. Ksanaprospathise. ") != 0 || (diff < 1 || diff > 4));
    
    diff = ConvertNumberToClosestInt(diff);

    return diff;
}

int GenerateBoubalia(int n, int m, int level) {
    double result;
    switch (level) {
        case 1: // eukolo
            result = (double) (n * m) / 8;
        break;
        case 2: // metrio
            result = (double) (n * m) / 7;
        break;
        case 3: // duskolo 
            result = (double) (n * m) / 6;
        break;
        case 4: // polu duskolo 
            result = (double) (n * m) / 5;
        break;
    }

    result = ConvertNumberToClosestInt(result);

    return result;
}

int PareTisTheseisTouPinakaXwrisTaBoubalia(int **main, int n, int m) {
    int i, k, sum = 0;
    for (i = 1; i <= n; i++) {
        for (k = 1; k <= m; k++) {
            if (main[i][k] == 100 || (main[i][k] >= 1 && main[i][k] <= 8)) {
                sum++;
            }
        }
    }

    return sum;
}

int ReturnInputValue(int number, char msg[]) {
    printf(green "%s" reset, msg);
    scanf("%d", &number);
    return number;
}

void PrintTable(int **main, int n, int m, int level, int boubalia, int isWon) {

    int i, k, uncoveredBoubalia = 0;
    for (i = 1; i <= m; i++) {
        if (i == 1) 
            printf(red"   |  %d  ", i);
        else {
            if (i < 10) {
                printf("  %d  ", i);
            } else 
                printf(" %d  ", i);
        }
    }
  
  printf("\n");
  
  for (i = 0; i <= m; i++) printf("-----");
  
  printf("\n"reset);

  for (i = 1; i <= n; i++) {
    if (i < 10)
      printf(red " %d |" reset, i);
    else 
      printf(red "%d |" reset, i);
    for (k = 1; k <= m; k++) {
        // printf("  %d  ", main[i][k]);
        if (main[i][k] == 150) {
            printf("  *  ");
        }

        if (main[i][k] == 100 || (main[i][k] >= 1 && main[i][k] <= 8)) {
            printf(blue "  #  "reset );
        } else if (main[i][k] == 110) {
            if (isWon) 
                printf(red "  @  " reset);
            else
                printf(blue "  #  " reset);
        } else if (main[i][k] == 120) {
            printf(green "  .  " reset);
        } else if (main[i][k] == 130 || main[i][k] == 230 || (main[i][k] >= 310 && main[i][k] <= 380)) {
            printf(green "  *  "reset );
            if (main[i][k] == 230)
                uncoveredBoubalia++;
        } else if (main[i][k] >= 10 && main[i][k] <= 18) {
            printf(green "  %d  " reset, main[i][k] - 10);
        }
    }

    printf("\n");
  }

    switch (level) {
        case 1:
            printf(red "\nLevel: "green"1\n"red"Difficulty: "green"Easy\n"reset);
        break;
        case 2:
            printf(red "\nLevel: "green"2\n"red"Difficulty: "green"Normal\n"reset);
        break;
        case 3:
            printf(red"\nLevel: "green"3\n"red"Difficulty: "green"Hard\n"reset);
        break;
        case 4:
            printf(red"\nLevel: "green"4\n"red"Difficulty: "green"Very Hard\n"reset);
        break;
    }

    if (boubalia != 0) {
        printf(red"Uncovered buffaloes: "green);
        printf("%d", boubalia - uncoveredBoubalia);
    } 

    printf("\n"reset);
    
}

int RandomValue(int number) {
    return 1 + rand() % number;
}

int TableCheck(int **main, int grammes, int sthles, int extra1, int extra2, int firstGrammes, int firstSthles, int t) {
    
    if (main[firstGrammes][firstSthles] == 120 || (main[firstGrammes][firstSthles] >= 10 && main[firstGrammes][firstSthles] <= 18)) {
        return 0;
    }
    
    int i, k;

    int grammh = 0;
    int sthlh = 0;
    if (t == 1) {
        for (i = firstGrammes - 1; i <= firstGrammes + 1; i++) {
            if (i > 0 && i <= extra1) {
                for (k = firstSthles - 1; k <= firstSthles + 1; k++) {
                    if (k > 0 && k <= extra2) {
                        if (main[i][k] >= 1 && main[i][k] <= 8) {
                            main[i][k] += 10;
                        } else if (main[i][k] == 100) {
                            grammh = i;
                            sthlh = k;
                        }
                    } else continue;
                }
            } else continue;
        }
        if (grammh != 0 && sthlh != 0) {
            TableCheck(main, grammh, sthlh, extra1, extra2, firstGrammes, firstSthles, 2);
        } else {
            TableCheck(main, grammes, sthles, extra1, extra2, firstGrammes, firstSthles, 2);
        }
    } else {   
        int sum;
        if (main[grammes][sthles] == 100) main[grammes][sthles] = 120; 
        for (i = grammes - 1; i <= sthles + 1; i++) {
            if (i > 0 && i <= extra1) {
                sum = 0;
                for (k = sthles - 1; k <= sthles + 1; k++) {
                    if (k > 0 && k <= extra2) {
                        if (main[i][k] >= 1 && main[i][k] <= 8) {
                            sum++;
                            main[i][k] += 10;
                        } else if (main[i][k] == 100) {
                            main[i][k] = 120;
                            grammh = i;
                            sthlh = k;
                        } else if (main[i][k] == 120) continue;
                    } else continue;
                }
            } else continue;
        }
        if (grammh != 0 && sthlh != 0) {
            TableCheck(main, grammh, sthlh, extra1, extra2, firstGrammes, firstSthles, 2);
        } else if (sum >= 0 && sum < 3) {
            return 1;
        }
    }

}

void PisteueiOPaikthsOtiEinaiEdw(int **main, int grammes, int sthles) {
    if (main[grammes][sthles] == 110) { // an exei panw tou boubali auth h thesh oute kampanoula
        main[grammes][sthles] = 230; 
    } else if (main[grammes][sthles] >= 1 && main[grammes][sthles] <= 8) { // an exei panw tou kampanoula xwris na exei anoixtei auth h thesh
        main[grammes][sthles] = (main[grammes][sthles] * 10) + 300; 
    } else if (main[grammes][sthles] == 100) { // kanto 130 otan den einai anoixth h thesh
        main[grammes][sthles] = 130; 
    } else if (main[grammes][sthles] >= 310 && main[grammes][sthles] <= 380) { // kseshmadepse tis kampanoules pou den einai anoixtes
        main[grammes][sthles] = (main[grammes][sthles] / 10) % 10; 
    } else if (main[grammes][sthles] == 130) { // kseshmadepse to stoixeio pou den einai anoixto
        main[grammes][sthles] = 100;
    } else if (main[grammes][sthles] == 230) { // kseshmadepse an exei panw tou boubali
        main[grammes][sthles] = 110;
    }
}

int DesAnEpesesPanwSeBoubali(int **mainTable, int grammes, int sthles) {
    if (mainTable[grammes][sthles] == 110 || mainTable[grammes][sthles] == 230) {
       return 1;
    } else {
        return 0;
    }
}

int DesAnEinaiHdhAnoixthHThesh(int **mainTable, int grammes, int sthles) {
    if ((mainTable[grammes][sthles] >= 10 && mainTable[grammes][sthles] <= 18) || mainTable[grammes][sthles] == 120) {
        return 0;
    } else {
        return 1;
    }
}

void Wisdom(int **main, int n, int m) {
    int i, k, ik, ki, iik, kki, sum1 = 0, sum2 = 0, grammh, sthlh;

    for (i = 1; i <= n; i++) {
        for (k = 1; k <= m; k++) {
            if (main[i][k] == 100 || (main[i][k] >= 1 && main[i][k] <= 8)) {
                sum1 = 0;
                for (ik = i - 1; ik <= i + 1; ik++) {
                    if (ik > 0 && ik <= n) {
                        for (ki = k - 1; ki <= k + 1; ki++) {
                            if (ki > 0 && ki <= m) {
                                for (iik = ik - 1; iik <= ik + 1; iik++) {
                                    if (iik > 0 && iik <= n) {
                                        for (kki = ki - 1; kki <= ki + 1; kki++) {
                                            if (kki > 0 && kki <= m) {
                                                if (main[iik][kki] == 100 || (main[iik][kki] >= 1 && main[iik][kki] <= 8)) {
                                                    sum1++;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (sum1 > sum2) {
                grammh = i;
                sthlh = k;
                sum2 = sum1;
            }
        }
    }

    if (sum1 != 0 && sum2 != 0)
        printf("H kaluterh thesh pou mporeis na anoikseis einai h %d, %d\n", grammh, sthlh);
}


void delay(int number_of_seconds)
{
  int milli_seconds = 1000 * number_of_seconds;

  clock_t start_time = clock();

  while (clock() < start_time + milli_seconds);
}

// 100 = den einai anoigmena (#)
// 110 = exoun boubalia (@)
// 120 = anoigmena(.)
// >= 1 && <= 8 = kampanoules pou den einai anoigmenes
// >= 10 && <= 18 = kampanoules pou einai anoigmenes
// 200 = blacklist 
// 130 = pisteuei oti einai ekei to boubali (einai apla kleisto(#))
// 230 = pisteuei oti einai ekei to boubali (an exei panw tou boubali auth h thesh)
// >= 310 kai <= 380 = pisteuei oti einai ekei to boubali (an exei panw tou kampanoula xwris na exei anoixtei auth h thesh)