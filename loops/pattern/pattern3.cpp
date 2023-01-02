#include <iostream>
using namespace std;

int main()
{

    int input, i = 1, j = 1;

    cout << "Enter the dimention of the Pattern : ";
    cin >> input;
    cout << endl;
    while (i <= input)
    {
        j = 1;
        while (j <= input)
        {
            cout << j;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}