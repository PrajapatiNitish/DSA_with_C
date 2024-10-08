#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages) {
    int students = 1, pages = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] > maxAllowedPages) {
            return false;
        }

        if(pages + arr[i] <= maxAllowedPages) {
            pages += arr[i];
        }else {
            students++;
            pages = arr[i];
        }
    }

    return students > m ? false : true;
}

int allocationBooks(vector<int> &arr, int n, int m) {
    if(m > n) {
        return -1;
    }

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int ans = -1;
    int st = 0, end = sum;//range of possible sum

    while(st <= end) {
        int mid = st + (end - st)/2;

        if(isValid(arr, n, m, mid)) { //left
            ans = mid,
            end = mid - 1;
        }else { //right
            st = mid + 1;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {2, 1, 3, 4};
    int n = 4, m = 2;

    cout << allocationBooks(arr, n, m) << endl;

    return 0;
}