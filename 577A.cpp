#include <iostream>
#include <string>
#include <ctime>
#include <cstring>
#include <deque>
#include <stdio.h>
#include <string.h>
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

//ll dp[10000][10000];

int main()
{
    ll n,x,count=0;
    cin >> n >> x;
    for(ll i=1;i<=n;i++)
    {
        if(x%i==0 && x/i<=n)
            count++;
    }
    cout << count << endl;
	return 0;
}
