#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

void print_sentences_util(string** arr, int m, int n, int r, int c, string* output) {
    output[m] = arr[m][n];

    if(m == r-1) {
        for(int i=0;i<r;i++)
           cout << output[i] << " ";
        cout << endl;
        return;
    }

    for (int i=0;i<c;i++)
       if (arr[m+1][i] != "")
          print_sentences_util(arr,m+1,i,r,c,output);
}

void print_sentences(string** arr, int r, int c) {
    string* output = new string[r];
    for(int i=0;i<r;i++) {
        output[i] = "";
    }

    for(int i=0;i<c;i++) {
        if(arr[0][i] != "")
            print_sentences_util(arr,0,i,r,c,output);
    }
}

int main() {
    int r,c;
    cin >> r >> c;
    string** arr = new string*[r];
    for(int i=0;i<r;i++) {
        arr[i] = new string[c];
        for(int j=0;j<c;j++) {
            arr[i][j] = "";
        }
    }
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cin >> arr[i][j];
        }
    }
    print_sentences(arr,r,c);
}
