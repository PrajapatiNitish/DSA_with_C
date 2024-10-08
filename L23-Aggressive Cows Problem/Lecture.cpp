#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> &arr, int N, int C, int minAllowedDist) { //O(n)
    int cows = 1, lastStallPos = arr[0];

    for(int i = 1; i < N; i++) {
        if(arr[i] - lastStallPos >= minAllowedDist) {
            cows++;
            lastStallPos = arr[i];

        }

        if(cows == C) {
            return true;

        }
    }

    return false;
}

int getDistance(vector<int> &arr, int N, int C) { 
    sort(arr.begin(), arr.end()); //nlogn

    int st = 1, end = arr[N-1] - arr[0], ans = -1;

    while(st <= end) { //O(log(range) * n)
        int mid = st + (end - st)/2;

        if(isPossible(arr, N, C, mid)) { //Right
            ans = mid;
            st = mid + 1;

        }else  { //Left
            end = mid - 1;

        }
    }

    return ans;
}

int main() {
    int N = 5, C = 3;
    vector<int> arr = {1,2,8,4,9};

    cout << getDistance(arr, N, C) << endl;

    return 0;
}