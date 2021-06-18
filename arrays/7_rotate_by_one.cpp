#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

void rotate_right_by_one(int* arr, int n) {
    for(int i=n-1;i>0;i--) {
        swap(arr[i],arr[i-1]);
    }
}

void rotate_left_by_one(int* arr, int n) {
    for(int i=0;i<n-1;i++) {
        swap(arr[i],arr[i+1]);
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
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    input_array(arr,n);
    rotate_right_by_one(arr,n);
    print_array(arr,n);
    rotate_left_by_one(arr,n);
    print_array(arr,n);
}