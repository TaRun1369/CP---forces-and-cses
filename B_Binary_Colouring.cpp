    #include <bits/stdc++.h>
    #include <string>
    #include <algorithm>
    using namespace std;


    long long main() {
        long long tc;
        cin>>tc;
        long long m = 1e9 + 7;
        while(tc--){
           long long x;
           cin>>x;
           long long n = log2(x) + 2;
           vector<long long> ans(n,0);
           long long i = 0, j = n - 1;
           while(x != 0){
            if(x <= pow(2,j)){
                ans[j] = 1;
                x -= pow(2,j);
                j -= 2;
                
            }
            else {
                if(x % 2 == 0 && i == 0) i++;  
                ans[i] = -1;
                 x -= pow(2,i);
                i += 2;
               
            }
           
           }
            cout<<n<<endl;
           for(auto it : ans) cout<<it<<" ";
           cout<<endl;

        }
    
    
    }