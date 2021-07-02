#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
    vector<int> s;
    for(auto row : Mat) {
        for(auto col : row) {
            s.push_back(col);
        }
    }
    sort(s.begin(),s.end());
    int i=0;
    int j=0;
    for(auto element : s) {
        if(i==N) break;
        
        if(j==N) {
            i++;
            j=0;
        }
        
        Mat[i][j] = element;
        j++;
    }
    return Mat;
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
    matrix = sortedMatrix(r,matrix);
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
