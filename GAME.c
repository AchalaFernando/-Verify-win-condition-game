#include <stdio.h>
void main(){

    int a,b,c,d;

    printf("Lets play game!");

    printf("  \n \nCALL YOUR NUMBER FOR THIS CONDITION - ((a>b || a>100) && a>c) \n");

    printf(" \n Enter your first number :-");
    scanf("%d",&a);

    printf("\n Enter your second number :-");
    scanf("%d",&b);

    printf("\n Enter your thread number :-");
    scanf("%d",&c);


        if((a>b || a>100) && a>c)
        {
               printf("\n You win! \n");
        }
        else
        {
                printf("\n Game over! \n");
        }

}
