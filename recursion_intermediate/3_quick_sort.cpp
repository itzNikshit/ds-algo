#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

/* quick sort algo to sort an array */

int partition(int* arr, int s, int e) {
    int cnt = 0;
    for(int i=s+1;i<=e;i++) {
        if(arr[i] < arr[s]) cnt++;
    }
    int pivot = s+cnt;

    swap(arr[s],arr[pivot]);

    int i=s;
    int j=e;

    while(i<pivot && j>pivot) {
        if(arr[i] < arr[pivot]) {
            i++;
        } else if(arr[j] >= arr[pivot]) {
            j--;
        } else {
            swap(arr[i],arr[j]);
        }
    }

    return pivot;
}

void quick_sort(int* arr, int s, int e) {
    if(s<e) {
        int pivot = partition(arr,s,e);

        quick_sort(arr,s,pivot-1);
        quick_sort(arr,pivot+1,e);
    }
}

void quick_sort(int* arr, int n) {
    quick_sort(arr,0,n-1);
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    quick_sort(arr,n);

    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
}
