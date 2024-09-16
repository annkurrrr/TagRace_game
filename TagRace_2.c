#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));{
        int Pposition=3,Cposition=0,Pchoice,Cchoice,difficulty;
        printf("\nWELCOME TO TAG!!!!\n\n");
        printf("RULES:\n");
        printf("1.If player and computer stand at same position, player is out.\n");
        printf("2.If the difference between positions of player and computer exceed a certain number(depends on difficulty), player is out.\n");
        printf("3.Reach 100 before the computer to win.\n\n");
        printf("SELECT DIFFICULTY(1-easy, 2-medium, 3-hard):");
        scanf("%d",&difficulty);
        printf("\n");
        if(difficulty==1)
        printf("Difficulty:easy\nDifference between position of player and computer cannot exceed 6.\n\n");
        
        else if(difficulty==2)
        printf("Difficulty:medium\nDifference between position of player and computer cannot exceed 5.\n\n");

        else
        printf("Difficulty:hard\nDifference between position of player and computer cannot exceed 4.\n\n");

        printf("Player is standing at %d.\n",Pposition);
        printf("Computer is standing at %d.\n\n",Cposition);
        while(Pposition!=Cposition){
            printf("===========================================\n\n");
            printf("enter a number of your choice(from 0 to 6):");
            scanf("%d",&Pchoice);
            printf("\n");
            if(Pchoice>6||Pchoice<0){
                printf("play again\n");
                continue;
            }
            printf("Player chose %d.\n",Pchoice);
            Cchoice=rand()%7;
            printf("Computer chose %d.\n\n",Cchoice);
            Pposition=Pposition+Pchoice;
            Cposition=Cposition+Cchoice;
            printf("Player is standing at %d.\n",Pposition);
            printf("Computer is standing at %d.\n\n",Cposition);
            if(Pposition==Cposition){
                printf("Computer caught you lol. Try again!\n\n");
                printf("Your score:%d\n\n",Pposition);
                break;
            }
            else if(Pposition>=100&&Cposition<100||Pposition>=100&&Cposition<Pposition){
                printf("You win!! That was sick!!\n");
                printf("Your score:%d\n\n",Pposition);
                break;
            }
            else if(Cposition>=100&&Pposition<100||Cposition>=100&&Pposition<Cposition){
                printf("Computer beat you!! Try again!!\n");
                printf("Your score:%d\n\n",Pposition);
                break;
            }
            if(difficulty==1){
                if(Pposition-Cposition>6||Cposition-Pposition>6){
                    printf("You lose. Mind the gap lil bro.\n\n");
                    printf("Your score:%d\n\n",Pposition);
                    break;
                }    
            }
            else if(difficulty==2){
                if(Pposition-Cposition>5||Cposition-Pposition>5){
                    printf("You lose. Mind the gap lil bro.\n\n");
                    printf("Your score:%d\n\n",Pposition);
                    break;
                }    
            }
            else if(difficulty==3){
                if(Pposition-Cposition>4||Cposition-Pposition>4){
                    printf("You lose. Mind the gap lil bro.\n\n");
                    printf("Your score:%d\n\n",Pposition);
                    break;
                }    
            }
        }    
    }
    return 0;
}