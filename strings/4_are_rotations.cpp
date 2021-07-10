#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

bool are_rotations(string first, string second) {
    if(first.size() != second.size()) return false;

    string temp = first + first;
    // string::npos basically denotes the end of the string
    return (temp.find(second) != string::npos);
}

int main() {
    string s,t;
    cin >> s >> t;
    cout << are_rotations(s,t);
}
