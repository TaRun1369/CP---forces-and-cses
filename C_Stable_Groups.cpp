    #include <bits/stdc++.h>
    #include <string>
    #include <algorithm>
    using namespace std;
 
    
    long long main() {
        // long long tc;
        // cin>>tc;
        // while(tc--){
           long long IniNofStud,additional,maxDiff,ans = 0;
           cin>>IniNofStud>>additional>>maxDiff;
           vector<long long> v(IniNofStud);
           vector<long long> store;
           for(long long i=0;i<IniNofStud;i++){
               cin>>v[i];
           }
           if(IniNofStud == 1){
               cout<<1<<endl;
               return 0;
           }
           sort(v.begin(),v.end());
           for(long long i = 0;i<IniNofStud;i++){
            if(v[i+1] - v[i] > maxDiff){
                store.push_back((v[i+1] - v[i])/maxDiff );
                ans++;
            }
           }

           sort(store.begin(),store.end());
            long long j = 0;
            while(j < store.size() && additional - store[j] > 0){
                additional -= store[j];
                ans--;
                j++;
            }

            cout<<ans<<endl;

        // }
    
    
    }