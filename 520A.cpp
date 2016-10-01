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
#include <math.h>

using namespace std;
#define pi acos(-1.0)
#define N 1000000
#define ll long long
using namespace std;

vector < ll > cell;
bool visited[30];
char s[105];
int main()
{
    ll x,y,a,b,n,m,e,t,count=0;
    memset(visited,0,sizeof(visited));
    scanf("%lld %s",&n,&s);
    for(ll i=0;i<n;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            if(!visited[s[i]-'A'])
            {
                count++;
                visited[s[i]-'A']=1;
            }
        }
        else
        {
            if(!visited[s[i]-'a'])
            {
                count++;
                visited[s[i]-'a']=1;
            }
        }
    }
    if(count==26)
        cout << "YES"<< endl;
    else
        cout << "NO" << endl;
    return 0;
}
