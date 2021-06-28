#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

void input_array(int* arr, int n) {
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
}

int trapping_water(int* arr, int n) {
    int max_val = INT_MIN;
    int left[n],right[n];
    for(int i=0;i<n;i++) {
        max_val = max(max_val,arr[i]);
        left[i] = max_val;
    }
    max_val = INT_MIN;
    for(int i=n-1;i>=0;i--) {
        max_val = max(max_val,arr[i]);
        right[i] = max_val;
    }
    int sum = 0;
    for(int i=0;i<n;i++) {
        arr[i] = min(left[i],right[i]) - arr[i];
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];

    input_array(arr,n);

    cout << trapping_water(arr,n);
}
