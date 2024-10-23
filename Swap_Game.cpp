#include<bits/stdc++.h>
using namespace std;

long long main(){

    vector<vector<long long>> mat(4,vector<long long>(4,0));

    map<long long,pair<long long,long long>>mp;
    for(long long i = 1;i<4;i++){
        for(long long j = 1;j<4;j++){
            cin>>mat[i][j];
            mp[mat[i][j]] = {i,j};
        }
    }

for(long long i = 1;i<4;i++){
        for(long long j = 1;j<4;j++){
            cin>>mat[i][j];
            mp[mat[i][j]] = {i,j};
        }
    }
    
}