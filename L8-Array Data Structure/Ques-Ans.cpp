#include <iostream>
using namespace std;

/*
void sumAndProduct(int arr[], int sz){
    int sum = 0;
    int pdt = 1;
    for(int i = 0; i < sz; i++){
        sum += arr[i];
        pdt *=arr[i];
    }
    cout << "Sum = " << sum << endl;
    cout << "Product = " << pdt << endl;  

    return;
} */

void max_Min(int arr[], int sz){
    int maxNum = INT64_MIN;
    int minNum = INT64_MAX;
    for(int i=0; i<sz; i++){
        maxNum = max(arr[i], maxNum);
        minNum = min(arr[i], maxNum);

        swap(maxNum, minNum);

        cout << arr[i];
    }
    
    return;
}

int main() {
 /* int arr[] = {4,2,7,8,1,2,5};
    int sz = 7;

    sumAndProduct(arr, sz); */

    int arr[] = {4,2,7,8,1,2,5};
    int sz = 7;

    return 0;
}