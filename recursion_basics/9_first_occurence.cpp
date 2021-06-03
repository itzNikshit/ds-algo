#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

// first occurence function
int first_occurence(int* arr, int n, int idx, int x) {
	if(n==0) return -1;

	if(arr[0] == x) return idx;

	return first_occurence(arr+1,n-1,idx+1,x);
}

int main() {
    int n,x;
    cin >> n;
    int* arr = new int[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    cin >> x;
    cout << first_occurence(arr,n,0,x) << endl;
}