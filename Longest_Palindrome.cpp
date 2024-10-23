#include<bits/stdc++.h>
using namespace std;
// code for longest palindromic substring
struct manacher{
    vector<int>p; // to store preprocessed string
    void run_manacher(string &s){
        // cout<<s<<endl;
        int n = s.size();
        p.assign(n,1);
        int l = 1, r = 1;
        for(int i = 1;i<n;i++){
            p[i] = max(0,min(r-i,p[l+r-i]));
            while(i + p[i] < n && i-p[i] >= 0 && s[i + p[i]] == s[i - p[i]]){
                p[i]++;
            }
            if(i+p[i] > r){
                l = i - p[i];
                r = i + p[i];
            }
        }
        // for(auto v : p){
        //     cout<<v<<" ";
        // }

        int maxi = max_element(p.begin(),p.end()) - p.begin();
        int maxval = p[maxi];
        for(int i = maxi - maxval +1;i <= maxi + maxval - 1;i++){
            if(s[i] != '#') cout<<s[i];
        }
        cout<<endl;
    }
    void build(string s){
        string t;
        for(auto it: s){
            t += string("#") + it;
        }
        t += string("#");
        run_manacher(t);
    }
}m;

void solve(){
    string s;
    cin>>s;
    m.build(s);

}
int main(){
    solve();
}