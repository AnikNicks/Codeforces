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

using namespace std;
#define pi acos(-1.0)
#define N 1000000
#define ll long long
using namespace std;

char arr[105];
vector <ll> order;

int main()
{
    ll x,y,a,b,n,e;
    ll grp=0,count=0,flag=0;
    scanf("%lld %s",&n,&arr);
    for(ll i=0;i<strlen(arr);i++)
    {
        if(arr[i]== 'B')
        {
            if(i==0)
            {
                count++;
                flag=1;
                grp++;
            }
            else if(i>0 && arr[i-1]!='B')
            {
                count++;
                flag=1;
                grp++;
            }
            else
            {
                count++;
                flag=1;
            }
        }
        else
        {
            order.push_back(count);
            flag=0;
            count=0;

        }
    }
    if(arr[strlen(arr)-1]=='B')
        order.push_back(count);
    cout << grp << endl;
    for(ll i=0;i<order.size();i++)
    {
        if(order[i]!=0)
        cout << order[i] << " ";

    }
    return 0;
}
