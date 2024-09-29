#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

const ll maxi =1000001;



vector<ll>ar(maxi,-1);
vector<ll>prime;

void sieve(ll n)
{
    for(ll i=2; i*i<=n; i++)
    {
        if(ar[i]==-1)
        for(ll j=i*i; j<=n; j+=i)
        {
            ar[j]=1;
        }
    }

    for(ll i=2; i<=n; i++)
    {
        if(ar[i]==-1)
        {
            prime.push_back(i);
        }
    }
}


ll solve()
{
    ll n;
    cin>>n;

    
    ll res=1;

    for(ll i=0; i<prime.size() && prime[i]*prime[i]<=n; i++)
    {
        ll count=1;
        while(n%prime[i]==0)
        {
            count++;
            n/=prime[i];
        }

        res*=count;
    }

    // if the number is prime it has two divisors
    if(n>1)
    {
        res*=2;
    }

    return res-1;

    
}

int main()
{
    ll t;
    cin>>t;
    sieve(maxi);
    for(ll i=1; i<=t; i++)
   {
        cout<<"Case "<<i<<": "<<solve()<<endl;
   }
}

