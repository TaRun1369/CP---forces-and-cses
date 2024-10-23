    #include <bits/stdc++.h>
    #include <string>
    #include <algorithm>
    using namespace std;

    
    long long main() {
        long long tc;
        cin>>tc;
        while(tc--){
            long long n,c,d;
            cin>>n>>c>>d;
            long long f = 0;
            map<long long,long long> mp;
            long long mini = 1e9;
            for(long long i=0;i<n*n;i++){
                long long x;
                cin>>x;
                mp[x]++;
                mini = min(x,mini);
            }
            vector<vector<long long>>v(n,vector<long long>(n,0));
            v[0][0] = mini;
            for(long long i = 0;i<n;i++){
                
                for(long long j = 1;j<n;j++){
                    v[i][j]  = v[i][j - 1] + d;
                }
                if(i < n-1)
                v[i+1][0] = v[i][0] + c;

            }

            for(auto it : v){
                for(auto is : it){
                    // cout<<is<<" ";
                    if(mp.find(is) == mp.end()){
                        
                         f = 1;
                         
                    break;
                    }
                    else {
                        mp[is]--;
                        if(mp[is] == 0) mp.erase(is);
                    }
                }


                // cout<<endl;
            }

            if(f == 1) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;



               

    }
}

        
