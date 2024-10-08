#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;

    // Butterfly Pattern
    for (int i = 1; i <= n; i++)
    {
        //Stars-Up
        for(int j = 1; j<=i ; j++){
            cout << "*";
        }

        for(int j = n-i; j < n; j++){
            cout << "k";
        }

        cout << endl;

    }

    // Print Pattern of first letter of your name.
    for (int i = 0; i < n; i++)
    {
        
    }

    return 0;
}