#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

int staircase(int n) {
    if(n<=1) return 1;

    return staircase(n-1) + staircase(n-2);
}

int main() {
    int n;
    cin >> n;
    cout << staircase(n);
}