    #include <bits/stdc++.h>
    #include <string>
    #include <algorithm>
    using namespace std;

    
    long long main() {
        long long n;
        cin>>n;
        if(n <= 2) cout<<10<<endl;
        if(n == 3) cout<<9<<endl;
        if(n == 4) cout<<8<<endl;
        if(n == 5) cout<<7<<endl;
        if(n == 6) cout<<6<<endl;
        if(n == 7) cout<<5<<endl;
        if(n == 8) cout<<4<<endl;
        if(n >= 9) cout<<0<<endl;
        return 0;
    }
