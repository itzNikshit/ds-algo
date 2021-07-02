#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

int median_of_matrix(vector<vector<int>> &matrix, int r, int c){ 
    multiset<int> s;
    vector<int> v;
    for(auto row : matrix) {
        for(auto col : row) {
            s.insert(col);
        }
    }
    for(auto element : s) {
        v.push_back(element);
    }
    return v[(r*c)/2];
}

int main() {
    int r,c,x;
    cin >> r >> c;
    vector<vector<int> > matrix(r,vector<int>(c));
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cin >> matrix[i][j];
        }
    }
    cin >> x;
    cout << median_of_matrix(matrix,r,c);
}
