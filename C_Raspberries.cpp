    #include <bits/stdc++.h>
    #include <string>
    #include <algorithm>
    using namespace std;

    long long main() {
        long long t;
        cin>>t;
        while(t--){
            long long n,k,odd = 0,even = 0,f = 0;
            cin>>n>>k;
            vector<long long> a(n);
            for(long long i=0;i<n;i++){
                cin>>a[i];
                if(a[i] % 2 != 0) {odd++;}
                else{ even++;if(a[i] % 4 == 0) f =1;}
            }
            long long mini = long long_MAX;
            if(k != 4){
            for(auto it : a){
                if(it % k != 0)
                mini = min(mini,k - (it%k));
                else mini = 0;
            }
            }
            else{
                if(n == 1){
                    cout<<k - a[0]%k<<endl;
                }
                else{
                    // cout<<" f - "<<f<<endl;
                    if(even >= 2 || f == 1) mini = 0;
                    else if(even == 1 && odd >= 1) mini = 1;
                    else{
                        for(auto it : a){
                            if(it % k != 0)
                            mini = min(mini,k - (it%k));
                            else mini = 0;
                        }

                        if(mini > 2) mini = 2;
                    }
                }
            }
            cout<<mini<<endl;
        }
        return 0;
    }
