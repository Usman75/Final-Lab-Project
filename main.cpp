#include <iostream>

using namespace std;

int main()
{
    int row,coloms;
    cout<< "Enter the number of Rows.";
    cin>> row;
    cout<< "Enter the number of colums.";
    cin>> coloms;
    int array1[row][coloms], array2[row][coloms], array3[row][coloms],i,j;
    cout<< "Enter the Data for first array."<< endl;
    for(i=0; i<row; i++){
            for(j=0; j<coloms; j++){
         cout<< "Enter the data for Array1["<<i <<"][" << j<<"]"<<endl;
        cin>> array1[i][j];
            }
    }
    cout<< "Enter the Data for Second array."<< endl;
     for(i=0; i<row; i++){
            for(j=0; j<coloms; j++){
        cout<< "Enter the data for Array2["<<i <<"][" << j<<"]"<<endl;
        cin>> array2[i][j];
            }
    }
   // Uncomment this code if you want to see Data in first and second Array
   /* cout<< "Original data of first Array"<< endl;

     for(i=0; i<row; i++){
            for(j=0; j<coloms; j++){
        cout << array1[i][j]<< "\t";
            }
            cout<< endl;
    }

    cout<< "Original data of Second Array"<< endl;

     for(i=0; i<row; i++){
            for(j=0; j<coloms; j++){
        cout << array2[i][j]<< "\t";
            }
            cout<< endl;
    }
    */
     cout<< "The Sum of These two arrays"<< endl;

     for(i=0; i<row; i++){
            for(j=0; j<coloms; j++){
                    array3[i][j]= array1[i][j]+array2[i][j];
        cout <<array3[i][j] << "\t";
            }
            cout<< endl;
    }



    return 0;
}
