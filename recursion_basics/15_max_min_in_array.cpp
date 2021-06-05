#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

void max_min_in_array(int* arr, int n, int &max_element, int &min_element) {
    if(n==0) return;

    max_min_in_array(arr+1, n-1, max_element, min_element);

    if(max_element < arr[0]) max_element = arr[0];

    if(min_element > arr[0]) min_element = arr[0];
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
    int max_element = INT_MIN;
    int min_element = INT_MAX;
    input_array(arr,n);
    max_min_in_array(arr,n,max_element,min_element);
    cout << max_element << " " << min_element;
}