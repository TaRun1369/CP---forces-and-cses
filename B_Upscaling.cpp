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
            char flag = '#';
            vector<vector<char>> v(2*n,vector<char>(2*n));
            for(long long i = 0;i<2*n;i+=2){
                for(long long j = 0;j<2*n;j+=2){
                    v[i][j] =flag;
                    v[i+1][j] = flag;
                    v[i][j+1] = flag;
                    v[i+1][j+1] = flag;
                    if(flag == '#') flag = '.';
                    else flag = '#';
                }
                if(i % 4 == 0) flag = '.';
                else flag = '#';
                
            }

            for(long long i = 0;i<2*n;i++){
                for(long long j = 0;j<2*n;j++){
                    cout<<v[i][j];
                }
                cout<<endl; 
                }
        }
        return 0;
    }
