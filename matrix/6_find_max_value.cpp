#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

int find_max_value(vector<vector<int>> matrix, int n) {
    int max_val = INT_MIN;
    vector<vector<int>> max_matrix(n,vector<int>(n,0));
    max_matrix[n-1][n-1] = matrix[n-1][n-1];
    int prev_max = max_matrix[n-1][n-1];
    for(int j=n-2;j>=0;j--) {
        if(matrix[n-1][j] > prev_max) 
            prev_max = matrix[n-1][j];
        max_matrix[n-1][j] = prev_max;
    }
    prev_max = max_matrix[n-1][n-1];
    for(int i=n-2;i>=0;i--) {
        if (matrix[i][n-1] > prev_max)
            prev_max = matrix[i][n-1];
        max_matrix[i][n-1] = prev_max;
    }
    for(int i=n-2;i>=0;i--) {
        for(int j=n-2;j>=0;j--) {
            if(max_matrix[i+1][j+1] - matrix[i][j] > max_val)
                max_val = max_matrix[i+1][j+1] - matrix[i][j];
            max_matrix[i][j] = max(matrix[i][j], max(max_matrix[i][j + 1], max_matrix[i + 1][j]));
        }
    }
    return max_val;
}

int main() {
    int r,c;
    cin >> r >> c;
    vector<vector<int> > matrix(r,vector<int>(c));
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cin >> matrix[i][j];
        }
    }
    cout << find_max_value(matrix,r) << endl;
}
