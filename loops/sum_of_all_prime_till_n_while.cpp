#include <iostream>
using namespace std;

int main()
{
    int input, initial = 2, isPrime = 1, currentNum = 2, sum = 0;

    cout << "Enter number to check for prime : ";
    cin >> input;
    while (currentNum <= input)
    {
        initial = 2;
        isPrime = 1;
        while (initial < currentNum)
        {
            if (currentNum % initial == 0)
            {
                isPrime = 0;
                break;
            }
            initial++;
        }
        if (isPrime == 1)
        {
            cout << "Current Number is a Prime : " << currentNum << endl;
            sum += currentNum;
        }
        currentNum++;
    }
    cout<<"The sum of all the prime number is : "<<sum;
}