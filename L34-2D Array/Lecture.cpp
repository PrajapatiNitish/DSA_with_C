#include <iostream>
#include <vector>
using namespace std;

int diagonalSum(int matrix[][3], int n) {
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += matrix[i][i];
        
        if(i != n-i-1) {
            sum += matrix[i][n-i-1];
        }
    }

    return sum;
}


int rowSum(int matrix[][3], int rows, int cols) {
    int maxRowSum = INT32_MIN;
    
    for(int i = 0; i < rows; i++) {

        int rowSum = 0;
        for(int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }

        maxRowSum = max(maxRowSum, rowSum);
    }
    
    return maxRowSum;
} 

int main() {
    //Initialisation
    int matrix[4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};
    int rows = 4;
    int cols = 3;

    //To find with position
    cout << matrix[2][1] << endl;

    //Replaces
    matrix[2][1] = 18;
    cout << matrix[2][1] << endl;

    int matrix[4][3];
    int rows = 4;
    int cols = 3;

    //Print matrix

    //input
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
        cout << endl;
    }

    //output
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int matrix[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int rows = 3;
    int cols = 3;
    int n = 4;

    int target = 8;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
           if(matrix[i][j] == target) {
            cout << matrix[i][j];
           }
        }
    }
    cout << endl;

    cout << rowSum(matrix, rows, cols) << endl;
    cout << diagonalSum(matrix, n) << endl;

    //2D Vector -> initialisation
    vector<vector<int>> mat = {{1,2,3}, {4,5,6}, {7,8,9}};
    
    //rows -> mat.size();
    //cols -> how many element are in 1 row. mat[i].size();

    //print 2D vector
    for(int i = 0; i < mat.size(); i++) {
        for(int j = 0; j < mat[i].size(); j++) {
            cout << mat[i][j] << " ";
        }

        cout << endl;
    }


    return 0;
}