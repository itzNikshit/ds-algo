#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

void input_array(int* arr, int n) {
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
}

int find_min_difference(int* a, int n, int m) {
    sort(a,a+n);
    int ans = INT_MAX;
    for(int i=0;i<n;i++) {
        if(i+m-1 >= n) break;
        
        ans = min(ans,(a[i+m-1]-a[i]));
    }
    return ans;
}

int main() {
    int n,m;
    cin >> n >> m;
    int* arr = new int[n];

    input_array(arr,n);

    cout << find_min_difference(arr,n,m);
}
