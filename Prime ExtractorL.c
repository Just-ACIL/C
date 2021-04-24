#include <stdio.h>
//MADE BY Λ
int main(void){
    int A,B,C,D,E;
    printf("Till Where Do You Want To Extract Prime Numbers? \n");
    scanf("%i",&A);
    if(A>0){
        printf("Here You Go : \n");
        printf("| 02 |\n");
        E=1;//MADE BY Λ
        for(B=1;B<=A-1;B++){
            D=0;
            if(B%2==1){
                //MADE BY Λ
                for(C=1;C<=B/2;C++){
                    if(B%C==0){
                        D=D+1;                          //MADE BY Λ
                    }
                }
            }
            if(D==1&&B>=10){
                printf("| %i |\n",B);
                E=E+1;
            }
            if(D==1&&B<10){
                printf("| 0%i |\n",B);//MADE BY Λ
                E=E+1;
            }
        }
        printf("Those Were %i Prime Numbers!!!",E);
    }
    else{
    if(A==0){
        printf("I Didn't Ask For Your IQ");
    }
    else{
        printf("You Are Just Stupid");
    }
    }
}
//MADE BY Λ
