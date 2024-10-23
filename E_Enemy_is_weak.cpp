#include <bits/stdc++.h>
using namespace std;
// #define N (long long)(1e6)

// const long long N = 1000006;



class info{
    
public:
    long long open,close,full;
    info(long long o,long long c ,long long f ){
        open = o;
        close = c;
        full = f;
    }

    info(){
        open = 0;
        close = 0;
        full = 0;
    }


};

info merge(info left,info right){
info ans =  info(0,0,0);
long long mini = min(left.open,right.close);
ans.full = left.full + right.full + mini;
ans.open = left.open + right.open - mini;
ans.close = left.close + right.close - mini;
return ans;
}
void build(long long ind,long long low,long long high,string s,vector<info> &seg){
    if(low == high){
        seg[ind].open = s[low] == '(';
        seg[ind].close = s[low] == ')';
        seg[ind].full = 0;
        return;
    }
    long long mid = low  + (high - low)/2;
    build(2*ind+1,low,mid,s,seg);
    build(2*ind+2,mid+1,high,s,seg);
    seg[ind ] = merge(seg[2*ind+1],seg[2*ind+2]);
}

info query(long long ind,long long low,long long high,long long l,long long r,vector<info> &seg){
    // no overlap 
    // l r low high or low high l r
    if(r < low || high < l){
        return info();
    }


    // complete overlap 
    //  l low high r

    if(low >= l  && high <= r){
        return seg[ind];
    }



    // partial overlap
    // left mein aadha right mein aadha
    long long mid = low + (high - low)/2;
    info left = query(2*ind+1,low,mid,l,r,seg); 
    info right = query(2*ind+2 , mid+1,high,l,r,seg);
    return merge(left,right);

}
void solve4(){
    string s;
    cin>>s;
    long long n = s.size();
    vector<info> seg(4*n+1);
    long long qn;
    cin>>qn;
    build(0,0,n-1,s,seg);
    
    while(qn--){
        long long l,r;
        cin>>l>>r;
        l--;
        r--;
        info ans = query(0,0,n-1,l,r,seg);
        cout<<ans.full*2<<endl;
    }
}
long long main() {
    solve4();
    }