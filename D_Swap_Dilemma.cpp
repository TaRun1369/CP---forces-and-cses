#include<bits/stdc++.h>
using namespace std;

long long main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> a(n),b(n);
        unordered_map<long long,long long> ma,mb;
        for(long long i = 0;i<n;i++){cin>>a[i];
        ma[a[i]] = i;
        }
        for(long long i = 0;i<n;i++){ cin>>b[i];
        mb[b[i]] = i;
        }
        if(a == b) {
            cout<<"YES"<<endl;
            continue;
        }
        long long f = 0,c = 0;
        for(long long i = 0;i<n;i++){

            if(a[i] != b[i]){
                if(ma.find(b[i]) == ma.end() || mb.find(a[i]) == mb.end()){
                    f = 1;
                }
                else{
                    
                  
                    if(ma[b[i]] == mb[a[i]])
                    c++;
                }

            }
        }

        if(f == 1) cout<<"NO"<<endl;
        else{
            if(c %4 == 0 && c != 0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }
   

}