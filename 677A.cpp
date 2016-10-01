#include <iostream>
 #include <algorithm>
#include <vector>
#include <iostream>
#include <list>
#include <deque>
#include <cstdio>
using namespace std;

int main()
{
    long long count=0,n,h,a;
    scanf("%lld %lld",&n , &h);

    for(long long i=0;i<n;i++)
    {
        scanf("%lld",&a);
        if(a>h)
        {
            count+=2;
        }
        else
            count+=1;

    }
    printf("%lld",count);
    return 0;
}
