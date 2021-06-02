#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

//recursive fibonacci
int fib(int n) {
    if(n<=0) return -1;

    if(n==1) return 0;

    if(n==2) return 1;

    return fib(n-1) + fib(n-2);
}

//recursive overloading
int fib(int a, int b, int n) {
    if(n<=0) return -1;

    if(n==1) return a;

    if(n==2) return b;

    return fib(a,b,n-1)+fib(a,b,n-2);
}

int main() {
    int n,a,b;
    cin >> n;
    cin >> a >> b;
    cout << fib(n) << endl;
    cout << fib(a,b,n) << endl;
}