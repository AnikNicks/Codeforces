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
   string s;
   cin >> n >> s;
   ll count=0,sum=0;
   map <char,ll> letters;
   for(ll i=0;i<s.size();i++)
   {
       if(letters[s[i]]==1 && count < n)
       {
           count++;

       }
       else
        letters[s[i]]+=1;

   }
   if(n > 26 || count > 25)
    cout << "-1" << endl;
   else
   cout << count << endl;
   return 0;
}
