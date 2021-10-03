#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{

    ll tot=0;
    ll div=0;
    ll a=1000, b=1000, c=1000;
    for(ll x=1; x<=a; x++)
    {
        for(ll y=1; y<=b; y++)
        {
            for(int z=1; z<=c; z++)
            {
                ll n=x*x + y*y + z*z;
                if (n%7==0)
                {
                    div++;
                }
                tot++;
                if(tot%1000==0)
                cout<<"Prob : "<<(double)div/tot<<endl;
            }
        }
    }
    cout<<"Final Prob : "<<(double)div/tot<<endl;


}