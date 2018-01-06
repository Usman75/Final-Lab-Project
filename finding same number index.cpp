#include <iostream>

using namespace std;

// This Program is Written By USMANTAHIR@UOGSKT2K17

int main()
{
    int size, num ,count, a ,run = false,v ;

    do{


    cout << "Enter the size of Array: ";
    cin >> size;
    int array[size];

    for (int i= 0; i< size ; i++){
        cout << "Enter the data for array["<< i<< "] ";
        cin >> array[i];
    }
    cout << "Enter the number you want to found in Array: ";
    cin >> num;
    count = 0;
     for (int i= size-1; i>= 0 ; i--){
            if(array[i]== num){
            count++;
           }
    }
    int index[count];
    a =0;
    for(int j=0; j< size; j++){
        if(array[j]== num){

            index[a]= j;
            a++;
        }
    }
    cout << "This Number is found on these indexes "<< endl;
    for (int p = 0; p<count; p++){
        cout <<"["<< index[p]<< "] ";

    }
    cout << endl;

    cout << "################################################################"<< endl;
    cout << "################################################################"<< endl;
    cout << "******This Code is Written By USMANTAHIR@UOGSKT2K17(SEC B)******"<< endl;
    cout << "################################################################"<< endl;
    cout << "################################################################"<< endl;
    cout <<endl<<  "Want to Run Again? if yes Press '1' else press '0' to exit."<< endl;

    cin >> v;
    if(v == 1)run = true;

    }while(run);

    return 0;
}
