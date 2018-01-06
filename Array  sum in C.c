#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,coloms;
    printf("Enter the number of Rows.");
    scanf("%d",&row);
    printf("Enter the number of colums.");
    scanf("%d",&coloms);
    int array1[row][coloms], array2[row][coloms], array3[row][coloms],i,j;
    printf("Enter the Data for first array.\n");
    for(i=0; i<row; i++){
            for(j=0; j<coloms; j++){
          printf("Enter the data for Array1[%d][%d]",i,j);
        scanf("%d",&array1[i][j]);
            }
    }
    printf("Enter the Data for Second array.\n");
     for(i=0; i<row; i++){
            for(j=0; j<coloms; j++){
        printf("Enter the data for Array2[%d][%d]\n",i,j);
        scanf("%d",&array2[i][j]);
            }
    }
   // Uncomment this code if you want to see Data in first and second Array
  /* printf( "Original data of first Array\n");
     for(i=0; i<row; i++){
            for(j=0; j<coloms; j++){
        printf("%d\t",array1[i][j]);
            }
            printf("\n");;
    }
    printf( "Original data of Second Array\n");
     for(i=0; i<row; i++){
            for(j=0; j<coloms; j++){
        printf("%d\t",array2[i][j]);
            }
            printf("\n");;
    }
    */

     printf("The Sum of These two arrays\n");

     for(i=0; i<row; i++){
            for(j=0; j<coloms; j++){
                    array3[i][j]= array1[i][j]+array2[i][j];
        printf("%d\t",array3[i][j]);;
            }
            printf("\n");
    }



    return 0;
}
