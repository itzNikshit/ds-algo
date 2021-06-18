#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

void negative_on_one_side(int* arr, int n) {
    int s = 0;
    int e = n-1;

    while(s<e) {
        if(arr[s] < 0) s++;

        else if(arr[s] >= 0 && arr[e] < 0) swap(arr[s++],arr[e--]);

        else e--;
    }
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
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    input_array(arr,n);
    negative_on_one_side(arr,n);
    print_array(arr,n);
}