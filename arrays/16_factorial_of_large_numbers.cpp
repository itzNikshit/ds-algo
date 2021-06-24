#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

int multiply(int i, int* res, int res_size) {
    int carry = 0;

    for(int j=0;j<res_size;j++) {
        int prod = res[j]*i + carry;
        res[j] = prod%10;
        carry = prod/10;
    }
    while(carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }

    return res_size;
}
    
vector<int> factorial(int n){
    vector<int> v;
    int res[5000];

    res[0] = 1;
    int res_size = 1;

    for(int i=2;i<=n;i++) {
        res_size = multiply(i, res, res_size);
    }
    for(int i=res_size-1;i>=0;i--) {
        v.push_back(res[i]);
    }
    
    return v;
}

int main() {
    int n;
    cin >> n;
    vector<int> v = factorial(n);
    for(int i=0;i<v.size();i++) {
        cout << v[i];
    }
}
