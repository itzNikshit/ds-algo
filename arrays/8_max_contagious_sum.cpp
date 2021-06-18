#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

int max_contagious_sum(int* arr, int n) {
    int max_so_far = INT_MIN;
    int max_ending_here = 0;

    for(int i=0;i<n;i++) {
        max_ending_here += arr[i];

        max_so_far = max(max_so_far,max_ending_here);

        if(max_ending_here < 0) max_ending_here = 0;
    }

    return max_so_far;
}

// utility function to input array
void input_array(int* arr, int n) {
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
}

// utility function to print array
void print_array(int* arr, int n) {
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    input_array(arr,n);
    int max_sum = max_contagious_sum(arr,n);
    cout << max_sum;
}