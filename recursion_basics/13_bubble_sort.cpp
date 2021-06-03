#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

// buuble sort with recursion
void bubble_sort(int* arr, int n) {
    if(n==1) return;

    bubble_sort(arr+1,n-1);

    if(arr[0] >= arr[1]) {
        swap(arr[0],arr[1]);

        bubble_sort(arr+1,n-1);
    }
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    
    bubble_sort(arr,n);

    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
}