#include <iostream>

using namespace std;
  // Function for to finding factorial

int fact(int x){
    for(int i = x-1; i>= 1; i--){
        x = x*i;
    }
    return x;
}
// Starting main Body from here
int main()
{
    int num;
    again:
    cout << "Enter the number you want to calculate its Factorial: " << endl;
    cin >> num;
    if (num < 0){
        cout<< "Negative Numbers are not allowed"<<endl;
        goto again;
    }
    cout << "The Factorial of "<< num << " = "<< fact(num) << endl;
    return 0;
}
