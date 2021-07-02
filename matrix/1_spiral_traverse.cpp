#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;

vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) {
    vector<int> ans;
    vector<vector<bool>> visited(r,vector<bool>(c,false));
    int k = 0;
    int i = k;
    int j = k;
    int cnt=0;
    while(k <= (c/2)) {
        for(j;j<c;j++) {
            if(visited[i][j]) {
                break;
            }
            if(!visited[i][j]) {
                visited[i][j] = true;
                cnt++;
                ans.push_back(matrix[i][j]);
            }
        }
        i++;
        j--;
        for(i;i<r;i++) {
            if(visited[i][j]) {
                break;
            }
            if(!visited[i][j]) {
                visited[i][j] = true;
                cnt++;
                ans.push_back(matrix[i][j]);
            }
        }
        j--;
        i--;
        for(j;j>=k;j--) {
            if(visited[i][j]) {
                break;
            }
            if(!visited[i][j]) {
                visited[i][j] = true;
                cnt++;
                ans.push_back(matrix[i][j]);
            }
        }
        i--;
        j++;
        for(i;i>k;i--) {
            if(visited[i][j]) {
                break;
            }
            if(!visited[i][j]) {
                visited[i][j] = true;
                cnt++;
                ans.push_back(matrix[i][j]);
            }
        }
        i++;
        k++;
        i = k;
        j = k;
    }
    return ans;
}

int main() { 
    int r,c;
    cin >> r >> c;
    vector<vector<int> > matrix(r,vector<int>(c));
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cin >> matrix[i][j];
        }
    }
    vector<int> ans = spirallyTraverse(matrix,r,c);
    for(int i=0;i<ans.size();i++) {
        cout << ans[i] << " ";
    }
}
