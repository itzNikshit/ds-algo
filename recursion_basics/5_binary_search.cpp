#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

//binary search recursive algo
int bianry_search(int* arr, int s, int e, int x) {
    if(s<=e) {
        int mid = (s+e)/2;

        if(arr[mid] == x) return mid;

        else if(arr[mid] < x) return bianry_search(arr,mid+1,e,x);

        else if(arr[mid] > x) return bianry_search(arr,s,mid-1,x);
    }
    return -1;
}

int main() {
    int n,x;
    cin >> n;
    int* arr = new int[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    cin >> x;
    cout << bianry_search(arr,0,n-1,x);
}