#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

void reduce_in_minimum(int n, int &ans) {
    if(n==1) return;
    if(!(n%3)) {
        ans++;
        reduce_in_minimum(n/3,ans);
    }

    else if(!(n%2)) {
        ans++;
        reduce_in_minimum(n/2,ans);
    }

    else if(n >= 1) {
        ans++;
        reduce_in_minimum(n-1,ans);
    }    
}

int main() {
    int n;
    cin >> n;
    int ans = 0;
    reduce_in_minimum(n,ans);
    cout << ans;
}