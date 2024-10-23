
#include<bits/stdc++.h>
using namespace std;
long long ip[200001];
long long lazyTree[800001],seg[800001];

void updateRange(long long start, long long end, long long i, long long l, long long r, long long val) {
    if (lazyTree[i] != 0) { // pichle update ka bhugtan 
        seg[i] += (r - l + 1) * lazyTree[i];
      
        if (l != r) { //Not a leaf node
            lazyTree[i * 2 + 1] += lazyTree[i]; //Left Child in Lazy Tree
            lazyTree[i * 2 + 2] += lazyTree[i]; //Right Child in Lazy tree
        }
        lazyTree[i] = 0;
    }

    //Invalid or out of range
    if (l > end || r < start || l > r)
        return;

    //[start...end] is Exactly withing range of current nod [l..r]
    if (l >= start && r <= end) {
        seg[i] += (r - l + 1) * val;
        if (l != r) {
            lazyTree[i * 2 + 1] += val;
            lazyTree[i * 2 + 2] += val;
        }
        return;
    }

    //Call for left and right subtree
    long long mid = (l + r) / 2;
    updateRange(start, end, 2*i+1, l, mid, val);
    updateRange(start, end, 2*i+2, mid+1, r, val);
    seg[i] = seg[i * 2 + 1] + seg[i * 2 + 2];
}

void updateToRange(long long Rangestart,long long Rangeend,long long value,long long low ,long long high,long long ind){
    if(lazy[ind] != 0){
        seg[ind] += (high - low + 1) * value;

        if(low != high){
            // not leaf 
            lazy[ind* 2 + 1] += value;
            lazy[ind* 2 + 2] += value;
        }
        lazy[ind] = 0;
    }

    // out of range - low high Rangestart Rangeend OR Rangestart Rangeend low high
    if(high < Rangestart || low > Rangeend){
        return;
    }

    // completely andar aa raha tab   low Rangestart Rangeend high
    if(Rangestart >= low && Rangeend<= high){
        seg[ind] += (high - low + 1) * value;

        if(low != high){
            lazy[ind* 2 + 1] += value;
            lazy[ind* 2 + 2] += value

        }
        return;
    }

    // overlapping Range 

    long long mid = (low + high)/2;
        updateToRange(Rangestart,Rangeend,value,low,mid,2*ind+1);
        updateToRange(Rangestart,Rangeend,value,mid+1,high,2*ind+2);
        seg[ind] = seg[2*ind+1] + seg[2*ind+2];
}

        void build(long long ind,long long low,long long high){
            if(low == high) {
                seg[ind] = ip[low];
                return;
            }

            long long mid = (low + high) / 2;
            build(2*ind+1,low,mid);
            build(2*ind+2,mid+1,high);
            seg[ind] = seg[2*ind+1]+seg[2*ind+2];
        }

        long long queryToFindMin(long long ind,long long low,long long high,long long l,long long r){
            // no overlap
            // l r low high || low high l r
            if(r < low || high < l) return 0;
            
            // complete overlap
            // l low high r 
            else if(low == l && high == r) return seg[ind];

            // partial overlap 
            else{
                long long mid = (low + high) / 2;
                long long left = queryToFindMin(2*ind+1,low,mid,l,r);
                long long right = queryToFindMin(2*ind+2,mid+1,high,l,r);
                return (left+right);
            }
        }


void updatequery(long long ind,long long low,long long high,long long pos,long long data){
            if(low == high){
                seg[ind] = data;
                return;
            }

            long long mid = (low + high)/2;

            if(pos <= mid){
                updatequery(2*ind+1,low,mid,pos,data);
            }
            else{
                updatequery(2*ind+2,mid+1,high,pos,data);
            }

            seg[ind] = seg[2*ind+1]+seg[2*ind+2];
}


long long main() {
    long long n,q;
    cin>>n>>q;
    for(long long i = 0;i<n;i++) {
        long long x;
        cin>>x;
        ip[i] = x;
    }
    
        build(0,0,n-1);

    for(long long i = 0;i<q;i++){
        
        long long type;
        cin>>type;
        if(type == 1){
            long long a,b,c;
            cin>>a>>b>>c;
            a--;b--;
            // temp[a] += c;
            // temp[b + 1] -= c;
            updateRange(a, b, 0, 0, n-1, c);
        }
        else {

            long long k;
            cin>>k;
            k--;
            updateRange(k, k, 0, 0, n-1, 0);
            
            cout<<queryToFindMin(0,0,n-1,k,k)<<endl;
            // cout<<seg[2*k + 1]<<endl;
            
        }
    }

}
