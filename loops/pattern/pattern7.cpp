#include <iostream>
using namespace std;

int main()
{
    int input, i = 1, j = 1;

    cout << "Enter the dimention of your pattern :";
    cin >> input;
    while (i <= input)
    {
        j = 1;
        while (j <= i)
        {
            cout << i;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}