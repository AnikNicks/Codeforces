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
   ll n;
   string s,s1,s2;
   cin >> n;
   ll count=0,sum=0,a=0,b=0;
   map <string,ll> teams;
   for(ll i=0;i<n;i++)
   {
        cin >> s;
        if(s1.size()==0)
        {
            s1=s;
            a++;
        }
        else if(s2.size()==0 && s1!=s)
        {
            s2=s;
            b++;
        }
        else if(s1==s)
        {
            a++;
        }
        else if(s2==s)
        {
            b++;
        }
        //cout << a << ends << b << endl;
   }
   //cout << s1 << endl;
   //cout << s2 << endl;
   if(a>b)
    cout << s1 << endl;
   else
    cout << s2 << endl;
   return 0;
}
