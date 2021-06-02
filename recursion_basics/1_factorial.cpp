#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

// recursive factorial
int fact(int n) {
    if(n==1 || n<=0) return 1;
    
    return n*fact(n-1);
}

int main() {
    int n;
    cin >> n;
    cout << fact(n) << endl;
}
