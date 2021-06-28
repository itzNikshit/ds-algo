#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

void input_array(int* arr, int n) {
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
}

bool triplet_sum_in_array(int* a, int n, int x) {
    sort(a,a+n);
    for(int k=0;k<n;k++) {
        int start = a[k];
        int i = k+1;
        int j = n-1;
        while(i<j) {
            int sum = start + a[i] + a[j];

            if(sum == x) return true;

            else if(sum < x) i++;

            else if(sum > x) j--;
        }
    }
    return false;
}

int main() {
    int n,x;
    cin >> n >> x;
    int* arr = new int[n];

    input_array(arr,n);

    cout << triplet_sum_in_array(arr,n,x);
}
