#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

// fast power in O(log n) time complexity
int fast_power(int a, int n) {
    if(n==0) return 1;

    int small_out = fast_power(a,n/2);

    small_out *= small_out;

    return (n%2 ? small_out*a : small_out);
}

int main() {
    int a,n;
    cin >> a >> n;
    cout << fast_power(a,n);
}