
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>    //for using system("cls"); command' if using turbo c++ just use clrscr(); command and remove system("cls");
//===============================
//global initialization section
//================================
char a[9]={'1','2','3','4','5','6','7','8','9'}; // Tic Tac Space
char player1[20];  //for player name
char player2[20];  //for player name
int selection,i,count=0,input; 
char p,s;
void check();
//===============================
// For text display in program
//===============================
void gamename()
{
    printf("\t\t\t------------------------");   
    printf("\n\t\t\t*WELCOME TO TIC-TAC-TOE*\n");
    printf("\t\t\t------------------------\n");   
    printf("\n\tCREATED BY NIL\n");
    printf("\t--------------");
    printf("\n**********\n");
    printf("***NOTE***\n");
    printf("**********\n");
    printf("AFTER EVERY ENTRY PRESS *ENTER KEY*\n\n");
    printf("DEDICATED TO MY FAMILY\n");
    printf("INSPIRED BY HLC SIR\n");
   
}
//==================
// for game display
//==================
void display()
{
    printf("\n\t\t\t|---|---|---|\n");
    printf("\t\t\t| %c | %c | %c |\n",a[0],a[1],a[2]);
    printf("\t\t\t|---|---|---|\n");
    printf("\t\t\t| %c | %c | %c |\n",a[3],a[4],a[5]);
    printf("\t\t\t|---|---|---|\n");
     printf("\t\t\t| %c | %c | %c |\n",a[6],a[7],a[8]);
    printf("\t\t\t|---|---|---|\n");
   
}
//========================
// For player introduction
//========================
void playerintro()
{
    printf("ENTER NAME OF PLAYER 1:\nENTER NAME OF PLAYER 2:\n");
    fflush(stdin);
    scanf("%s",player1);
    fflush(stdin);
    scanf("%s",player2);
    printf("PLAYER 1: (%s)\nPLAYER 2:(%s)\n",player1,player2);
}
//=================================
//For Who will start the game first
//=================================
void selplayer()
{
    printf("PRESS 1 FOR %s and PRESS 2 FOR %s\n",player1,player2);
    fflush(stdin);
    scanf("%d",&selection);
    switch(selection)
    {
        case 1:
               printf("Player {%s} Will Start the Game",player1);
               break;
               case 2:
                   printf("Player {%s} Will Start the Game",player2);
                   break;
                   default:
                       printf("Choose the player to contine Game......");
                       break;
                  
    }
}
//===================================
//To start the game by selected player
//===================================
void play()
{
    printf("\nENTER THE POSITION (1 TO 9) AND SYMBOL (0 AND X)\n");
    fflush(stdin);
    scanf("%c",&p);
    fflush(stdin);
    scanf("%c",&s);
    for(i=0;i<=8;i++)
    {
        if(a[i]==p)
        {
            a[i]=s;
       
        }
    }
    system("cls");
    printf("\t\t\t------------------------");   
    printf("\n\t\t\t*WELCOME TO TIC-TAC-TOE*\n");
    printf("\t\t\t------------------------\n");   
    printf("\n\tCREATED BY NIL\n");
    printf("\t---------------");
    printf("\n**********\n");
    printf("***NOTE***\n");
    printf("**********\n");
    printf("AFTER EVERY ENTRY PRESS *ENTER KEY*\n");
    display();
    count++;    //To check how mank turn have done turn should not be more than nine
    check();

       
}
//===================
//To check for win
//====================
void check()
{
    if((a[0]=='x'&&a[1]=='x'&&a[2]=='x')||(a[0]=='x'&&a[3]=='x'&&a[6]=='x')||(a[0]=='x'&&a[4]=='x'&&a[8]=='x')||(a[2]=='x'&&a[5]=='x'&&a[8]=='x')||(a[1]=='x'&&a[4]=='x'&&a[7]=='x')||(a[3]=='x'&&a[4]=='x'&&a[5]=='x')||(a[6]=='x'&&a[7]=='x'&&a[8]=='x')||(a[2]=='x'&&a[4]=='x'&&a[6]=='x'))
    {
        //display();
        printf("PLAYER WITH SYMBOL [x] WIN!!!!!!\n");
        count=0;
       
    }
    else if((a[0]=='0'&&a[1]=='0'&&a[2]=='0')||(a[0]=='0'&&a[3]=='0'&&a[6]=='0')||(a[0]=='0'&&a[4]=='0'&&a[8]=='0')||(a[2]=='0'&&a[5]=='0'&&a[8]=='0')||(a[1]=='0'&&a[4]=='0'&&a[7]=='0')||(a[3]=='0'&&a[4]=='0'&&a[5]=='0')||(a[6]=='0'&&a[7]=='0'&&a[8]=='0')||(a[2]=='0'&&a[4]=='0'&&a[6]=='0'))
    {
    //    display();
        printf("PLAYER WITH SYMBOL [0] WIN!!!!!!\n");
        count=0;
       
    }
    else
    {
        if(count==9)
            {
                printf("Match Draw\n\n");
                printf("-----------------\n");
                count=0;
           
            }
         else
            play();
           
    }
     

}
//----------------------------------------
// To restart the game again
//---------------------------------------
void playagain()
{

    system("cls");
    char a[9]={'1','2','3','4','5','6','7','8','9'};

    a[0]='1';
    a[1]='2';
    a[2]='3';   
    a[3]='4';
    a[4]='5';
    a[5]='6';   
    a[6]='7';   
    a[7]='8';   
    a[8]='9';
    gamename();
    display();
    playerintro();
    selplayer();
    play();   
   
}
//----------------------------------------------------------------------------------------------------------------------------
//main function is call
//-----------------------------------------------------------------------------------------------------------------------------
void main()
{
    gamename();
    display();
    playerintro();
    selplayer();
    play();   
    printf("WANT TO PLAY AGAIN!!!!!!!!!!!!\n");
    printf("-------------------------------\n");

    printf("PRESS 1 FOR [YES] OR 2 FOR [NO]\n");
    scanf("%d",&input);
    if(input==1)
    {
    a[0]='1';
    a[1]='2';
    a[2]='3';   
    a[3]='4';
    a[4]='5';
    a[5]='6';   
    a[6]='7';   
    a[7]='8';   
    a[8]='9';
        playagain();
    }
    else
    {
        printf("\n\nHOPE YOU ENJOY THE GAME !!! SEE YOU AGAIN\n\n");
        printf("----------THE END--------\n");
        printf("\n-------THANK---YOU-----\n");
    }
    // End of program
       
}
