#include<bits/stdc++.h>
using namespace std;

long long main(){
    long long n;
    cin>>n;
    long long ans = 0;
   while(n / 5 != 0){
    n = n/5;
    ans += n;
   }
    cout<<ans<<endl;
}