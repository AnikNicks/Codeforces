#include <iostream>
#include <string>
#include <ctime>
#include <cstring>
#include <deque>
#include <cstdio>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
#define ll long long
#define fname "a"
#define F first
#define S second
#define mod 1000000
#define INF 1000000000
#define mp make_pair
#define pb push_back

using namespace std;
ll n,ans;
ll rank[105];

int main()
{
    ll a,b,test,sendCount=0,m,sum=0,user=0;
    string str;
    char s[30];
    scanf("%lld",&n);
    for(ll i=1;i<n;i++)
    {
        scanf("%lld",&rank[i]);
        //cout << i << "--> " << rank[i] << endl;
    }
    scanf("%lld %lld",&a,&b);
    for(ll i=a;i<b;i++)
    {
        //cout << i << "--> " << rank[i] << endl;
        sum+=rank[i];
        //cout << sum;
    }
    printf("%lld\n",sum);
    return 0;
}
