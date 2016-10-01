#include <iostream>
#include <string>
#include <streambuf>
#include <fstream>
#include <string.h>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <map>
#include <set>
#include <stdlib.h>
#include <cstdio>
#include <vector>
#include <queue>
#include <utility>

using namespace std;
#define pi acos(-1.0)
#define N 1000000
#define ll long long
using namespace std;

char arr[105];
vector <ll> order;
map<ll,string> pass;
string password;

int main()
{
    ll x,y,a,b,n,e,k,best,worst;
    ll grp=0,count=0,flag=0;
    scanf("%lld %lld",&n,&k);
    for(ll i=0;i<n;i++)
    {
        string s;
        cin >> s;
        reverse(s.begin(),s.end());
        pass[i]=s;
    }
    cin >> password;

    for(ll i=0;i<n;i++)
    {
        if(password==pass[i] && flag==0)
        {
            flag=1;
            best=i;
            count++;
        }
    }
    if(n-count >=k)
        worst=((n-count)/k)+((n-count)%k)+1;
    else
        worst=((n-count)+1);
    printf("%lld %lld\n",best,worst);
    return 0;
}
