// // Example
// // Input:

// // AAAACACBA
// // Output:

// // AACABACAA
// #include<bits/stdc++.h>
// using namespace std;

// long long main(){
//     string a;
//     cin>>a;

//     vector<long long> hash(26,0);
//     for(auto it : a){
//         hash[it - 'A']++;
        
//     }
//     long long odd = 0;
//     string ans = "";
    
//     for(long long i = 0;i<26;i++){
//         cout<<i<<" "<<hash[i]<<endl;
//         if(hash[i] &1) odd++;
//         if(odd >= 2) break;
//         string f(i+'A',hash[i]/2);
//         string b(i+'A',hash[i]/2);
//         ans += b;
//         ans = f + ans;
//         if(hash[i]&1) {
//             long long siz = ans.size()/2;
//             string pref = ans.substr(0,siz);
//             string suff = ans.substr(siz,siz);
//             char aa = (i + 'A');
//             ans = pref + aa + suff;
//         }
//     }

//     if(odd >= 2){ cout<<"NO SOLUTION"<<endl;return 0;}
//     else{
//         cout<<ans<<endl;
//     }
// }
#include <bits/stdc++.h>
using namespace std;

long long main(){
    string a;
    cin >> a;

    vector<long long> hash(26, 0);
    for (auto it : a) {
        hash[it - 'A']++;
    }
    
    long long odd_count = 0;
    char odd_char = 0;
    for (long long i = 0; i < 26; i++) {
        if (hash[i] % 2 == 1) {
            odd_count++;
            odd_char = i + 'A';
        }
    }

    if (odd_count > 1) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    string half = "";
    for (long long i = 0; i < 26; i++) {
        half += string(hash[i] / 2, i + 'A');
    }

    string ans = half;
    if (odd_char) {
        ans += odd_char;
    }
    reverse(half.begin(), half.end());
    ans += half;

    cout << ans << endl;
    return 0;
}
