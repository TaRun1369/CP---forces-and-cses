#include<bits/stdc++.h>
using namespace std;
#define long long long long
class Node{
    public :
    Node* links[26];
    bool isend = false;
    bool iscontainkey(char ch){
        return links[ch - 'a'] !=NULL;
    }


};

long long mod = 1e9 + 7;
// class Trie{
    Node* root;

    // public:
    // Trie(){
    //     root = new Node();
    // }

    void insert(string word){
        Node* node = root;
        for(long long i = 0;i<word.size();i++){
            char ch = word[i];
            if(node->iscontainkey(ch) == false){
                Node* nN = new Node();
                node->links[ch-'a'] = nN;
            }
            node = node->links[ch - 'a'];
        }
        node->isend = true;
    }

    bool search(string word){
        Node* node = root;
        for(auto it : word){
            if(!node->iscontainkey(it)){
                return false;
            }
            node = node->links[it - 'a'];
        }
        if(node->isend == true){
            return true;
        }
        return false;
    }
// };
long long32_t main(){
string s;
cin>>s;
root = new Node();
long long a;
cin>>a;
for(long long i = 0;i<a;i++){
    string x;
    cin>>x;
    insert(x);
}

vector<long long> dp(s.size() + 1);
long long n = s.size();
dp[s.size()] = 1;
for(long long i = n - 1;i>=0;i--){
    Node* node = root;
    for(long long j = i;j<n;j++){
        long long ind = s[j] - 'a';
        if(node->links[ind] == NULL) break;

        node = node->links[ind];
        if(node->isend){
            dp[i] = dp[i]%mod + dp[j+1]%mod;
            dp[i] =dp[i]%mod;
        }
    }
}

cout<<dp[0]<<endl;



}