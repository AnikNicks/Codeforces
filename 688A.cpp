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
//int n;

int main ()
{
    long long n,k,a,b,ans=1,count=0,max=0;
    string s;
    cin >> n >> k;
    int flag=1;
    bool day[105];
    for(ll i=0;i<k;i++)
    {
        cin >>s;
        for(ll j=0;j<s.size();j++)
        {
            if(s[j]=='0')
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
        {
            day[i]=1;
            count++;
            if(i==0)
            {
                //count++;
                max=count;
            }
            else if(day[i-1]==0)
            {
                count=1;

            }
            if(max<count)
                {
                    max=count;
                }
        }
        else
        {
            day[i]=0;
            count=0;
        }
        //cout << count<<endl;
        flag=1;
    }
    cout << max << endl;
    return 0;
}
