#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

void reverse_array(int* arr, int s, int e) {
    if(s<e) {
        swap(arr[s],arr[e]);
        reverse_array(arr,s+1,e-1);
    }
}

void reverse_array(int* arr, int n) {
    reverse_array(arr,0,n-1);
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
    reverse_array(arr,n);
    print_array(arr,n);
}