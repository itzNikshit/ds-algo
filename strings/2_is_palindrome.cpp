#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

int isPlaindrome(string S) {
    int s = 0;
    int e = S.size()-1;
    while(s < e) {
        if(S[s] != S[e]) return 0;
        s++;
        e--;
    }
    return 1;
}

int main() {
    string s;
    cin >> s;
    cout << isPlaindrome(s);
}
