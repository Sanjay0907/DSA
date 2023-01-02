#include <iostream>
using namespace std;

int main()
{

    int input, sum = 0, i;
    cout << "Enter the input till which you want to find the prime number : ";
    cin >> input;

    for (int num = 2; num <= input; num++)
    {
        for (i = 2; i <= (num / 2); i++)
        {
            if (num % i == 0)
            {
                i = num;
                break;
            }
        }
        if (i != num)
        {
            sum += num;
            cout << num << " is a prime Number" << endl;
        }
    }
    cout << endl
         << "The sum of al the prime number till " << input << " is " << sum;
}