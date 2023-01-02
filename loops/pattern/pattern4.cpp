#include <iostream>
using namespace std;

int main()
{

    int input, i = 0, j = 0;

    cout << "Enter the dimension of the Pattern : ";
    cin >> input;

    while (i < input)
    {
        j = 0;
        while (j < input)
        {
            cout << input - j;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}