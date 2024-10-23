#include<iostream>
#include<vector>
using namespace std;
// // #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// // #define endl "\n"
// #define MAXN 100001
// #define INF 1e18+1

struct Node{
    Node* links[26];
    bool flag = false;
    bool containsKey(char ch){
        // a is 0 , b is 1 ....so on...
        // isliye ch - 'a'
        return (links[ch - 'a'] != NULL);
    }
    void put(char ch,Node* node){
        //ye dalne ka kaam karega
        links[ch -'a'] = node;
    }
    Node* get(char ch){
        return links[ch -'a'];
    }
    void setEnd(){
        flag = true;
        // sirf flahg ko true karne ke liye banaya hai ye
    }
    bool isEnd(){
        return flag;
        // sirf flag ki value ke liye banaya ye
    }
};

class Trie{
    private:
    Node* root;
    public:
    Trie(){
        root = new Node();
    }

    void insert(string word){
        Node* node = root;
        for(int i = 0;i<word.size();i++){
            // complexity = O(n) // n is length of word
            if(!node->containsKey(word[i])){
                node->put(word[i],new Node());// dalte sath uska reference node bana diya

            }
            // ye jo reference banaya uspe le jayega
            node = node->get(word[i]);
        }
        node->setEnd();
    }
    // O(length)
    bool search(string word){
        Node* node = root;
        for(int i = 0;i<word.size();i++){
            if(!node->containsKey(word[i])){
                return false;
            }
            node = node->get(word[i]);
        }
        return node->isEnd();
    }
    // O(length)
    bool startsWith(string word){
        Node* node = root;
        for(int i = 0;i<word.size();i++){
            if(!node->containsKey(word[i])){
                return false;
            }
            node = node->get(word[i]);
        }
        return true;
    }
};

int main()
{
	int n = 5;
	vector<int>type = {1, 1, 2, 3, 2};
	vector<string>value = {"hello", "help", "help", "hel", "hel"};
	Trie trie;
	for (int i = 0; i < n; i++) {
		if (type[i] == 1) {
			trie.insert(value[i]);
		}
		else if (type[i] == 2) {
			if (trie.search(value[i])) {
				cout << "true" << "\n";
			}
			else {
				cout << "false" << "\n";
			}
		}
		else {
			if (trie.startsWith(value[i])) {
				cout << "true" << "\n";
			}
			else {
				cout << "false" << "\n";
			}
		}
	}
}