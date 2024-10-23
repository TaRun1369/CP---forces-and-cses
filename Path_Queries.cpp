
// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // vector<long long> tree[200001];
// // // // long long timerIN[400001],timerOut[400001];
// // // // long long timeInValue[400001];
// // // // long long seg[800001];
// // // // long long value[200001];

// // // //         void build(long long ind,long long low,long long high){
// // // //             if(low == high) {
// // // //                 seg[ind] = timeInValue[low];
// // // //                 return;
// // // //             }

// // // //             long long mid = (low + high) / 2;
// // // //             build(2*ind+1,low,mid);
// // // //             build(2*ind+2,mid+1,high);
// // // //             seg[ind] = seg[2*ind+1]+seg[2*ind+2];
// // // //         }

// // // //         long long queryToFindMin(long long ind,long long low,long long high,long long l,long long r){
// // // //             // no overlap
// // // //             // l r low high || low high l r
// // // //             if(r < low || high < l) return 0;
            
// // // //             // complete overlap
// // // //             // l low high r 
// // // //             else if(low >= l && high <= r) return seg[ind];

// // // //             // partial overlap 
// // // //             else{
// // // //                 long long mid = (low + high) / 2;
// // // //                 long long left = queryToFindMin(2*ind+1,low,mid,l,r);
// // // //                 long long right = queryToFindMin(2*ind+2,mid+1,high,l,r);
// // // //                 return (left+right);
// // // //             }
// // // //         }

// // // //         void updatequery(long long ind,long long low,long long high,long long pos,long long data){
// // // //             if(low == high){
// // // //                 seg[ind] = data;
// // // //                 return;
// // // //             }

// // // //             long long mid = (low + high)/2;

// // // //             if(pos <= mid){
// // // //                 updatequery(2*ind+1,low,mid,pos,data);
// // // //             }
// // // //             else{
// // // //                 updatequery(2*ind+2,mid+1,high,pos,data);
// // // //             }

// // // //             seg[ind] = seg[2*ind+1]+seg[2*ind+2];
// // // //         }



// // // // void dfs_for_ans(long long node,long long par,long long &timer){
// // // //     timerIN[node]= timer++;
    
// // // //     for(long long child : tree[node]){
// // // //         if(child != par){
// // // //             dfs_for_ans(child,node);
// // // //         }
// // // //     }
// // // //     timerOut[node] = timer;
// // // // }
// // // // long long main() {
// // // //     long long n,q;
// // // //     cin>>n>>q;
// // // //     for(long long i = 1;i<=n;i++) {
// // // //         long long x;
// // // //         cin>>x;
// // // //         value[i] = x;
// // // //     }
// // // //     // temp = ans;
// // // //     for(long long i=2;i<=n;i++){
// // // //         long long x,y;
// // // //         cin>>x>>y;
// // // //         tree[x].push_back(y);
// // // //         tree[y].push_back(x);
// // // //     }
// // // //     dfs_for_ans(1,-1,1);
// // // //     build(1,1,);
// // // //     for(long long i = 0;i<q;i++){
// // // //         long long x;
// // // //         cin>>x;
// // // //         if(x == 1){
// // // //             long long a,b;
// // // //             cin>>a>>b;
// // // //             ans = temp;
// // // //             ans[a] = b;
// // // //             dfs_for_ans(1,-1);
// // // //         }
// // // //         else{
// // // //             long long a;
// // // //             cin>>a;
// // // //             cout<<ans[a]<<endl;
// // // //         }
// // // //     }

    

// // // // }


// // // #include<bits/stdc++.h>
// // // using namespace std;

// // // long long bit[200001];
// // // long long Tend[200001];
// // // long long Tstart[200001];
// // // long long value[200001];
// // // vector<long long> adj[200001];
// // // long long n,q,timer;

// // // void update(long long i ,long long val){
// // //     for(;i<=n;i+= i&-i){
// // //         bit[i] += val;
// // //     }
// // // }

// // // long long query(long long i){
// // //     long long sum = 0;
// // //     for(;i>0;i-= i & -i){
// // //         sum += bit[i];
// // //     }
// // //     return sum;
// // // }

// // // void dfs(long long u,long long p){
// // //     Tstart[u] = ++timer;
// // //     update(timer,value[u]);
// // //     for(long long v : adj[u]){
// // //         if(v != p){
// // //             dfs(v,u);
// // //         }
// // //     }
// // //     Tend[u] = ++timer;
// // //     update(timer,-value[u]);
// // // }
// // // // void prlong long(){
// // // //     long long i = 1;
// // // //     while(bit[i] != 0){
// // // //         cout<<bit[i]<<endl;
// // // //         i++;
// // // //     }

// // // // }
// // // long long main(){
    
// // //     cin>>n>>q;
// // //     for(long long i = 1;i<=n;i++){
// // //         cin>>value[i];
// // //     }

// // //     for(long long i = 0;i<n-1;i++){
// // //         long long a,b;
// // //         cin>>a>>b;
// // //         adj[a].push_back(b);
// // //         adj[b].push_back(a);
// // //     }
// // //     long long type;
// // //     long long s,x;
// // //     dfs(1,0); // child , parent
// // //     //timer set
// // //     // prlong long();
// // //     while(q--){
// // //         cin>>type;
// // //         if(type == 1){
// // //             cin>>s>>x;
// // //             update(Tstart[s],-value[s]);
// // //             value[s] = x;
// // //             update(Tstart[s],value[s]);
// // //         }
// // //         else{
// // //             cin>>s;
// // //             cout<<query(Tstart[s])<<endl;
// // //         }
// // //     }

