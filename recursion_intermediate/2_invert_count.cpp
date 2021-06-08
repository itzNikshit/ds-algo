#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

/*  inversion count in an array
    given an array of n elements and our task
    is to find the pairs of a[i] & a[j] such that
    a[i] > a[j] && i<j
*/
void invert_count(int* arr, int i, int j, int n, vector<pair<int,int>> &v, vector<vector<bool>> &check_for_pairs) {
    if(j==n) return;

    if(arr[i] > arr[j] && i<j && !check_for_pairs[i][j]) {
        v.push_back(make_pair(arr[i],arr[j]));
        check_for_pairs[i][j] = true;
    }

    invert_count(arr,i,j+1,n,v,check_for_pairs);
    invert_count(arr,i+1,j+1,n,v,check_for_pairs);
}

void invert_count(int* arr,int n, vector<pair<int,int>> &v, vector<vector<bool>> &check_for_pairs) {
    invert_count(arr,0,1,n,v,check_for_pairs);
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    vector<pair<int,int>> v;
    vector<vector<bool>> check_for_pairs(n,vector<bool>(n,false));

    invert_count(arr,n,v,check_for_pairs);

    for(int i=0;i<v.size();i++) {
        cout << v[i].first << " " << v[i].second;
        cout << endl;
    }
}
