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

char s[99999];
int main ()
{

    long long n,t,a,b;
    scanf("%lld",&n);
    int flag=0;
    for(long long i=0;i<n;i++)
    {

        scanf("%s %lld %lld",&s,&a,&b);
        if(a>=2400 && a<b)
            flag=1;
    }
    if(flag==1)
        printf("YES");
    else
        printf("NO");
    return 0;
}
