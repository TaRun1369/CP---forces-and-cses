



#include <bits/stdc++.h>

using namespace std;



long long main() {
    long long t;
    cin >> t;

    while (t--) {
        string a,b;
        cin>>a>>b;

        char tc = a[0];
        a[0] = b[0];
        b[0] = tc;
        cout<<a<<" "<<b<<endl;
        
    }
    return 0;
}

