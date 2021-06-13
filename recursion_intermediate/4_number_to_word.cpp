#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

string number_to_word(int n, map<int,string> m) {
    if(n==0) return "";

    string smallOut = number_to_word(n/10,m);
    smallOut += " " + m[n%10];

    return smallOut;
}

int main() {
    int n;
    cin >> n;
    map<int,string> m;
    m[0] = "zero";
    m[1] = "one";
    m[2] = "two";
    m[3] = "three";
    m[4] = "four";
    m[5] = "five";
    m[6] = "six";
    m[7] = "seven";
    m[8] = "eight";
    m[9] = "nine";
    string s = number_to_word(n,m);
    cout << s << endl;
}