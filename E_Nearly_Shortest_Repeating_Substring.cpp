    #include <bits/stdc++.h>
    #include <string>
    #include <algorithm>
    using namespace std;

    
    long long main() {
        long long t;
        cin>>t;
        while(t--){
            long long n,ans;
            cin>>n;
            ans = n;
            string s;
            cin>>s;
            long long lens = n/2;
            for(long long i = 1;i<= n/2;i++){
                long long f = 0;
                string sub= s.substr(0,i);
                cout<<sub<<endl;
                long long j = i;
                while(j < n){
                    if(s.substr(j,i) == sub){
                        j += i;
                    }
                    else {
                        if(f == 0){
                        long long tem = 0;
                        string temp = s.substr(j,i);
                        long long c = 0;
                        while(tem < temp.size()){
                            if(temp[tem] != sub[tem]) c++;
                        }
                        if(c == 1){ j += i;f = 1;}
                        else break;
                        }
                        else break;
                    }
                
                }
                if( j == n) ans = i;
                
            }
            
        }
        return 0;
    }
