#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
    int max_cnt_one = 0;
    int max_idx = -1;
    int curr_idx = -1;
    for(auto v : arr) {
        curr_idx++;
        int curr_cnt_one = count(v.begin(),v.end(),1);
        if(max_cnt_one < curr_cnt_one) {
            max_cnt_one = curr_cnt_one;
            max_idx = curr_idx;
        }
    }
    return max_idx;
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
    cout << rowWithMax1s(matrix,r,c);
}
