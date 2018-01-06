#include <iostream>

using namespace std;

int main()
{
    int sub, i, grade,marks;
    cout<< "Enter your subject: ";
    cin>>sub;
    for (i = 1; i<= sub; i++){

        cout<<"Enter the marks of your "<< i << " Subject: \n"<< endl;
        loop:
        cin>>marks;
        if (marks > 100){
                cout << "Invalid Marks. Please Enter the Marks <= 100 .\n";
                cout << "Enter your marks again Subject # "<< i<< " : "<< endl;
                goto loop;
                }
        else if (marks>= 85)cout<< "You got the Grade 'A+'\n";
        else if (marks>=75 && marks   <85) cout << "You got the grade 'A'\n";
        else if (marks >= 60 && marks <75) cout << " You got the grade 'B'\n";
        else if (marks >= 50 && marks <60) cout << "You got The grade 'C'\n";
        else if (marks >= 33 && marks <50) cout << "You got the grade 'D'\n";
        else cout << "Warning!!! you got the Grade F(Fail)\n";
    }
    return 0;
}
