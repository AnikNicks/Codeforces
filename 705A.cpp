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

//vector < ll > edges[2005];
//bool visited[2005];
//
//void dfs(ll node)
//{
//    cout << node << endl;
//    visited[node]=1;
//    for(ll i=0;i<edges[node].size();i++)
//    {
//        ll v=edges[node][i];
//        if(!visited[v])
//            dfs(v);
//    }
//
//    return;
//}
//ll arr[2005];

int main()
{
    ll x,y,a,b,n,m,e,t,total=1;

    scanf("%lld",&n);
    for(ll i=1;i<=n;i++)
    {
        if(i%2==1)
            cout << "I hate";
        if(i%2==0)
            cout << "I love";
        if(i<n)
        cout << " that " ;
    }

    cout << " it" << endl;
    return 0;
}
