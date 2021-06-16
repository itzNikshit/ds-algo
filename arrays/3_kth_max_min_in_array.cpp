#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

pair<int,int> kth_max_min_in_array(int* arr, int n, int k) {
    int temp = k-1;
    int i = n-1;
    while(temp--) {
        i--;
    }
    int kth_max = arr[i];
    i=0;
    temp = k-1;

    while(temp--) {
        i++;
    }
    int kth_min = arr[i];

    return make_pair(kth_max,kth_min);
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
    int n,k;
    cin >> n >> k;
    int* arr = new int[n];
    input_array(arr,n);
    if(k>n) {
        cout << "NOT POSSIBLE WITH GIVEN VALUE OF K";
        return 0;
    }
    sort(arr,arr+n);
    pair<int,int> max_min = kth_max_min_in_array(arr,n,k);
    cout << max_min.first << " " << max_min.second;
}