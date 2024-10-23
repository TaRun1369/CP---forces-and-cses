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
            string s;
            cin>>s;
            long long flag = 1;
            for(long long i = 0;i<26;i++){
                // cout<<"curr" <<i<<endl;
 
                auto it = s.find(i+'a');
 
                // cout<<it<<endl;
                if(it == -1){
                    // cout<<"gaya"<<i<<endl;
                    //cout<<it<<" ";
                    cout<<char(i+'a')<<endl;
                    flag = 0;
                    break;
                }
            }
 
            // cout<<flag<<endl;
            if(flag == 0) continue;
            for(long long i = 0;i<26;i++){
                string temp = "";
                temp.push_back(i+'a');
                for(long long j = 0;j<26;j++){
                    temp.push_back(j+'a');
                    if(s.find(temp)==string::npos){
                        cout<<temp<<endl;
                        flag = 0;
                        break;
                    }
                    temp.pop_back();
                }
                if(flag==0){
                    break;
                }
                
            }
 
            if(flag == 1){
                for(long long i = 0;i<26;i++){
                string temp = "a";
                temp.push_back(i+'a');
                for(long long j = 0;j<26;j++){
                    temp.push_back(j+'a');
                    if(s.find(temp)==string::npos){
                        cout<<temp<<endl;
                        flag = 0;
                        break;
                    }
                    temp.pop_back();
                }
                if(flag==0){
                    break;
                }
                
                }
            }
            // cout<<endl;
 
        }
    
    
    }