    #include <bits/stdc++.h>
    #include <string>
    #include <algorithm>
    using namespace std;

    
    long long main() {
        long long t;
        cin>>t;
        while(t--){
            long long f = 0;
            string s;
            cin>>s;
            vector<char> v(5);
            for(long long i=0;i<5;i++){
                v[i] = s[i];
            }
            string t = s.substr(0,2);
            
            long long h = stoi(t);
            
            if(h>12){
                f = 1;
                h = h-12;
                
            }
            if(h == 12) f = 1;
            if(h == 0) h = 12;
            if(h < 10)cout<<"0"<<h;
            else cout<<h;
            cout<<":"<<v[3]<<v[4]<<" ";
            if(f){
                cout<<"PM"<<endl;
            }
            else{   
                cout<<"AM"<<endl;
            }       

        }
        return 0;
    }
