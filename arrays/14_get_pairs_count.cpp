#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

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

// function for problem
int get_pairs_count(int arr[], int n, int k) {
    int cnt = 0;
    map<int,int> mp;
    for(int i=0;i<n;i++) {
        mp[arr[i]]++;
    }
    for(int i=0;i<n;i++) {
        cnt += mp[k-arr[i]];
        
        if(k-arr[i] == arr[i]) cnt--;
    }
    return cnt/2;
}

int main() {
    int n,k;
    cin >> n >> k;
    int* arr = new int[n];
    input_array(arr,n);
    cout << get_pairs_count(arr,n,k) << endl;
}
