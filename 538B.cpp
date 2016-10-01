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

int main()
{
	ll a,b,t,n;
	vector <ll> arr;
	scanf("%lld",&n);
	while(n)
	{
	    ll m=n,sum=0,p=1;
	    while(m)
	    {
	        if(m%10)
                {sum+=p;
                //cout << sum << endl;
                }
            m/=10;
            p*=10;
            //cout << m << endl;
	    }
	    arr.push_back(sum);
	    n-=sum;
	}
	sort(arr.begin(),arr.end());
    cout << arr.size() << endl;
    for(ll i=0;i<arr.size();i++)
        cout << arr[i] << " " ;
	return 0;
}
