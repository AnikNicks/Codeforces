#include <iostream>
#include <string>
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

int flag=0;

int main()
{
   ll ans=0,result=0,x,cur,n,count=0;
   char ch;
   scanf("%lld %lld",&n,&result);
   //for(ll i=0;i<n;i++)
   ll num;
    for(ll j=0;j<n;j++)
    {
        cin >> ch >> num;
                if(ch == '+')
            {
                result+=num;
            }
        if(ch == '-')
        {
            if(result>=num)
            {
                result-=num;
            }
            else
            {
                count++;
            }
        }
    }

   printf("%lld %lld\n",result,count);
   return 0;
}
