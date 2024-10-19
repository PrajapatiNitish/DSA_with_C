#include <iostream>
#include <string>
using namespace std;

int main() {
    char str[] = {'a', 'b', 'c', '\0'};
    char str[] = "Nitish";
    cout << str << endl;

    char str[10];
    cout << "enter char : ";
    // cin >> str;
    cin.getline(str,12,'$');

    cout << "output : " << str << endl;

    for(char ch : str) {
        cout << ch << " ";
    }

    char str[] = "apna college";
    int len = 0;

    for(int i=0; i<str[i] != '\0'; i++) {
        len++;
    }

    cout << "lenth of string : " << len << endl;

    // //advance version of string. This is dynamic in nature.
    string str = "apna college";
    cout << str << endl;
    cout << str.length() << endl;

    for(int i=0; i<str.length(); i++) {
        cout << str[i] << " " ;
    }

    reverse(str.begin(), str.end());
    cout << str << endl;


    return 0;
}