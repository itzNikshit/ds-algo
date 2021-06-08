#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

/* merge sort algorithm to sort an unsorted array */

// function to merge the divided array
void merge(int *arr, int s, int e, int mid) {
    int test[e-s+1];
    int i=s;
    int j=mid+1;
    int k=0;

    while(i<=mid && j<=e) {
        if(arr[i] < arr[j]) {
            test[k] = arr[i];
            i++;
        }

        else if(arr[i] >= arr[j]) {
            test[k] = arr[j];
            j++;
        }
        k++;
    }

    while(i<=mid) {
        test[k] = arr[i];
        k++;
        i++;
    }

    while(j<=e) {
        test[k] = arr[j];
        k++;
        j++;
    }

    i = s;
    j = e;
    k = 0;
    while(i<=j) {
        arr[i] = test[k];
        i++;
        k++;
    }
}

// function to divide the array in half
void merge_sort(int* arr, int s, int e) {
    if(s<e) {
        int mid = (s+e)/2;
        merge_sort(arr,s,mid);
        merge_sort(arr,mid+1,e);

        merge(arr,s,e,mid);
    }
}

// function that just takes n as its only parameter
void merge_sort(int* arr, int n) {
    merge_sort(arr,0,n-1);
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    
    merge_sort(arr,n);

    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
}
