#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

// utility function to input array
void input_array(int* arr, int n) {
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
}

int count_occurence(int* arr, int n, int k) {
    int cnt = 0;
    map<int,int> mp;
    set<int> s;

    for(int i=0;i<n;i++) {
        mp[arr[i]]++;
        s.insert(arr[i]);
    }

    for(auto i : s) {
        if(mp[i] > (n/k)) cnt++;
    }

    return cnt;
}

int main() {
    int n,k;
    cin >> n >> k;
    int* arr = new int[n];
    input_array(arr,n);
    cout << count_occurence(arr,n,k) << endl;
}
