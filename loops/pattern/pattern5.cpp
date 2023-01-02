#include <iostream>
using namespace std;

int main()
{

    int input, i = 0, j = 1;
    input = 3;
    while (i < input)
    {
        j = 1;
        while (j <= input)
        {
            cout << (input * i) + j;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}