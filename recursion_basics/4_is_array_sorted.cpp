#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

//array is sorted or not ascending order
bool is_array_sorted_ascending(int* arr, int n) {
    if(n==0 || n==1) return true;

    if(arr[0] > arr[1]) return false;

    return is_array_sorted_ascending(arr+1,n-1);
}

//array is sorted or not descending order
bool is_array_sorted_descending(int* arr, int n) {
    if(n==0 || n==1) return true;

    if(arr[0] < arr[1]) return false;

    return is_array_sorted_descending(arr+1,n-1);
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    cout << is_array_sorted_ascending(arr,n) << endl;
    cout << is_array_sorted_descending(arr,n) << endl;
}
