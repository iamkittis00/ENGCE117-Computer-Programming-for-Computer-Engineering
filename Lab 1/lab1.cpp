#include <stdio.h>

int main () {
    int input,i ;
    int j = 0 ;
    int sum = 0 ;

    printf("User input : ") ;
    scanf("%d",&input) ;

    for (i = 1; i <= input; i++)
    {
        j = j*10+9 ;
        printf(" %d +",j) ;
        sum = sum + j ;
    }
    printf ("\nSum = %d" , sum) ;

    return 0 ;
}//end funtions