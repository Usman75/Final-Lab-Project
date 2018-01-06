#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sub, i, grade,marks;
    printf("Enter your subject: ");
    scanf("%d",&sub);
    for (i = 1; i<= sub; i++){

        printf("Enter the marks of your %d Subject: \n", i);
        loop:
        scanf("%d", &marks);
        if (marks > 100){
                printf( "Invalid Marks. Please Enter the Marks <= 100 .\n");
                printf("Enter your marks again Subject # %d : ",i);
                goto loop;
                }
        else if (marks>= 85)printf("You got the Grade 'A+'\n");
        else if (marks>=75 && marks   <85) printf( "You got the grade 'A'\n");
        else if (marks >= 60 && marks <75) printf( " You got the grade 'B'\n");
        else if (marks >= 50 && marks <60) printf( "You got The grade 'C'\n");
        else if (marks >= 33 && marks <50) printf( "You got the grade 'D'\n");
        else printf( "Warning!!! you got the Grade F(Fail)\n");
    }
    return 0;
}
