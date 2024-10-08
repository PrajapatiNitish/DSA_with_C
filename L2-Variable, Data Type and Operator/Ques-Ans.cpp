#include <iostream>
using namespace std;

//make a calculator which do some opration perform sum, sub, mul, div, modulo

int main() {
    int a;
    cout << "Enter 1st number : " <<endl;
    cin >> a;

    int b;
    cout << "Enter 2nd number : " <<endl;
    cin >> b;

    cout << "choose what Operation you have perform.\n 1.Sum \n 2.Sub \n 3.Mul \n 4.Div \n 5.Modulo : " <<endl;
    
    cout << "Your Ans is : " << (a+b) <<endl;
    cout << "Your Ans is : " << (a-b) <<endl;
    cout << "Your Ans is : " << (a*b) <<endl;
    cout << "Your Ans is : " << (a/b) <<endl;
    cout << "Your Ans is : " << (a%b) <<endl;

    return 0;
}