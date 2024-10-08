#include <iostream>
using namespace std;

/* void changeArr(int arr[], int size) {
    cout << "in function";

    for(int i=0; i<size; i++){
        arr[i] = 2*arr[i];
    }
  } */

/* int linearSearch(int arr[], int sz, int target){
    for(int i=0; i <sz; i++){
        if(arr[i] == target){
            return i;
        }
    }

    return -1;
} */

/* void reverseArr(int arr[], int sz){
    int start = 0, end = sz-1;
    while(start < end){
        swap(arr[start], arr[end]);
        start ++;
        end --;
    }

} */

int main() {
   /* 
    int size = 5;
    int marks[5] = {99, 100, 83, 89, 98};  

    cout << "Enter Student marks : ";
    for (int i = 0; i < size; i++){
        cin >> marks[i];
    }

    cout << endl;

    //Loops : 0 to size-1
    for(int i=0; i<size; i++){
        cout << marks[i] << endl;
    } 
    */

   /* int num[] = {5, 1, 3, 67, -45, -7};
   int size = 6;

   int smallest = INT64_MAX;
   int largest = INT64_MIN;

   for (int i = 0; i < size; i++){
        smallest = min(num[i], smallest);
        largest = max(num[i], largest);
    }
    
   
    cout << "smallest value : " << smallest << endl;
    cout << "largest value : " << largest << endl;
    */

   /*int arr[] = {1, 2, 3};
   changeArr(arr, 3);

   cout << "in main\n";
   for(int i=0; i<3; i++){
    cout << arr[i] << " ";
   }

   cout << endl; */

   /* int arr[] = {4,2,7,8,1,2,5};
   int sz = 7;
   int target = 8;

   cout << linearSearch(arr, sz, target) << endl; */

   /* int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int sz = 7;

    reverseArr(arr, sz);

    for(int i=0; i<sz; i++){
        cout << arr[i] << " ";
    }
    cout << endl; */

    //return 0;
}