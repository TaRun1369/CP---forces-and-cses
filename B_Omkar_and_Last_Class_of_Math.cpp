    #include <bits/stdc++.h>
    #include <string>
    #include <algorithm>
    using namespace std;


    long long main() {
        long long tc;
        cin>>tc;
        long long m = 1e9 + 7;
        while(tc--){
           long long n;
           cin>>n;
            long long flag = 0;
            for(long long i = 2;i<= sqrt(n);i++){
                if(n%i == 0){
                    long long a = n/i;
                    a = max(i,a);
                    long long b = n - a;
                    cout<<a<<" "<<b<<endl;
                    flag = 1;
                    break;
                }
            }
        if(flag == 0) cout<<1<<" "<<n-1<<endl;
        }
    
    
    }