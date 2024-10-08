#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter Your num : ";
    cin >> n;

    //Square Pattern
    for (int i = 1; i <= n; i++) { //Outer Loop

        char ch = 'A';
        for (int j = 1; j <= n; j++) { //Inner Loop
            cout << ch << " ";
            ch +=1;
        }

        cout << endl;
    }

    cout << endl;

    int num =1;
    for (int i = 1; i <= n; i++) { //Outer Loop

        for (int j = 1; j <= n; j++) { //Inner Loop
            
            cout << num << " ";
            num++;
        }

        cout << endl;
    }

    cout << endl;

    //Triangle Pattern
    for (int i = 1; i<=n; i++) {

        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        
        cout << endl;
    }

    for (int i = 1; i<=n; i++) {

        for(int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        
        cout << endl;
    }

    for (int i = 1; i<=n; i++) {

        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        
        cout << endl;
    }

    cout << endl;

    //Reverse Triangle Pattern
    for (int i = 1; i<=n; i++) {

        for(int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        
        cout << endl;
    }

    for (int i = 1; i<=n; i++) {

        for(int j = i; j >= 1; j--) {
            cout << num << " ";
            num++;
        }
        
        cout << endl;
    }

    cout << endl;

    //Inverted Triangle Pattern
    for (int i = 0; i<n; i++) {

        for(int j = 0; j < i; j++) {
            cout << " ";
        }

        for(int j = 0; j < n-i; j++) {
            cout << (i+1);
        }
        
        cout << endl;
    }

    cout << endl;

    //Pyramid Pattern
    for (int i = 0; i<n; i++) {

        for(int j = 0; j < n-i-1; j++) {
            cout << " ";
        }

        for(int j = 1; j <= i+1; j++) {
            cout << j;
        }
        
        for(int j = i; j>0; j--) {
            cout << j;
        }
        cout << endl;
    }

    cout << endl;

    // Hollow Dimond Pattern
    for (int i=0; i<n ; i++) {
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }

        cout << "*";

        if(i != 0) {
            for (int j=0; j<2*i-1; j++){
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }

    for(int i=0; i<n-1; i++){

        for(int j=0; j<i+1; j++){
            cout << " ";
        }
        cout << "*";

        if(i != n-2){
            for (int j=0; j<2*(n-i)-5; j++){
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}