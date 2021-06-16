#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

void sort012(int* arr, int n) {
    vector<int> v(3,0);
    for(int i=0;i<n;i++) {
        v[arr[i]]++;
    }
    int j = 0;
    for(int i=0;i<n;i++) {
        while(v[j]--) {
            arr[i] = j;
            i++;
        }
        i--;
        j++;
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
    sort012(arr,n);
    print_array(arr,n);
}