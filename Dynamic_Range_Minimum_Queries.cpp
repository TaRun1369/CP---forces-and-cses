
#include<bits/stdc++.h>
using namespace std;
long long seg[800001];
long long ip[200001];

        void build(long long ind,long long low,long long high){
            if(low == high) {
                seg[ind] = ip[low];
                return;
            }

            long long mid = (low + high) / 2;
            build(2*ind+1,low,mid);
            build(2*ind+2,mid+1,high);
            seg[ind] = min(seg[2*ind+1],seg[2*ind+2]);
        }

        long long queryToFindMin(long long ind,long long low,long long high,long long l,long long r){
            // no overlap
            // l r low high || low high l r
            if(r < low || high < l) return long long_MAX;
            
            // complete overlap
            // l low high r 
            else if(low >= l && high <= r) return seg[ind];

            // partial overlap 
            else{
                long long mid = (low + high) / 2;
                long long left = queryToFindMin(2*ind+1,low,mid,l,r);
                long long right = queryToFindMin(2*ind+2,mid+1,high,l,r);
                return min(left,right);
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

            seg[ind] = min(seg[2*ind+1],seg[2*ind+2]);
}






long long main() {
    long long n,q;
    cin>>n>>q;
    for(long long i = 1;i<=n;i++) {
        long long x;
        cin>>x;
        ip[i] = x;
    }
    build(0,1,n);
    

    for(long long i = 0;i<q;i++){
        long long type;
        cin>>type;
        if(type == 1){
            long long a,b;
            cin>>a>>b;
            updatequery(0,1,n,a,b);
        }
        else{
        long long a,b;
        cin>>a>>b;
        
        cout<<queryToFindMin(0,1,n,a,b)<<"\n";
        }
    }

}
