#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

//multiply numbers without using multiply operator
int multiply_without_multiply(int a, int b) {
    if(b==0) return 0;

    return a+multiply_without_multiply(a,b-1);
}

int main() {
    int a,b;
    cin >> a >> b;
    cout << multiply_without_multiply(a,b) << endl;
}
