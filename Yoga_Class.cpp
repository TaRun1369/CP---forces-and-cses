
#include<bits/stdc++.h>
using namespace std;


long long main(){
    long long tc;
    cin>>tc;
    while(tc--){
        long long n,x,y;
        cin>>n>>x>>y;

        // cout<<" data = "<<x*2<<" - "<<y<<endl;
        if(x*2 >= y){
            cout<<n*x<<endl;
        }
        else {
            if(n%2 == 0){
                cout<<(n/2)*y<<endl;
            }
            else{
                cout<<((n/2)*y) + x<<endl;
            }
        }
        
    }
}
