#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int st, int end) {
    int idx = st - 1, pivot = arr[end];

    for(int j = st; j < end; j++) {

        if(arr[j] <= pivot) {
            idx++;
            swap(arr[j], arr[idx]);
        }

        idx++;
        swap(arr[end], arr[idx]);
        return idx;
    }
}

void quicksort(vector<int> &arr, int st, int end) {
    if(st < end) {
        int pivIdx = partition(arr, st, end);

        quicksort(arr, st, pivIdx-1); //left half
        quicksort(arr, pivIdx+1, end); //right half
    }
}

int main() {
    vector<int> arr = {5, 2, 6, 4, 1, 3};
    quicksort(arr, 0, arr.size()-1);

    for(int val : arr) {
        cout << val << " ";
    }

    cout << endl;

    return 0;
}