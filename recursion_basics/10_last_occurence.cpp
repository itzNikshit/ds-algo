#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

// last occurence function
int last_occurence(int* arr, int n, int idx, int x) {
	if(n==0) return -1;

	int small_out = last_occurence(arr+1,n-1,idx+1,x);

    if(arr[0] == x && small_out==-1) return idx;

    return small_out;
}

int main() {
    int n,x;
    cin >> n;
    int* arr = new int[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    cin >> x;
    cout << last_occurence(arr,n,0,x) << endl;
}