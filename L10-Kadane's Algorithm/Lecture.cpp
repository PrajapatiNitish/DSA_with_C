#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

   /* for(int st = 0; st < n; st ++){

        for(int end = st; end < n ; end++){

            for(int i = st; i <=end; i++){
                cout << arr[i];
            }

            cout << " ";

        }

        cout << endl;

    } */

  /* // using Brute force approach
   int maxSum = INT64_MIN;
   for(int st = 0; st < n; st ++){

        int currSum = 0;
        for(int end = st; end < n ; end++){

            currSum += arr[end];
            maxSum = max(currSum, maxSum);

        }

    }

    cout << "max subarray Sum = " << maxSum << endl; */

    int currSum = 0, maxSum = INT64_MIN;
    
    for(int i = 0; i<n; i++){
        currSum += arr[i];
        maxSum = max(currSum, maxSum); 
    }

    return 0;
}