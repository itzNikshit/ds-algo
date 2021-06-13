#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

void floor_value(int* arr, int s, int e, int x, int &ans) {
    if(s<=e) {
        int mid = (s+e)/2;

        if(arr[mid] == x) {
            ans = -1;
            return;
        }

        else if(arr[mid] < x) {
            ans = max(ans,arr[mid]);
            floor_value(arr,mid+1,e,x,ans);
        }

        else if(arr[mid] > x) {
            ans = min(ans,arr[mid]);
            floor_value(arr,s,mid-1,x,ans);
        }
    }
}

void floor_value(int* arr, int n, int x, int &ans) {
    floor_value(arr,0,n-1,x,ans);
}

int main() {
    int n,x;
    cin >> n;
    int* arr = new int[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    cin >> x;
    int ans = INT_MIN;
    floor_value(arr,n,x,ans);
    if(ans==INT_MIN) cout << "NO FLOOR VALUE EXISTS";
    else cout << ans;
}