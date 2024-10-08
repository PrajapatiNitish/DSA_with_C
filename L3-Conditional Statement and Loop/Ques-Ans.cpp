#include <iostream>
using namespace std;

int main()
{
    // Sum of all numbers from 1 to N which are divisible by 3.
    int n;
    cout << "Enter Your Number : ";
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            sum+=i;
        }
    }

    cout << "Sum is : " << sum << endl;

    // Print factorial of a number N.

    int factSum = 1;
    for (int i = n; i >= 1; i--) 
    {
        factSum *= i;
    }

    cout <<"Factorial is : " << factSum << endl;

    return 0;
}