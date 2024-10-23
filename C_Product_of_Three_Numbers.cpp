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
           long long f = 2;
           vector<long long> ans;
            for(long long i = 2;i<10001;i++){
                if(n%i == 0){
                    n/=i;
                    f = 1;
                    ans.push_back(i);
                }
                else continue;
                for(long long j = i+1;j<10001;j++){
                    if(n%j == 0 && j < n/j ){
                        ans.push_back(j);
                        ans.push_back(n/j);
                        f = 0;
                        break;
                    }
                    else continue;
                }
                if(f == 0) break;

            }
            if(f != 0) cout<<"NO"<<endl;
            else{
                cout<<"YES"<<endl;
                for(long long i = 0;i<ans.size();i++){
                    cout<<ans[i]<<" ";
                }
                cout<<endl;
            }
        }
        return 0;
    }
