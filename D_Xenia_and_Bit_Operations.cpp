#include<bits/stdc++.h>
using namespace std;

class segTree{
       vector<long long> seg;
    public: 
 
    segTree(long long n){
        seg.resize(4*n);
    }


        void build(long long ind,long long low,long long high,vector<long long> &arr,long long flag){
            if(low == high) {
                seg[ind] = arr[low];
                return;
            }

            long long mid = (low + high) / 2;
            build(2*ind+1,low,mid,arr,flag ^ 1) ;
            build(2*ind+2,mid+1,high,arr,flag ^ 1);

            if(flag & 1)
            seg[ind] = (seg[2*ind+1] | seg[2*ind+2]);
            else seg[ind] = (seg[2*ind+1] ^ seg[2*ind+2]);

        }

    

        void update(long long ind,long long low,long long high,long long pos,long long data,long long flag){
            if(low == high){
                seg[ind] = data;
                return;
            }

            long long mid = (low + high)/2;

            if(pos <= mid){
                update(2*ind+1,low,mid,pos,data,flag ^ 1);
            }
            else{
                update(2*ind+2,mid+1,high,pos,data,flag ^ 1);
            }
            if(flag & 1)
            seg[ind] = (seg[2*ind+1] | seg[2*ind+2]);
            else seg[ind] = (seg[2*ind+1] ^ seg[2*ind+2]);
        }

        long long v(){
            return seg[0];
        }

        void prlong long(){
            for(long long i = 0;i<seg.size();i++){
                cout<<seg[i]<<" ";
            }
            cout<<endl;
        }

};

long long main(){
    long long n,m;
    cin>>n>>m;
    long long ele = pow(2,n);
    vector<long long> arr(ele);
    for(long long i = 0;i<ele;i++){
       cin>>arr[i]; 
    }
    long long r;
    if(n % 2 == 0) r = 0;
    else r = 1;
    segTree sg(ele);
    sg.build(0,0,ele-1,arr,r);

// sg.prlong long();
    while(m--){
        long long q,b;
        cin>>q>>b;

        sg.update(0,0,ele-1,q-1,b,r);
            
        cout<<sg.v()<<endl;
    }
}

