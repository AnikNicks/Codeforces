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
#include <math.h>
using namespace std;
long long sum=0;
bool can(long long m, long long s)
{
    return s >= 0 && s <= 9 * m;
}

int main()
{
    long long a,b,numb,t,n,m,count=0,s,x=0,y=0;
    cin >> m >> s;
    string min="",max="";
    if((s<=0 && m>1)||(s>9*m))
    {
        printf("-1 -1\n");
        return 0;
    }
    sum=s;
    for(long long i=0;i<m;i++)
    {
        for(long long d=0;d<10;d++)
        {
            if((i>0 || d>0 || (m==1 && d==0)) && can(m-i-1,sum-d))
            {
                min+=('0'+d);
                sum-=d;
                break;
            }
        }
    }
    sum=s;
    for(long long i=0;i<m;i++)
    {
        for(long long d=9;d>=0;d--)
        {
            if(can(m-i-1,sum-d))
            {
                max+=('0'+d);
                sum-=d;
                break;
            }
        }
    }
    cout << min << " " << max << endl;
    return 0;
}
