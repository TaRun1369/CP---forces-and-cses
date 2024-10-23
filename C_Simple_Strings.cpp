    #include <bits/stdc++.h>
    #include <string>
    #include <algorithm>
    using namespace std;

    long long main() {
    
        // your code goes here
        string s;
        cin>>s;
        long long n = s.size();
        for(long long i = 0;i<n-1;i++){
            if(s[i] == s[i+1]){
                char ch = '#';
                if(i+2 < n){
                    ch = s[i+2];
                }

                for(long long j = 0 ;j<26;j++){
                    if((ch != 'a'+j) && (('a' + j) != s[i])){
                        s[i+1] = 'a'+j;
                        break;
                    }
                }

            }
        }

        cout<<s<<endl;
        return 0;   
    }
