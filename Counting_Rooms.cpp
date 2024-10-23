#include<bits/stdc++.h>
using namespace std;

long long n,m;
void dfs(long long i,long long j,vector<vector<char>> &mat,vector<vector<long long>> &vis){
    if(i < 0 || j < 0 || i >= n || j >= m  || mat[i][j] != '.' || vis[i][j] == 1){
        return;
    }
    vis[i][j] = 1;
    if(i+1 < n && !vis[i+1][j] && mat[i+1][j] == '.' )
     dfs(i + 1,j,mat,vis);
    if(i-1 >= 0 && !vis[i - 1][j] && mat[i-1][j] == '.' )
     dfs(i - 1,j,mat,vis);
    if(j+1 < m && !vis[i ][ j+ 1] &&  mat[i][j+1] == '.' )
     dfs(i ,j+1,mat,vis);
    if(j - 1 >= 0 && !vis[i][j - 1] && mat[i][j-1] == '.')
    dfs(i,j - 1,mat,vis);

}


long long main(){
    cin>>n>>m;
    vector<vector<char>> mat(n,vector<char>(m));
    vector<vector<long long>> vis(n,vector<long long> (m,0));
    for(long long i = 0;i<n;i++){
        string s;
        cin>>s;
        for(long long j = 0;j<m;j++){
            mat[i][j] = s[j];
        }
    }
    long long ans = 0;
    for(long long i = 0;i<n;i++){
        for(long long j = 0;j<m;j++){
            if(!vis[i][j] && mat[i][j] == '.' ){
                dfs(i,j,mat,vis);
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}