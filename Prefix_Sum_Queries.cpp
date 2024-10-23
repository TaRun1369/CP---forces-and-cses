// #include<bits/stdc++.h>
// using namespace std;

// struct Node{
//     long long sum;
//     long long prefix;
// };
// long long input[200001];
// Node seg[800001];

// void merge(long long node){
//     seg[node].sum = seg[2*node].sum + seg[2*node+1].sum;
//     seg[node].prefix = max(seg[2*node].prefix,seg[2*node].sum+seg[2*node+1].prefix);
// }
// void build(long long node,long long start,long long end){
//     if(start == end){
//         seg[node].sum = input[start];
//         seg[node].prefix = input[start];
//     }
//     else{
//         long long mid = (start+end)/2;
//         build(2*node,start,mid);
//         build(2*node+1,mid+1,end);
//         merge(node);
//     }
// }

// void update(long long node,long long start,long long end,long long index,long long value){
//     if(start == end){
//         seg[node].sum = value;
//         seg[node].prefix = value;
//         input[start] = value;
//     }
//     else{
//         long long mid = (start+end)/2;
//         if(index <= mid){
//             update(2*node,start,mid,index,value);
//         }
//         else{
//             update(2*node+1,mid+1,end,index,value);
//         }
//         merge(node);
//     }
// }

// Node query(long long node,long long start,long long end,long long l,long long r){
//   // out 
//   // l r start end or start end l r
//   if(r < start || l > end){
//     Node temp;
//     temp.prefix = 0;
//     temp.sum = 0;
//     return temp;
//   }

//   // complete 
//     // l start end r
//     if(start >= l && r >= end){
//         return seg[node];
//     }


//     long long mid = (start+end)/2;
//     Node lef = query(2*node,start,mid,l,r);
//     Node rig = query(2*node+1,mid+1,end,l,r);
//     Node res;
//     res.sum = lef.sum + rig.sum;
//     res.prefix = max(lef.prefix,lef.sum+rig.prefix);
//     return res;
// }

// long long main(){
//     long long n,q;
//     cin>>n>>q;
//     for(long long i = 1 ;i<=n;i++) cin>>input[i];
//     build(1,1,n);
//     for(long long i = 0;i< q;i++){
//         long long type;
//         cin>>type;
//         if(type == 1){
//             long long a,b;
//             cin>>a>>b;
//             update(1,1,n,a,b);
//         }
//         else {
//             long long a,b;
//             cin>>a>>b;
//             cout<<query(1,1,n,a,b).prefix<<endl;
//         }
//     }
// }
#include <bits/stdc++.h>
using namespace std;

struct Node {
    long long sum;
    long long prefix;
};

long long input[200001];
Node seg[800001];

void merge(long long node) {
    seg[node].sum = seg[2 * node].sum + seg[2 * node + 1].sum;
    seg[node].prefix = max(seg[2 * node].prefix, seg[2 * node].sum + seg[2 * node + 1].prefix);
}

void build(long long node, long long start, long long end) {
    if (start == end) {
        seg[node].sum = input[start];
        seg[node].prefix = input[start];
    } else {
        long long mid = (start + end) / 2;
        build(2 * node, start, mid);
        build(2 * node + 1, mid + 1, end);
        merge(node);
    }
}

void update(long long node, long long start, long long end, long long index, long long value) {
    if (start == end) {
        seg[node].sum = value;
        seg[node].prefix = value;
        input[start] = value;
    } else {
        long long mid = (start + end) / 2;
        if (index <= mid) {
            update(2 * node, start, mid, index, value);
        } else {
            update(2 * node + 1, mid + 1, end, index, value);
        }
        merge(node);
    }
}

Node query(long long node, long long start, long long end, long long l, long long r) {
    if (r < start || l > end) {
        Node temp;
		temp.prefix = temp.sum = 0;
		return temp;
        // return {0, 0}; // Return a node with 0 values
    }

    if (start >= l && end <= r) {
        return seg[node];
    }

    long long mid = (start + end) / 2;
    Node left = query(2 * node, start, mid, l, r);
    Node right = query(2 * node + 1, mid + 1, end, l, r);
    Node res;
    res.sum = left.sum + right.sum;
    res.prefix = max(left.prefix, left.sum + right.prefix);
    return res;
}

long long main() {
    long long n, q;
    cin >> n >> q;
    for (long long i = 1; i <= n; i++) cin >> input[i];
    build(1, 1, n);
    for (long long i = 0; i < q; i++) {
        long long type;
        cin >> type;
        if (type == 1) {
            long long a, b;
            cin >> a >> b;
            update(1, 1, n, a, b);
        } else {
            long long a, b;
            cin >> a >> b;
            cout << max(0LL,query(1, 1, n, a, b).prefix )<< endl;
        }
    }
}
