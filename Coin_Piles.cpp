#include<bits/stdc++.h>
using namespace std;

long long main(){
    long long n;
    cin>>n;

    while(n--){
        long long a,b;
        cin>>a>>b;
        if(a == 0 && b == 0) {
            cout<<"YES"<<endl;
            continue;
        }
        long long sum = a+b;
        if(sum % 3 == 0 && abs(a-b) <= min(a,b)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}