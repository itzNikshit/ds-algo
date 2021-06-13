#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

void remove_duplicates(char* input, int n, int &i) {
    if(n==1) return;

    if(input[0] == input[1]) {
        for(int i=1;i<n-1;i++) {
            input[i] = input[i+1];
        }
        n--;
        i--;
        remove_duplicates(input,n,i);
    }
    
    else remove_duplicates(input+1,n-1,i);
}

int main() {
    int n;
    cin >> n;
    char* input = new char[n];
    for(int i=0;i<n;i++) {
        cin >> input[i];
    }
    int i = n;
    remove_duplicates(input,n,i);
    for(int j=0;j<i;j++) {
        cout << input[j];
    }
}