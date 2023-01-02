#include <iostream>
using namespace std;

int main()
{

    char input;
    cout<<"Input Please"<<endl;
    cin>>input;
    if (int(input) >= 97 && int(input) <= 122)
    {
        cout << "Entered ASCII value is " << int(input) << endl;
        cout << "Entered value is a LOWERCASE";
    }
    else if (int(input) >= 65 && int(input) <= 90)
    {
        cout << "Entered ASCII value is " << int(input) << endl;
        cout << "Entered value is a UPPERCASE";
    }
    else if (int(input) >= 48 && int(input) <= 57)
    {
        cout << "Entered ASCII value is " << int(input) << endl;
        cout << "Entered value is a NUMBER";
    }
    else
    {
        cout << "OPPS! Code not implemented for this character " << input << endl;
    }
}