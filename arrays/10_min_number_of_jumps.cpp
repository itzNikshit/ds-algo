#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

int min_number_of_jumps(int* arr, int n) {
    if(n<=1) return 0;

    if(arr[0] == 0) return -1;

    int jumps = 1;
    int max_reach = arr[0];
    int steps = arr[0];

    for(int i=1;i<n;i++) {
        if(i==n-1) return jumps;

        max_reach = max(max_reach,i+arr[i]);
        steps--;

        if(steps == 0) {
            jumps++;
            if(i >= max_reach) return -1;

            steps = max_reach - i;
        }
    }

    return -1;
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
    int min_jumps = min_number_of_jumps(arr,n);
    cout << min_jumps;
}