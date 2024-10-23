#include<bits/stdc++.h>
using namespace std;


long long main(){
    long long tc;
    cin>>tc;
    while(tc--){
        long long n,m;
        cin>>n>>m;
        vector<vector<long long>> v(n,vector<long long>(m));
        for(long long i = 0;i<n;i++){
            for(long long j = 0;j<m;j++){
                cin>>v[i][j];
            }
        }
        long long ans = 0;
        for(long long i = 0;i<n;i++){
            for(long long j = 0;j<m;j++){

                    long long mini = long long_MAX;
                    if(i - 1 >= 0){
                        mini = min(mini,(v[i][j] -  v[i-1][j]));
                    }
                    if(j - 1>= 0){
                            mini = min(mini,( v[i][j]- v[i][j-1] ));
                    }
                    if(i + 1 < n){
                        mini = min(mini,(v[i][j] - v[i+1][j]));
                    }
                    if(j + 1 < m){
                        mini = min(mini,(v[i][j] - v[i][j+1]));
                    }
                if(mini <= 0) continue;
                else{
                    v[i][j] -= mini;
                }

                    
            }
         
        }

        for(auto it :v){
            for(auto is : it){
                cout<<is<<" ";

            }
            cout<<endl;
        }


    }
}