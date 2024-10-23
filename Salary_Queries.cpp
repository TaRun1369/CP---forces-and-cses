#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
long long input[200001];
template<class T>
using OrdSet = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// find_by_order  - index pe element
// order_of_key - No. of elems smaller than element mentioned in bracket

//                       greater<long long> - descending order
long long main() {
    OrdSet<pair<long long, long long>> A; // declaration

    long long n,q;
    cin >> n>>q;
    for (long long i = 0; i < n; i++) {
        long long x;
        cin >> x;
        input[i] = x;
        pair<long long,long long> p = make_pair(x,i); // {value, index}
        A.insert(p); // Inserting {value, index}
    }
    for (long long i = 0; i < q; i++) {
        // long long x;
        // cin >> x;
        // x--;
        // cout << A.find_by_order(x)->second << " "; // Accessing the first element of the pair
        // A.erase(*A.find_by_order(x)); // Erasing the element by its value

        char ch;
        cin>>ch;

        if(ch == '!'){
            long long k,x;
            cin>>k>>x;
            k--;
            long long oldie = input[k];
            pair<long long,long long> p1 = make_pair(oldie,k),p2 = make_pair(x,k);
            // long long val = A.find_by_order(x)->second << " "; // Accessing the first element of the pair
            A.erase(p1);
              // Erasing the element by its value
            A.insert(p2);
            input[k] = x;
        }
        else{
            long long a,b;
            cin>>a>>b;
            pair<long long,long long> p1 = make_pair(a,0),p2 = make_pair(b,long long_MAX);
            cout<<A.order_of_key(p2) - A.order_of_key(p1)<<endl;
        }
    }
}
