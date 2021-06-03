#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

// all occurences function
void all_occurences(int* arr, int n, int idx, int x, vector<int> &v) {
	if(n==0) return;

	if(arr[0] == x) v.push_back(idx);

    all_occurences(arr+1,n-1,idx+1,x,v);
}

int main() {
    int n,x;
    cin >> n;
    int* arr = new int[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    cin >> x;
    vector<int> v;
    all_occurences(arr,n,0,x,v);
    for(int i=0;i<v.size();i++) {
        cout << v[i] << endl;
    }
}