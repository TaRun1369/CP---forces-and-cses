#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;



long long main() {
    long long t;
    cin >> t;
    while(t--){
        string a,b;
        cin>>a>>b;
        long long n=a.size();
        long long m=b.size();
        long long res=m;
        for(long long i =0;i<m;i++){
            long long cur = i,i2 = i;
            for(long long i1 = 0;i1 < n;i1++){
                if(a[i1] == b[i2]){
                    i2++;
                    if(i2 == m) break;
                }
            }
            res = min(res,cur + m - i2);
        }
        cout<<res+n<<endl;
        
    }

    return 0;
}
