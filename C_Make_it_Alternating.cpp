    #include <bits/stdc++.h>
    #include <string>
    #include <algorithm>
    using namespace std;


    long long main() {
        long long tc;
        cin>>tc;
        long long m = 1e9 + 7;
        while(tc--){
            string s;
            cin>>s;
            long long n = s.size();
            long long ans = 0;
            long long i = 0;long long count = 0;
            while(i < n - 1){
                // cout<<"i - "<<i<<endl;
                long long temp = 0;

                while(i < n - 1 && s[i] == s[i + 1]){
                    temp++;
                    count++;
                    i++;
                }
                // if(temp == 0)
                i++;
                // cout<<" t - ";
                // cout<<temp<<endl;
                if(temp == 1) ans *= 2;
                else if(temp > 1)ans *= (2)*(temp + 1);
            }
            ans%=(m);
            if(ans != 0)
            cout<<count<<" "<<ans<<endl;
            else 
           cout<<count<<" "<<ans + 1<<endl;
        }
    
    
    }