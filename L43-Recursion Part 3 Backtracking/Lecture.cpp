#include <iostream>
#include <vector>
using namespace std;

void printSubsets(vector<int> &arr, vector<int> &ans, int i) {
    if(i == arr.size()) {
        for(int val : ans) {
            cout << val << " ";
        }

        cout << endl;
        return;
    }

    //Include
    ans.push_back(arr[i]);
    printSubsets(arr, ans, i+1);

    ans.pop_back(); //Backtracking
    //Exclude
    printSubsets(arr, ans, i+1);
}

int main() {
    vector<int> arr = {1,2,3};
    vector<int> ans;

    printSubsets(arr, ans, 0);

    return 0;
}