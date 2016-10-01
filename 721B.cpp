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
    ll updig=0,downdig=0,count=0,flag=0;
    scanf("%lld %lld",&n,&k);
    for(ll i=0;i<n;i++)
    {
        string s;
        cin >> s;
//        reverse(s.begin(),s.end());
        pass[i]=s;
    }
    cin >> password;

    for(ll i=0;i<n;i++)
    {
        if(pass[i].size()<password.size() && password!=pass[i])
            downdig++;
        if(pass[i].size()>password.size())
            updig++;
        else if(password==pass[i])
            count++;
    }
    best= downdig+1+(downdig/k)*5;
    if(n-1 >=k)
        worst=((n-1)/k)*k+((n-1-updig)/k)*5+((n-1)%k)+1-updig;
    else
        worst=n-updig;
//    worst=(n-1-updig)
    printf("%lld %lld\n",best,worst);
    return 0;
}
