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
void rearrange_array(int* arr, int n) {
    sort(arr,arr+n);
    int negatives=0,positives=0;
    for(int i=0;i<n;i++) {
        if(arr[i] < 0) negatives++;
        else positives++;
    }
    int i=1;
    int j=negatives;
    negatives--;
    while(negatives-- && positives--) {
        swap(arr[i],arr[j]);
        i+=2;
        j++;
    }
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    input_array(arr,n);
    rearrange_array(arr,n);
    print_array(arr,n);
}
