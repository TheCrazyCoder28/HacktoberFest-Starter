#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

bool isprime(int n) 
{ 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) //6n+1 and 6n-1
        if ((n%i==0)|| n%(i+2)==0) 
           return false; 
  
    return true; 
} 



int32_t main()
{
    IOS
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    //  freopen("output.txt","w",stdout);
    // #endif 
    
     cout<<isprime(56)<<endl;
    
    return 0;
}

