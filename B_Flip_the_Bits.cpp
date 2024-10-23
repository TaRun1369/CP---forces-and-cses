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
          string s1,s2;
          cin>>s1>>s2;
          long long flag = 0;
          long long one = 0,zero = 0;
          for(long long i = 0;i<n;i++){
             long long po = one,pz = zero;
            if(s1[i] == '0') zero++;
            else one++;
            // cout<<i<<" - i        "<< "count - " <<one<<zero<<endl;
           
            if(s1[i] != s2[i]){
                // cout<<"i - "<<i<<endl;
                i++;
                while(i < n && s1[i] != s2[i]){
                    if(s1[i] == '0') zero++;
                    else one++;
                    i++;
                }
                i--;
                // cout<<"count - " <<one<<zero<<endl;
                if(one != zero || po != pz){ flag = 1;break;}
            }


          }
          if(flag == 0) cout<<"YES"<<endl;
          else cout<<"NO"<<endl;
        }
    
    
    }