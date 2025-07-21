#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define option_value 5000
#define blue "\x1b[32m"
#define reset "\x1b[0m"

typedef struct
{
    int year, month, day, hour, minute, second; 
} dateTime;

//xrhsimopoeitai gia to auroisma ton parakato
typedef struct 
{
    int reactions, likes, loves, wows, hahas, sads, angrys, comments, shares;
} reactions;

//aytoanaforikh diplh syndedemenh lista-
typedef struct trumpPost 
{   
    char *text;
    char *info;  // px to timeline Photos
    char type[6];  // px status, link, video
    char *link;    // to link

    dateTime posted;
    reactions feelings;
    
    char learnedFrom[5];
    struct trumpPost *next;	  
    struct trumpPost *prev;
} post;

int CheckCommand(char option[option_value]);
void instructions();
struct trumpPost *insertToList(struct trumpPost *head, char arr[100], char where[]);
struct trumpPost *text(post *newItem, char option[option_value]);
void *ReturnSecondArgument(char option[option_value]);
struct trumpPost *Date(struct trumpPost *newItem, char option[option_value]);
struct trumpPost *Time(struct trumpPost *newItem, char option[option_value]);
struct trumpPost *newpost(struct trumpPost *newItem, char option[option_value]);
struct trumpPost *TpothetiseNoumera(int i, struct trumpPost *newItem, char option[option_value], int counter);
void PrintList(post *head, int number);
void after(int month, int day, int year, struct trumpPost *head);
void before(int month, int day, int year, struct trumpPost *head);
void typecount(char typetext[10], struct trumpPost *head);
int check(char *emoji);
void count(int value, struct trumpPost *head, char *text);
void find(char *text, struct trumpPost *head, char source[]);
int CheckValues(post *newItem);
void reverseprint(struct trumpPost *head, int num);
void *deleteN(struct trumpPost *head);
void *deleteO(struct trumpPost *head);
void free_mem(struct trumpPost *head);
void free_memDelete(struct trumpPost *head);