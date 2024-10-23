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
    vector<long long> v;
    for(long long i = 0;i<a;i++){
        long long o;
        cin>>o;
        v.push_back(o);
    }
    long long sum = accumulate(v.begin(),v.end(),0)/a;
    long long ext = 0,flag = 1;
    for(auto it : v){
        ext += (it - sum);
        if(ext < 0) {
        flag = 0;
        }
    }
    if(flag == 0 || ext != 0) {
        cout<<"NO"<<endl;
        continue;
    }   
    cout<<"YES"<<endl;
    continue;


   }

}


