#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int generatenumber( );
int score( );
void checkwin( );
int generatenumber(int n)
{
    //srand(time(NULL));
    return rand( )%n;    
}
int score(int a, int b)
{
        if(a==1 && b==3)
            return 1;
        else if(a==2 && b==1)
            return 1;
        else if(a==3 && b==2)
            return 1;
         else if(a==b)
             return 0;
         else 
             return -1;
}

void checkwin(int x, int y)
{
    if(x>y)
        printf("YOU are the WINNER.");
    else
        printf("YOU LOST");    
}

int main( )
{
    int ps=0, i, cs=0, temp1, temp2, count;
    char player, computer;
    char choice[3]={'R', 'P', 'S'};
    printf("\n                                            ROCK    PAPER    SCISSORS\n");
    printf("                                           ------  -------  ----------\n\n");
   
    printf("\nEnter 1 for 'Rock'    |    Enter 2 for 'Paper'    |    Enter 3 for 'Scissors'\n\n");
    for(i=0;i<3;i++)
    {
         
        printf("Player enter your choice:- ");
        scanf("%d",&temp1);
        player=choice[temp1-1];
         
         
        printf("Computer's choice:- ");
        temp2=generatenumber(3)+1;
        printf("%d\n\n",temp2);
        computer=choice[temp2-1];
        count=score(temp1, temp2);
        if(count==1)
            ps++;
            else if(count==0)
                i--;
            else
                cs++;           
        
        
    }   
    checkwin(ps, cs);
    return 0;
}
