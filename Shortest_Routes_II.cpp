
#include <bits/stdc++.h>
using namespace std;

long long main(){
    long long n, m,q;
    cin >> n >> m>>q;

    // vector<vector<pair<long long, long long>>> adj(n + 1);
    vector<vector<long long>> dist(n+1,vector<long long>(n+1,LLONG_MAX));
    for(long long i = 1;i<=n;i++){
        dist[i][i] = 0;
    }
    for(long long i = 0; i < m; i++){
        long long a, b, c;
        cin >> a >> b >> c;
        dist[a][b] = min(dist[a][b],c);
        dist[b][a] = min(dist[b][a],c); 
    }

    for(long long via = 1;via<= n;via++){
        for(long long i = 1;i<=n;i++){
            for(long long j = 1;j<= n;j++){
                if(dist[i][via] < LLONG_MAX && dist[via][j] < LLONG_MAX){
                    dist[i][j] = min(dist[i][j],dist[i][via] + dist[via][j]);
                }
            }
        }
    }

    for(long long i = 1;i<=n;i++){
        for(long long j= 1;j<=n;j++){
            if(dist[i][j] == LLONG_MAX) dist[i][j] = -1;
        }
    }

    for(long long qq = 0;qq<q;qq++){
        long long a,b;
        cin>>a>>b;
        cout<<dist[a][b]<<endl;
    }
    
    
}
