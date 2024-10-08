#include <iostream>
    using namespace std;

void changeA (int &b) { //here & = alias
    b = 20;
}

int main() {
    //memory address
    // int a = 10;
    // cout << &a << endl;

    // //Pointer
    // int a = 10;
    // int* ptr = &a;
    // int** ptr2 = &ptr;

    // // cout << ptr << endl;
    // // cout << &a << endl;
    // // cout << &ptr << endl;
    // // cout << ptr2 << endl;

    // cout << *(&a) << endl;
    // cout << **(ptr2) << endl;

    // //Null pointer
    // int **ptr = NULL;
    // cout << ptr << endl;

    // int a = 5;
    // int* p = &a;
    // int** q = &p;

    // cout << *p << endl;
    // cout << **q << endl;
    // cout << p << endl;
    // cout << *q << endl;

    int a = 10;

    changeA(a);
    cout << "inside in main fuction : " << a << endl;
    
    return 0;
}