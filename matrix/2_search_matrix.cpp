#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

void input_array(int* arr, int n) {
    for(int i=0;i<n;i++) cin >> arr[i];
}

bool binary_search(vector<int> arr, int s, int e, int x) {
    if(arr[e] < x || arr[s] > x) return false;
    
    if(s <= e) {
        int mid = (s+e)/2;
        if(arr[mid] == x) return true;
        
        else if(arr[mid] < x) return binary_search(arr,mid+1,e,x);
        
        else return binary_search(arr,s,mid-1,x);
    }
    
    return false;
}
    
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    bool ans = false;
    for(auto arr : matrix) {
        ans = binary_search(arr,0,arr.size()-1,target);
        if(ans == true) return ans;
    }
    return ans;
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
    cout << searchMatrix(matrix,x);
}
