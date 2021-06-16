#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

//reverse array with loop
void reverse_array(int* arr, int n) {
    int s = 0;
    int e = n-1;

    while(s<e) {
        swap(arr[s++],arr[e--]);
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
    reverse_array(arr,n);
    print_array(arr,n);
}