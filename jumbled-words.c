#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int medium_fun(int *);
int hard_fun(int *);
char leaderboard[50][20]={"aryan","rixter","dumbeldore"};
char name[20];
int score_board[10]={35,34,34};

void red(){
    printf("\033[1;31m");
}
void yellow() {
  printf("\033[1;33m");
}

void reset () {
  printf("\033[0m");
}
void Purple(){ 
    printf("\033[1;35m");
    }

void blue(){ 
    printf("\033[1;34m");
    }
void cyan(){ 
    printf("\033[1;36m");
    }

void green()
{
    printf("\033[1;32m");
}



int j;
int main()
{
    int i=0,decision,score=0, *ptr_score;
    char  ans[20];
    char easy[10][20]=
    {
        "TAC",
        "HATRE",
        "RCA",
        "GLOD",
        "YEE",
        "NTPLA",
        "RBID",
        "ETER",
        "IARN",
        "NOOM",

    };
    char easy_ans[10][20]={
        "cat",
        "earth",
        "car",
        "gold",
        "eye",
        "plant",
        "bird",
        "tree",
        "rain",
        "moon"
    };
    red();
    printf("------------------------WELCOME------------------------");
    // reset();
    printf("\nGive me your name: ");
    fgets(name,sizeof(name),stdin);

    cyan();
    printf("Hello %swelcome to THE JUMBLED, here are some instructions to the game.\n",name);
    printf("There are total 3 levels\n\n");
    printf("=> level 1 has 10 words and 1 point for 1 correct guess");
    printf("\n=> level 2 has 5 words and 2 points for 1 correct guess");
    printf("\n=> level 3 has 3 questions with 5 points each to pass the level");
    printf("\n====>press 1. to play! or press 0. to quit! ");
    reset();
    scanf("%d",&decision);
    if(decision==0)
    {
        return 0;
    }
    printf("level 1: \n\n");

    Purple();
    printf("BEST OF LUCK, YOU WILL NEED IT :)\n\n");
    reset();
    yellow();
    printf("get atleast 7 correct to pass level 1!\n\n");
    reset();
    for(i=0;i<10;i++)
    {
    printf("the %d question is: %s",i+1,*(easy+i));
    printf("\nenter your guess: ");
    scanf("%s",&ans);
    if (strcmp(ans,*(easy_ans + i))==0)
    {
        green();
        printf("correct!\n\n");
        reset();
        score+=1;
        if(score<=7){
            
            red();
        printf("your current score is: %d, you need %d more to pass this level.\n\n",score,7-score);
        reset();
        }
        else{
            green();
             printf("your current score is %d, you need 0 to pass the level one\n\n",score);
             reset();
        }
    }
    else
    {
        red();
        printf("incorrect!\n\n");
        if(score<=7){
        printf("your current score is: %d, you need %d more to pass this level.\n\n",score,7-score);
        reset();
        }
        
        
        else{
            green();
            printf("your current score is %d, you need 0 to pass the level one\n\n",score);
        }
        reset();
    }
    }
    green();
    printf("your total score is: %d\n\n",score);
    reset();

    if(score>=7)
    {
        ptr_score=&score;
        medium_fun(ptr_score);
    }
    else
    {
        red();
        printf("you lose! try again.\n");
        reset();
        return 0;
    }
   
    return 0;
}




