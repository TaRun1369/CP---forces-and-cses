// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
 
 
 
 
// long long main() {
    

//    long long n;
//    cin>>n;
//    while(n--){
//     long long a;
//     cin>>a;
    
//     long long div = a/26;
//     long long rem = a%26;
//     if(div == 0){
//         cout<<'a'<<'a'<<char( (a-2) + 96)<<endl;

//     }
//     else if(div == 1){
//         cout<<'a'<<char(96+rem-1)<<'z'<<endl;
//     }
//     else if(div == 2){
//         cout<<char(96+ rem)<<'z'<<'z'<<endl;
//     }
//     else{
//         cout<<'z'<<'z'<<'z'<<endl;
//     }
//    }

// }


#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
long long main() {
    

   long long n;
   cin>>n;
   while(n--){
    long long a;
    cin>>a;
    if(a==26){
        cout<<"aax"<<endl;
        continue;
    }
    if(a == 52){
        cout<<"ayz"<<endl;
        continue;
    }
    long long div = a/26;
    long long rem = a%26;
    string ans = "";
    if(div == 0){
        // ans = "a"+"a"+to_string( (a-2) + 96);
            ans += "aa";
            ans.push_back(char( (a-2) + 96));
    }
    else if(div == 1){
        // ans = 'a'+char(96+rem-1)+'z';
        ans  = "a";
        ans += char(96+rem-1);
        ans += 'z';
    }
    else if(div == 2){
        // ans = char(96+ rem)+'z'+'z';
        ans += char(96+rem);
        ans.push_back('z');
        ans.push_back('z');
    }
    else{
        // ans = 'z'+'z'+'z';
        ans = "zzz";
    }
    sort(ans.begin(),ans.end());
    cout<<ans<<endl;
   }

}


