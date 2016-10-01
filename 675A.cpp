#include <iostream>
#include <cstdio>
#include <math.h>
#include <cstring>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>
#include <stdio.h>
#include <map>
using namespace std;

int main()
{
    long long t,j=0,a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);

    if(a==b)
    {
            printf("YES\n");

    }
    else
    {
        if(a<b && c>0)
        {
//            if(a<0 && b>=0)
//                a=((a/c)+1)*c+a;
//            cout << (b%c)-a << endl;
            if((b-a)%c==0)
            {
                printf("YES\n");
                return 0;
            }
            printf("NO\n");
        }
        else if( a>b && c < 0)
        {
//            cout << (b-a)%c << endl;
//            cout <<  << endl;
            if((b-a)%c==0)
            {
                printf("YES\n");
                return 0;
            }
            printf("NO\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
