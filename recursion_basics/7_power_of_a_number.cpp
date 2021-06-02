#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

//power of a number with recursion
int power_of_number(int a, int n) {
    if(n==0) return 1;

    if(n==1) return a;

    return a*power_of_number(a,n-1);
}

int main() {
    int n,a;
    cin >> n >> a;
    cout << power_of_number(a,n) << endl;
}
