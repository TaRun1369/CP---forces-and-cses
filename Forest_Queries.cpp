
#include<bits/stdc++.h>
using namespace std;

long long arr[1001][1001];
long long getans(long long sx,long long sy,long long ex,long long ey){
    return arr[ex][ey] - arr[sx - 1][ey] - arr[ex][sy - 1] + arr[sx - 1][sy - 1];
}
long long main(){
    long long n,q;
    cin>>n>>q;
    for(long long i=1;i<=n;i++){
        for(long long j = 1;j<=n;j++){
            char ch;
            cin>>ch;
            arr[i][j] = (ch=='*');
            arr[i][j] += arr[i][j-1];
        }
    }


    for(long long i=1;i<=n;i++){
        for(long long j = 1;j<=n;j++){
            arr[i][j] += arr[i -1][j];
        }
    }

        while(q--){
            long long sx,sy,ex,ey;
            cin>>sx>>sy>>ex>>ey;
            cout<<getans(sx,sy,ex,ey)<<endl;
        }
}
