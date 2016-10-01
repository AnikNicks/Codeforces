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

int main()
{
    ll x,y,a,b,n,m,e,t;

    scanf("%lld %lld",&n,&m);
    if(m<n)
    {
        printf("%lld\n",n-m);
    }
    else
    {
        t=0;
            while(n<m)
            {
                if(m%2==0)
                    m/=2;
                else
                    m++;
                t++;
            }
//        cout << t << " " << n << " " << m << endl;
        printf("%lld\n",t+n-m);
    }
    return 0;
}
