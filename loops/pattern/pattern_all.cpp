#include <iostream>
using namespace std;

int main()
{
    int input, row = 1, col = 1;

    cout << "Enter the dimention of the pattern : ";
    cin >> input;

    cout << endl
         << endl
         << "Pattern 1 : " << endl;
    while (row <= input)
    {
        col = 1;
        while (col <= input)
        {
            cout << char('A' + row - 1) << " ";
            col += 1;
        }
        cout << endl;
        row += 1;
    }

    cout << endl
         << endl
         << "Pattern 2 : " << endl;
    row = 1;
    col = 1;

    while (row <= input)
    {
        col = 1;
        while (col <= input)
        {
            cout << char('A' + col - 1) << " ";
            col += 1;
        }
        cout << endl;
        row += 1;
    }
    cout << endl
         << endl;
    cout << "Pattern 3 : " << endl;

    row = 1;
    col = 1;
    while (row <= input)
    {
        col = 1;
        while (col <= input)
        {
            cout << char('A' + col - 1) << " ";
            col += 1;
        }
        cout << endl;
        row += 1;
    }

    cout << endl
         << endl;
    cout << "Pattern 4 : " << endl;
    row = 1;
    col = 1;
    int value = 'A';
    while (row <= input)
    {
        col = 1;
        while (col <= input)
        {
            cout << char(value) << " ";
            value += 1;
            col += 1;
        }
        cout << endl;
        row += 1;
    }

    cout << endl
         << endl;
    cout << "Pattern 5 : " << endl;
    row = 1;
    col = 1;
    while (row <= input)
    {
        col = 1;
        while (col <= input)
        {
            cout << char(row + col - 2 + 'A') << " ";
            col += 1;
        }
        row += 1;
        cout << endl;
    }

    cout << endl
         << endl;
    cout << "Pattern 6 : " << endl;

    row = 1;
    col = 1;
    while (row <= input)
    {
        col = 1;
        while (col <= row)
        {
            cout << char('A' + row - 1) << " ";
            col += 1;
        }
        cout << endl;
        row += 1;
    }

    cout << endl
         << endl;
    cout << "Pattern 7 : " << endl;

    row = 1;
    col = 1;
    while (row <= input)
    {
        col = 1;
        value = 'A';
        while (col <= row)
        {
            cout << char(value + row + col - 2) << " ";
            col += 1;
        }
        cout << endl;
        row += 1;
    }

    cout << endl
         << endl;
    cout << "Pattern 8 : " << endl;
    row = 1;
    col = 1;
    value = 'A' + input - 1;
    while (row <= input)
    {
        col = 1;
        while (col <= row)
        {
            cout << char(value - row + col) << " ";
            col += 1;
        }
        cout << endl;
        row += 1;
    }

    cout << endl
         << endl;
    cout << "Pattern 9 : " << endl;
    row = 1;
    col = 1;
    while (row <= input)
    {
        col = 1;
        while (col <= input)
        {
            if ((row + col) > input)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            col += 1;
        }
        cout << endl;
        row += 1;
    }

    cout << endl
         << endl;
    cout << "Pattern 10 :" << endl;

    row = 1;
    col = 1;
    while (row <= input)
    {
        col = 1;
        while (col <= input)
        {
            if ((row + col) > (input + 1))
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
            col += 1;
        }
        cout << endl;
        row += 1;
    }

    cout << endl
         << endl;
    cout << "Pattern 11 : " << endl;
    row = 1;
    col = 1;
    while (row <= input)
    {
        col = 1;
        while (col <= input)
        {
            if (col >= row)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            col += 1;
        }
        cout << endl;
        row += 1;
    }

    cout << endl
         << endl;
    cout << "Pattern 12 : " << endl;
    row = 1;
    col = 1;

    while (row <= input)
    {
        col = 1;
        while (col <= input)
        {
            if ((row + col) >= (input + 1))
            {
                cout << row;
            }
            else
            {
                cout << " ";
            }
            col += 1;
        }
        cout << endl;
        row += 1;
    }

    cout << endl
         << endl;
    cout << "Pattern 13 : " << endl;
    row = 1;
    col = 1;
    while (row <= input)
    {
        col = 1;
        while (col <= input)
        {
            if (col < row)
            {
                cout << " ";
            }
            else
            {
                cout << col;
            }
            col += 1;
        }
        cout << endl;
        row += 1;
    }

    cout << endl
         << endl;
    cout << "Pattern 14 :" << endl;

    row = 1;
    col = 1;
    while (row <= input)
    {
        col = 1;
        value = 1;
        while (col <= input)
        {
            if ((row + col) > input)
            {
                cout << value;
                value += 1;
            }
            else
            {
                cout << " ";
            }
            col += 1;
        }
        col = 1;
        while (col < row)
        {
            cout << row - col;
            col += 1;
        }
        cout << endl;
        row += 1;
    }

    cout << endl
         << endl;
    cout << "Pattern Dabangg : " << endl;
    row = 1;
    col = 1;
    while (row <= input)
    {
        col = 1;
        while (col <= input)
        {
            if ((row + col) <= (input + 1))
            {
                cout << col;
            }
            else
            {
                cout << "*";
            }
            col += 1;
        }
        col = 1;
        while (col <= input)
        {
            if (col < row)
            {
                cout << "*";
            }
            else
            {
                cout << input - col + 1;
            }
            col += 1;
        }
        cout << endl;
        row += 1;
    }
}