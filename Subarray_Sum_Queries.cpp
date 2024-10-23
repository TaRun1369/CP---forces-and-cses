#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct Node{
    ll SubMaxSum;
    ll PrefixSum;
    ll SuffixSum;
    ll SumofAll;

    Node(long long val = 0){
    SubMaxSum = val; PrefixSum = val;
     SuffixSum = val;SumofAll = val;

    }
};

Node seg[800001];
ll input[200001];

Node compose(long long val1,long long val2){
    Node lef = seg[val1];
    Node rig = seg[val2];
    Node ans;
    ans.SubMaxSum = max(lef.SubMaxSum, rig.SubMaxSum);
    ans.SubMaxSum = max(ans.SubMaxSum , lef.SuffixSum + rig.PrefixSum);
    ans.PrefixSum = max(lef.PrefixSum,lef.SumofAll + rig.PrefixSum);
    ans.SuffixSum  = max(rig.SuffixSum , lef.SuffixSum + rig.SumofAll);
    ans.SumofAll = (rig.SumofAll + lef.SumofAll);
    return ans;
}
void build(long long node,long long start,long long end){
    if(start == end){

        // struct t(input[start]);
        // Node t = seg[start];
        // t.SubMaxSum = t.PrefixSum = t.SuffixSum = t.SumofAll = input[start];
        seg[node] = Node(input[start]);
    }
    else{
        long long mid = (start + end)/2;
        build(2*node + 1,start,mid);
        build(2*node + 2,mid + 1,end);
        seg[node] = compose(2*node + 1,2*node + 2); // compose baby
    }
}

void Update(long long node,long long start,long long end,long long idx,long long val){
    if(start == end){
        seg[node] = Node(val);
    }
    else{
        long long mid = (start + end)/2;
        if(idx <= mid){
            Update(2 *node  + 1, start ,mid,idx,val);
            
        }
        else{
            Update(2*node + 2 , mid + 1 ,end,idx,val);
        }

        seg[node] = compose(2*node +1,2*node + 2);
    }
}

long long main(){
    long long n,q;
    cin>> n>>q;
    for(long long i = 0;i<n;i++){
        cin>>input[i];
    }
    build(0,0,n-1);
    for(long long i = 0;i <q;i++){
        long long k,x;
        cin>>k>>x;

        Update(0,0,n-1,k-1,x);
        long long ans = seg[0].SubMaxSum;
        cout<<((ans < 0 ) ? 0 : ans)<<endl;
    }
}
