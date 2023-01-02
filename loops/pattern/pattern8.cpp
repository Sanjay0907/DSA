#include <iostream>
using namespace std;

int main()
{

    int input, row = 1, col = 1;

    cout << "Enter the dimention of your pattern :  ";
    cin >> input;
    while (row <= input)
    {
        col = 0;
        while (col < row)
        {
            cout << col + row;
            col += 1;
        }
        cout << endl;
        row += 1;
    }

    cout << endl
         << endl;
    row = 1;
    col = 1;
    while (row <= input)
    {
        col = 1;
        int value = row;
        while (col <= row)
        {

            cout << value;
            value -= 1;
            col += 1;
        }
        cout << endl;

        row += 1;
    }

    row = 1;
    col = 1;
    cout<<endl<<endl;
    while (row <= input)
    {
        col = 1;
        while (col <= row)
        {
            cout << row - col + 1<<" ";
            col += 1;
        }

        cout << endl;

        row += 1;
    }
}