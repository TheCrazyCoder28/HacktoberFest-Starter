#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int gcd(int a,int b)
{
    if(a==0)
    return b;
    else
    return gcd(b%a,a);
}



int32_t main()
{
    IOS
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    //  freopen("output.txt","w",stdout);
    // #endif 
    
     cout<<gcd(56,8)<<endl;
    
    return 0;
}