// // // }



// // #include <bits/stdc++.h>
// // using namespace std;

// // long long bit[400002]; // Increase size for 2 * n
// // long long Tstart[200001];
// // long long Tend[200001];
// // long long value[200001];
// // vector<long long> adj[200001];
// // long long n, q, timer;

// // void update(long long i, long long val) {
// //     for (; i <= 2 * n; i += i & -i) {
// //         bit[i] += val;
// //     }
// // }

// // long long query(long long i) {
// //     long long sum = 0;
// //     for (; i > 0; i -= i & -i) {
// //         sum += bit[i];
// //     }
// //     return sum;
// // }

// // void dfs(long long u, long long p) {
// //     Tstart[u] = ++timer;
// //     update(timer, value[u]);
// //     for (long long v : adj[u]) {
// //         if (v != p) {
// //             dfs(v, u);
// //         }
// //     }
// //     Tend[u] = ++timer;
// //     update(timer, -value[u]);
// // }

// // long long main() {
// //     cin >> n >> q;
// //     for (long long i = 1; i <= n; i++) {
// //         cin >> value[i];
// //     }

// //     for (long long i = 0; i < n - 1; i++) {
// //         long long a, b;
// //         cin >> a >> b;
// //         adj[a].push_back(b);
// //         adj[b].push_back(a);
// //     }

// //     timer = 0;
// //     dfs(1, 0); // Start DFS from root node with parent 0 (no parent)

// //     while (q--) {
// //         long long type;
// //         cin >> type;
// //         if (type == 1) {
// //             long long s, x;
// //             cin >> s >> x;
// //             update(Tstart[s], -value[s]);
// //             value[s] = x;
// //             update(Tstart[s], value[s]);
// //         } else {
// //             long long s;
// //             cin >> s;
// //             cout << query(Tstart[s]) << endl;
// //         }
// //     }

// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;

// long long bit[400002]; // Use size 2 * n
// long long Tstart[200001];
// long long Tend[200001];
// long long value[200001];
// vector<long long> adj[200001];
// long long n, q, timer;

// void update(long long i, long long val) {
//     for (; i <= 2 * n; i += i & -i) {
//         bit[i] += val;
//     }
// }

// long long query(long long i) {
//     long long sum = 0;
//     for (; i > 0; i -= i & -i) {
//         sum += bit[i];
//     }
//     return sum;
// }

// void dfs(long long u, long long p) {
//     Tstart[u] = ++timer;
//     update(timer, value[u]);
//     for (long long v : adj[u]) {
//         if (v != p) {
//             dfs(v, u);
//         }
//     }
//     Tend[u] = ++timer;
//     update(timer, -value[u]);
// }

// long long main() {
//     cin >> n >> q;
//     for (long long i = 1; i <= n; i++) {
//         cin >> value[i];
//     }

//     for (long long i = 0; i < n - 1; i++) {
//         long long a, b;
//         cin >> a >> b;
//         adj[a].push_back(b);
//         adj[b].push_back(a);
//     }

//     timer = 0;
//     dfs(1, 0); // Start DFS from root node with parent 0 (no parent)

//     while (q--) {
//         long long type;
//         cin >> type;
//         if (type == 1) {
//             long long s, x;
//             cin >> s >> x;
//             update(Tstart[s], -value[s]); // Remove the old value
//             value[s] = x; // Update to the new value
//             update(Tstart[s], value[s]); // Add the new value
//         } else {
//             long long s;
//             cin >> s;
//             cout << query(Tstart[s]) << endl;
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

long long bit[400002]; // Use size 2 * n
long long Tstart[200001];
long long Tend[200001];
long long value[200001];
vector<long long> adj[200001];
long long n, q, timer;

void update(long long i, long long val) {
    for (; i <= 2 * n; i += i & -i) {
        bit[i] += val;
    }
}

long long query(long long i) {
    long long sum = 0;
    for (; i > 0; i -= i & -i) {
        sum += bit[i];
    }
    return sum;
}

void dfs(long long u, long long p) {
    Tstart[u] = ++timer;
    update(timer, value[u]);
    for (long long v : adj[u]) {
        if (v != p) {
            dfs(v, u);
        }
    }
    Tend[u] = ++timer;
    update(timer, -value[u]);
}

long long main() {
    cin >> n >> q;
    for (long long i = 1; i <= n; i++) {
        cin >> value[i];
    }

    for (long long i = 0; i < n - 1; i++) {
        long long a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    timer = 0;
    dfs(1, 0); // Start DFS from root node with parent 0 (no parent)

    while (q--) {
        long long type;
        cin >> type;
        if (type == 1) {
            long long s, x;
            cin >> s >> x;
            long long delta = x - value[s];
            value[s] = x;
            update(Tstart[s], delta);
            update(Tend[s], -delta);
        } else {
            long long s;
            cin >> s;
            cout << query(Tstart[s]) << endl;
        }
    }

    return 0;
}
