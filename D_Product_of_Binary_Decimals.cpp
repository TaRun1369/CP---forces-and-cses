    #include <bits/stdc++.h>
    #include <string>
    #include <algorithm>
    using namespace std;

    bool func(long long n, long long given){
         while(n % given == 0){
                n /= given;
            }

            string s = to_string(n);
            // cout<<"s - "<<s<<endl;
            long long f = 0;
            for(long long i = 0;i<s.size();i++){
                if(s[i] != '0' && s[i] != '1'){
                    // cout<<s[i]<<endl;
                    f = 1;
                }
            }
            if(f == 0) return true;
            return false;
    }
    long long main() {
        long long t;
        cin>>t;
        while(t--){
            long long n,f =0;
            cin>>n;
            string s = to_string(n);
            // cout<<"s - "<<s<<endl;

            for(long long i = 0;i<s.size();i++){
                if(s[i] != '0' && s[i] != '1'){
                    f = 1;
                }
            }
            // cout<<"f - " <<f<<endl;
            if(f == 0) {
                cout<<"YES"<<endl;
                continue;
            }
            // while(n % 10 == 0){
            //     n /= 10;
            // }
            // while(n % 11 == 0){
            //     // cout<<"yaha"<<endl;
            //     n /= 11;
            // }   
            // while(n % 100 == 0){
            //     n /= 100;
            // }
            // while(n % 101 == 0){
            //     n /= 100;
            // }
            // while(n % 110 == 0){
            //     n /= 110;
            // }while(n % 111 == 0){
            //     n /= 111;
            // }
            // while(n % 1000 == 0){
            //     n /= 1000;
            // }
            // while(n % 1001 == 0){
            //     n /= 1001;
            // }
            // while(n % 1010 == 0){
            //     n /= 1010;
            // }
            // while(n % 1011== 0){
            //     n /= 1011;
            // }
            // while(n % 1100 == 0){
            //     n /= 1100;
            // }
            // while(n % 1101 == 0){
            //     n /= 1101;
            // }
            // while(n % 1110 == 0){
            //     n /= 1110;
            // }
            // while(n % 1111 == 0){
            //     n /= 1111;
            // }
            bool ans = func(n,10) || func(n,11) || func(n,100) || func(n,101) || func(n,110) || func(n,111) || func(n,1000) || func(n,1001) || func(n,1010) || func(n,1011) || func(n,1100) || func(n,1101) ||func(n,1110) || func(n,1111); 

                      // cout<<"f wapas - " <<f<<endl;

            if(ans == true) {
                cout<<"YES"<<endl;
                
            }
            else cout<<"NO"<<endl;
            //cout<<n<<endl;



        }
        return 0;
    }
