#include <iostream>
using namespace std;

int main()
{

    int num, count = 1, sum = 0, factorial = 1;
    cout << "Enter a Number : ";
    cin >> num;
    cout << endl;
    while (count <= num)
    {
        cout << count << endl;
        sum += count;
        factorial = factorial * count;
        count += 1;
    }
    cout << "The sum of all numbers till " << num << " is " << sum << endl;
    cout << "The factorial of all the numbers till " << num << " is " << factorial << endl;
}