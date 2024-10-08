#include <iostream>
using namespace std;

// int printNum(int n){
    
//     if(n == 0 || n == 1){
//         return "Invalid";
//     }else {
//         int i = 2;
//         while (i<=n)
//         {
//             cout << i << endl;
//             i++;
//         }
        
//         return i;
//     }

// }

// int fib(int n){

//     int firstNum = 0;
//     cout << firstNum << endl;

//     int secondNum = 1;
//     cout << secondNum << endl;

//     int lastNum = 0;

//     for(int i = 0; i<n-2; i++){
//         lastNum = firstNum + secondNum;
//         firstNum =secondNum;
//         secondNum = lastNum;
//         cout << lastNum << endl;
//     }

//     return lastNum;
// }

int isPrime(int n){
    
    bool isPrime = true;

        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {

            if (n == 1) {
                cout << ("This is neither prime not composite") << endl;
            } else {
               cout << ("This is Prime Number") << endl;
            }
            
        } else {
            cout << ("This is not Prime Number") << endl;
        }

}

int main() {
    int x;
    cout << "enter your number : ";
    cin >> x;

    // cout << printNum(x);

    // cout << fib(x);

    isPrime(x);

    return 0;
}