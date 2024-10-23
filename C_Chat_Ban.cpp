    #include <bits/stdc++.h>
    #include <string>
    #include <algorithm>
    using namespace std;

    long long main() {
        long long t;
        cin>>t;
        while(t--){
            long long n;
            cin>>n;
            for(long long i  = n/2 ; i> 0 ;i--){
                long long s = n - i;
                if(s%i == 0){
                    cout<<i<<" "<<s<<endl;
                    break;
                }
            }
            

        }
    }


