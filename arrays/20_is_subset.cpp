#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

void input_array(int* arr, int n) {
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
}

string is_subset(int a1[], int a2[], int n, int m) {
    if(n<m) return "No";
    
    map<int,int> mp;
    
    for(int i=0;i<n;i++) {
        mp[a1[i]]++;
    }
    
    for(int i=0;i<m;i++) {
        if(!mp[a2[i]]) return "No";
    }
    
    return "Yes";
}

int main() {
    int n,m;
    cin >> n >> m;
    int* a1 = new int[n];
    int* a2 = new int[m];

    input_array(a1,n);
    input_array(a2,m);

    cout << is_subset(a1,a2,n,m);
}
