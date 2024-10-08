#include <iostream>
#include <vector>
using namespace std;

int main() {
    // vector<char> vec = {'a', 'b', 'c', 'd', 'e'};

    // cout << "size = " << vec.size() << endl;

    // vec.push_back(25);
    // vec.push_back(35);
    // vec.push_back(45);
    // cout << "after push back : size = " << vec.size() << endl;

    // vec.pop_back();

    // for(char val: vec) {
    //     cout << val << endl;
    // }


    vector <int> vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    cout << "size = " << vec.size() << endl;
    cout << "capacity = " << vec.capacity() << endl;
    
    return 0;
}