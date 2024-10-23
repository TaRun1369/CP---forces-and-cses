#include <bits/stdc++.h>
using namespace std;
using ll = long long;

long long n = 2005;
vector<vector<long long>>edges;
vector<long long> dist(n);
void query(long long val){
    cout<<"? "<<val<<endl;
    for(long long i = 0;i<n;i++){
        cin>>dist[i];
    }


}
void addedge(long long u,long long v){
    edges.push_back({u,v});
}
long long main() {

    long long n;
    cin>>n;

    query(1);
    vector<long long> dis = dist;
    vector<long long> black,yellow;
    for(long long i = 1;i<n;i++){
        if(dist[i] %2 == 0) {
            black.push_back(i);
        }else{
            yellow.push_back(i);
        }
        if(dist[1] == 1){
            addedge(i,1);
        }
    }
    if(black.size() < yellow.size()){
        for(auto it : black){
            query(it);
            for(long long i = 1;i<n;i++){
                if(dist[i] == 1){
                    addedge(i,it);
                }
            }
        }
    }
    else{
        for(auto it : yellow){
            query(it);
            for(long long i = 1;i<n;i++){
                if(dist[i] == 1){
                    addedge(i,it);
                }
            }
        }
    }

    for(auto it : edges){
        cout<<"! "<<endl;
        cout<<it[0] + 1<<" "<<it[1] + 1<<endl;
    }
}


