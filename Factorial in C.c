#include <stdio.h>
#include <stdlib.h>



  // Function for to finding factorial
int i;
int fact(int x);

// Starting main Body from here
int main()
{
    int num;
    again:
    printf("Enter the number you want to calculate its Factorial: \n");
    scanf("%d", &num);
    if (num < 0){
        printf("Negative Numbers are not allowed\n");
        goto again;
    }
    printf("The Factorial of %d = %d \n",num,fact(num));
    return 0;
}
int fact(int x){
    for( i = x-1; i>= 1; i--){
        x = x*i;
    }
    return x;
}
