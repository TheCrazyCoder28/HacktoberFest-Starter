#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

vector<int> seiveoferanthosis(int n) 
{ 
    vi prime(n+1,1);
    vi allprimes;
    
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == 1) 
        { 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = 0; 
        } 
    }
     int i;
    f(i,2,prime.si)  
    {
        if(prime[i])
        allprimes.pb(i);
    }
    return allprimes;
    //return prime;
} 




int32_t main()
{
    IOS
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    //  freopen("output.txt","w",stdout);
    // #endif 
    
     cout<<seiveoferanthosis(56,8)<<endl;
    
    return 0;
}

