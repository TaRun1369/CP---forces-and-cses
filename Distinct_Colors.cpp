// #include<bits/stdc++.h>
// using namespace std;


// long long color[200001];
// vector<long long> tree[200001];
// set<long long> *st[200001];
// long long res[200001];

// void dfs(long long node,long long par){
//     long long mxn = -1;
// long long mxnode = 0;

// for(long long child : tree[node]){
//     if(child != par){
//         dfs(child,node);
//         if(st[child]->size() > mxnode){
//             mxnode = st[child]->size();
//             mxn = child;
//         }
//     }

//     if(mxn == -1){
//         // koi nhi mila 
//         st[node] = new set<long long> ();

//     }
//     else st[node] = st[mxn];
//     st[node]->insert(color[node]);

//     for(long long child : tree[node]){
//         if(child != par && child != mxn){
//             for(auto it : *st[child]){
//                 st[node]->insert(it);
//             }
//         }
//     }
//     res[node] =st[node]->size();

// }


// }
// long long main(){
//     long long n;
//     cin>>n;
//     for(long long i = 0;i<n;i++){
//         cin>>color[i];
//     }

//     for(long long i = 0;i<n-1;i++){
//         long long a,b;
//         cin>>a>>b;
//         a--;b--;
//         tree[a].push_back(b);
//         tree[b].push_back(a);
//     }

//     dfs(1,-1);

//     for(long long i = 0;i<n;i++){
//         cout<<res[i]<<endl;
//     }


// }
#include<bits/stdc++.h>
using namespace std;

long long color[200001];
vector<long long> tree[200001];
set<long long> *st[200001];
long long res[200001];

void dfs(long long node, long long par) {
    long long mxn = -1;
    long long mxnode = 0;

    // Traverse children
    for(long long child : tree[node]) {
        if(child != par) {
            dfs(child, node);
            // Find the largest child set
            if(st[child]->size() > mxnode) {
                mxnode = st[child]->size();
                mxn = child;
            }
        }
    }

    if(mxn == -1) {
        // No child sets found, initialize a new set for this node
        st[node] = new set<long long> ();
    } else {
        // Polong long to the largest child set
        st[node] = st[mxn];
    }

    // Insert the current node's color
    st[node]->insert(color[node]);

    // Merge other child sets long longo the largest one
    for(long long child : tree[node]) {
        if(child != par && child != mxn) {
            for(auto it : *st[child]) {
                st[node]->insert(it);
            }
        }
    }

    // Store the result
    res[node] = st[node]->size();
}

long long main() {
    long long n;
    cin >> n;

    for(long long i = 0; i < n; i++) {
        cin >> color[i];
    }

    for(long long i = 0; i < n-1; i++) {
        long long a, b;
        cin >> a >> b;
        a--; b--;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }

    dfs(0, -1); // Corrected to start DFS from node 0

    for(long long i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
}
