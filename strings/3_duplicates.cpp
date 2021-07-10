#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

void duplicates(string s) {
    map<char,int> freq;
    for(int i=0;i<s.size();i++) {
        freq[s[i]]++;
    }
    for(auto element : freq) {
        if(element.second > 1) {
            cout << element.first << " with count = " << element.second << endl;
        }
    }
}

int main() {
    string s;
    cin >> s;
    duplicates(s);
}
