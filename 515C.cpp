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
ll amount;
string s1;
ll arr[]={1,1,2,6,24,120,720,5040,40320,362880};
//ll dp[10000][10000];

map<int, string> h;
void init() {
    h[2] = "2";
    h[3] = "3";
    h[4] = "322";
    h[5] = "5";
    h[6] = "53";
    h[7] = "7";
    h[8] = "7222";
    h[9] = "7332";
}

int main()
{
    init();
    ll n,x,count=0;
    string s;
    cin >> n >> s;
    amount=1;
    int flag=0;
    string anss;
    for(ll i=0;i<s.size();i++)
    {
        anss=anss + h[s[i]-48];
    }
    sort(anss.begin(),anss.end());
    reverse(anss.begin(),anss.end());
    cout << anss << endl;
	return 0;
}
