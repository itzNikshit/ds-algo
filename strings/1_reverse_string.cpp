#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

void reverse_string(vector<char>& s) {
    reverse(s.begin(), s.end());
}

int main() {
    int n;
    cin >> n;
    vector<char> s(n,'0');
    for(int i=0;i<n;i++) cin >> s[i];
    reverse_string(s);
    for(int i=0;i<n;i++) {
        cout << s[i];
    }
}
