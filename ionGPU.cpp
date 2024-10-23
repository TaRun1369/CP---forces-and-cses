#include<bits/stdc++.h>
using namespace std;
class GPU{
    public: 
        unordered_map<long long,long long> mp;
        set<long long> s;
        long long i;
    GPU(){
        i = 1;
    }
    void add(long long Pid){
        if(mp.find(Pid) != mp.end()) return;
        if(s.size() == 0){
            mp[Pid] = i;
            i++; 
        }
        else{
            long long gid = *s.begin();
            s.erase(*s.begin());
            mp[Pid] = gid;
        }
    }
    void remove(long long Pid){
        if(mp.find(Pid) != mp.end()){
            long long gid = mp[Pid];
            s.insert(gid);
            mp.erase(Pid);
        }
    }
    long long smallest(){
        if(s.size() == 0){
            return i;
        }
        else{
            return *s.begin();
        }
    }
};
long long main(){
    GPU g;
    g.add(5);
    g.add(2);
    g.add(3);
    g.add(4);
    cout<<g.smallest()<<endl;
    g.remove(2);
    cout<<g.smallest()<<endl;
    g.remove(4);
    cout<<g.smallest()<<endl;
    g.add(8);
    cout<<g.smallest()<<endl;
}