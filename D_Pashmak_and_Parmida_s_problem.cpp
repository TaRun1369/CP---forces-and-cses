#include<bits/stdc++.h>
using namespace std;

class segTree{
    vector<long long> seg;
    public: 
    segTree(long long n){
        seg.resize(4*n);
    }


        void build(long long ind,long long low,long long high,vector<long long> &arr){
            if(low == high) {
                seg[ind] = ;
                return;
            }

            long long mid = (low + high) / 2;
            build(2*ind+1,low,mid,arr);
            build(2*ind+2,mid+1,high,arr);
            seg[ind] =  (seg[2*ind+1] + seg[2*ind+2]);
        }

        // long long query(long long ind,long long low,long long high,long long l,long long r){
        //     // no overlap
        //     // l r low high || low high l r
        //     if(r < low || high < l) return long long_MAX;
            
        //     // complete overlap
        //     // l low high r 
        //     else if(low >= l && high <= r) return seg[ind];

        //     // partial overlap 
        //     else{
        //         long long mid = (low + high) / 2;
        //         long long left = queryToFindMin(2*ind+1,low,mid,l,r);
        //         long long right = queryToFindMin(2*ind+2,mid+1,high,l,r);
        //         return min(left,right);
        //     }
        // }

        

        long long v(){
            return seg[0];
        }

};

long long main(){
    long long n;
    cin>>n;
    vector<long long> arr(n);
    for(long long i = 0;i<n;i++) cin>>arr[i];

    segTree sg(n);
    sg.build(0,0,n-1,arr);
    sg
}