int medium_fun(int *ptr_score)
{
    char medium[5][20]=
    {
        "AVENHE",
        "VISROA",
        "SURREPSE",
        "EOKSLENT",
        "MITOIGRNIA",

    };
    char medium_ans[10][20]={
        "heaven",
        "savior",
        "pressure",
        "skeleton",
        "migration",
    };
    char ans[20];
    int i, medium_score=0;
    red();
    printf("--------------------------------");
    printf("\n\nwelcome to level 2: hehehe lets see if could pass this.\n\n");
    reset();
    yellow();
    printf("get atleast 3 correct to pass level 2!\n\n");
    reset();
    for(i=0;i<5;i++)
    {
    printf("the %d question is: %s",i+1,*(medium + i));
    printf("\nenter your guess: ");
    scanf("%s",&ans);
    if (strcmp(ans,*(medium_ans + i))==0)
    {
        green();
        printf("correct!\n\n");
        reset();
        *ptr_score+=2;
        medium_score+=2;
        if(medium_score<=6){
            red();
        printf("your current score is: %d, you need %d more to pass this level.\n\n",*ptr_score,6-medium_score);
        reset();
        }
        else{
            green();
             printf("your current score is %d, you need 0 to pass the level one\n\n",*ptr_score);
             reset();
        }
    }
    else
    {
        red();
        printf("incorrect!\n\n");
        if(medium_score<=6){
        printf("your current score is: %d, you need %d more to pass this level.\n\n",*ptr_score,6-medium_score);
        reset();
        }
        else{
            green();
             printf("your current score is %d, you need 0 to pass the level one\n\n",*ptr_score);
             reset();
        }
    }
    }
    green();
    printf("your total score is: %d\n\n",*ptr_score);
    reset();
    if(medium_score>=6)
    {
        hard_fun(ptr_score);
    }
    else
    {
        red();
        printf("you lose! try again.");
        reset();
        return 0;
    }
    return 0;
}

int hard_fun(int *ptr_score)
{
    red();
    printf("--------------------------------");
    printf("\n\nHAHAHAHAH so you cleared the 2nd round? lets see about the final and the last round, best of luck you will absolutely need it :)\n\n");
    reset();
    char hard[3][20]=
    {
        "OOHSHLAICILPP",
        "AABRMSTENMESR",
        "TSOUNERELCF"

    };
    char hard_ans[3][20]={
        "philosophical",
        "embarrassment",
        "fluorescent"
    };
    char ans[20];
    int i,hard_score=0;
    yellow();
    printf("get atleast 2 correct to win the game!\n\n");
    reset();
    for(i=0;i<3;i++)
    {
    printf("the %d question is: %s",i+1,*(hard + i));
    printf("\nenter your guess: ");
    scanf("%s",&ans);
    if (strcmp(ans,*(hard_ans + i))==0)
    {
        green();
        printf("correct!\n\n");
        reset();
        hard_score+=5;
        *ptr_score+=5;
      if(hard_score<=10){
          red();
        printf("your current score is: %d, you need %d more to pass this level.\n\n",*ptr_score,10-hard_score);
        reset();
        }
        else{green();
             printf("your current score is %d, you need 0 to pass the level one\n\n",*ptr_score);
             reset();
        }
    }
    else
    {
        red();
        printf("incorrect!\n\n");
       if(hard_score<=10){
        printf("your current score is: %d, you need %d more to pass this level.\n\n",*ptr_score,10-hard_score);
        reset();
        }
        else{
            green();
             printf("your current score is %d, you need 0 to pass the level one\n\n",*ptr_score);
             reset();
        }
    }
    }
    green();
    printf("--------------------------------");
    printf("\nyour total score is: %d\n",*ptr_score);
    printf("--------------------------------");
    reset();
    if(hard_score>=10)
    {
        green();
        printf("\n\nCONGRATULATIONS !!! YOU CLEARED THE GAME!\n");
        printf("Your total score of the game is: %d out of 35\n\n",*ptr_score);
        printf("\n--------------------------------");
        reset();
        Purple();
        printf("\n~~~~~~~~leaderboarddd!!!!~~~~~~~~\n");
        reset();
        printf("--------------------------------\n");
    for(i=0;i<4;i++)
        {
            if(i==3)
            {
                cyan();
                printf("%d. %spoints-%d\n",i+1,name,*ptr_score);
                reset();
                break;
                
            }
        
            printf("%d. %s\npoints-%d\n",i+1,leaderboard+i, score_board[i]);
            reset();
        }
        printf("\n--------------------------------");
        

        
    }
    else
    {
        red();
        printf("you lose! try again.");
         printf("Your total score of the game is: %d out of 35",*ptr_score);
         printf("\n--------------------------------");
         reset();
        return 0;
    }
   
    
    return 0;
}
