#include<bits/stdc++.h>
using namespace std;

long long main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        if(k == 0){
            cout<<0<<endl;
            continue;
        }
        long long curr = n;
        long long ans = 1;
        long long val1= n-1;
        long long val2 = n-1;
        long long f = 0;
        while(curr < k ){
            if(val1 <= 0 && val2 <= 0) break;
            if(f == 0){
            curr += val1;
            val1--;
            f=1;
            }
            else{
                curr += val2;
                val2--;
                f= 0;
            }
            ans++;
            // cout<<"curr - "<<curr<<endl;
        }

        cout<<min(ans,(1 + (2*(n-1))))<<endl;
    }
}