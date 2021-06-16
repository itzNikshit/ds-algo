#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

//reverse array with loop
pair<int,int> max_min_in_array(int* arr, int n) {
    int max_ele = INT_MIN;
    int min_ele = INT_MAX;

    for(int i=0;i<n;i++) {
        if(arr[i] > max_ele) max_ele = arr[i];

        if(arr[i] < min_ele) min_ele = arr[i];
    }

    return make_pair(max_ele,min_ele);
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
    pair<int,int> max_min = max_min_in_array(arr,n);
    cout << max_min.first << " " << max_min.second;
}