#include <iostream>
using namespace std;

//function define
// int printHello() {
//     cout << "hello" << endl;
//     return 3;
// }

// int sum(int a , int b) {
//     int s = a+b;
//     return s;
// }

// int minOfTwo(int a , int b) {
//     if(a < b){
//         return a;
//     } else {
//         return b;
//     }
// }

// int sumNum(int n){
//     int sumIs = 0;
//     for(int i=1; i<=n; i++){
//         sumIs += i;
//     }

//     return sumIs;
// }

int fact(int n){
    int factorial = 1;
    for(int i = 1; i<=n; i++){
        factorial *= i;
    }

    return factorial;
}

// int digitSum(int digit) {
//     int totalSum = 0;

//     while (digit > 0) 
//     {
//         int lastDig = digit % 10;
//         digit /=10;

//         totalSum +=lastDig;
//     }
    

//     return totalSum;
// }

int binCoff(int n, int r) {

    int nFact = fact(n);
    int nMinr = fact(n-r);

    int rFact = 1;
    for(int i =1; i<=r; i++){
        rFact *=i;
    }

    return nFact / (nMinr*rFact);
}

int main() {
    // int val = printHello();
    // cout << "val = " << val << endl;

    // cout << printHello() << endl;

    // cout << sum(10, 5);

    // cout << minOfTwo(4, 3);

    // cout << sumNum(5);

    // int num;
    // cin >> num;
    // cout << fact(num) << endl;

    // int num;
    // cout << "enter you number : ";
    // cin >> num;
    // cout << digitSum(num) << endl;


    //Find Binomial Cofficient nCr.
    int n;
    cout << "enter n : ";
    cin >> n;

    int r;
    cout << "enter r : ";
    cin >> r;

    cout << "Binomial Cofficient is : " << binCoff(n, r) << endl;

    return 0;
}