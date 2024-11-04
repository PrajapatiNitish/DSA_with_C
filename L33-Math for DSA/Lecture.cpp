#include <iostream>
using namespace std;

string isPrime(int n) {
    for(int i=2; i*i <= n; i++) {
        if(n % i == 0) {
            return "Non Prime";
        }
    }

    return "Prime";
}

void printDigit(int n) {
    int count = 0;
    while(n != 0) {
        int digit = n % 10;
        count ++;

        n = n/10;
    }

    cout << count << endl;
}

bool isArmstrong(int n) {
    int copyN = n;
    int sumOfCubs = 0;

    while(n != 0) {
        int dig = n % 10;
        sumOfCubs += (dig * dig * dig);

        n = n/10;
    }

    return sumOfCubs == copyN;
}

int gcd(int a, int b) {
    while(a>0 && b>0) {
        if(a > b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }

    if(a == 0) return b;
    return a;
}

int lcm(int a, int b) {
    return (a*b)/gcd(a,b);
}

int main() {
    int n = 153;

    // cout << isPrime(n) << endl;

    //printDigit(n); 

    /* if(isArmstrong(n)) {
        cout << "is an Armstrong num\n";
    } else {
        cout << "not an Armstrong num\n";
    } */

   //cout << gcd(20, 28) << endl;
    cout << lcm(20,28) << endl;


    return 0;
}