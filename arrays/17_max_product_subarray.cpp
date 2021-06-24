#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

// utility function to input array
void input_array(int* arr, int n) {
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
}

int max_product_subarray(int* arr, int n) {
    int maxVal = 1;
    int minVal = 1;

    int max_so_far = INT_MIN;

    for(int i=0;i<n;i++) {
        if(arr[i] < 0) swap(maxVal,minVal);

        maxVal = max(arr[i], maxVal*arr[i]);
        minVal = min(arr[i], minVal*arr[i]);

        max_so_far = max(max_so_far,maxVal);
    }

    return max_so_far;
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    input_array(arr,n);
    cout << max_product_subarray(arr,n) << endl;
}
