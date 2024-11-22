#include <iostream>
using namespace std;

int sumNums(int n) {
    if(n == 1) return 1;

    return n + sumNums(n-1);
}

int calFactorial(int n) {
    if(n == 0) {
        return 1;
    }

    return n*calFactorial(n-1);
}

void printNums(int n) {
    if(n == 1) {
        cout << "1\n";
        return;
    }

    cout << n << " ";
    printNums(n-1);
}

int main() {
    printNums(4);
    cout << calFactorial(4) << endl;
    cout << sumNums(4) << endl;
    return 0;
}