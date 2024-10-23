
    #include <bits/stdc++.h>
    #include <string>
    #include <algorithm>
    using namespace std;
 
    
    long long main() {
        long long tc;
        cin>>tc;
        while(tc--){
          long long n;
          cin>>n;
          vector<long long> v1(n),v2(n),v3(n);
          for(long long i=0;i<n;i++){
              cin>>v1[i];
          }
          for(long long i=0;i<n;i++){
              cin>>v2[i];
          }
          for(long long i=0;i<n;i++){
              cin>>v3[i];
          }
          sort(v1.rbegin(),v1.rend());
          sort(v2.rbegin(),v2.rend());
          sort(v3.rbegin(),v3.rend());
        
            long long i = 0,j = 0,k = 0;
           long long a = 0,b = 0,c = 0;
           while(i < n && j < n && k < n){
            if(a != 0 && b != 0 && c != 0) break;
                if(a == 0 && v1[i] > v2[j] && v1[i] > v3[k]){
                    a = v[i];
                }
                else if()
           } 
        }

    
    
    }