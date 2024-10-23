#include<bits/stdc++.h>
using namespace std;
// code for longest palindromic substring
struct manacher{
    vector<int>p; // to store preprocessed string
    bool check(int l,int r){
        l--;
        r--;
        int mid = (l+r)/2;
        if(p[mid] == )
        return true;
    }
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

        // int maxi = max_element(p.begin(),p.end()) - p.begin();
        // int maxval = p[maxi];
        // for(int i = maxi - maxval +1;i <= maxi + maxval - 1;i++){
        //     if(s[i] != '#') cout<<s[i];
        // }
        // cout<<endl;
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
    int n,ma;
    cin>>n>>ma;
    string s;
    cin>>s;
    m.build(s);

    for(int i = 0;i<ma;i++){
        int type;
        cin>>type;
        if(type == 1){
            int a;cin>>a;
            char c;cin>>c;
            s[a - 1] = c;
            m.build(s); 
        }
        else{
            int a,b;
            cin>>a>>b;
            
            if(m.check() == true) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
int main(){
    

    solve();
}