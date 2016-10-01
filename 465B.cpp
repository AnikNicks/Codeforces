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
int numb[999999];
int main()
{
    long long t,x=0,y=0,n,m,count=0,a,b;
    cin >> t;
    for(long long k=1;k<=t;k++)
    {
        cin >> numb[k];
        if(k==1 && numb[k]==1)
        {
            count++;
            x++;
        }
        else if(numb[k]==1)
        {
            if(numb[k-1]==1)
                count++;
            else if(x==0)
                count++;
            else if(x>0)
                count+=2;
            x++;
            //cout  << count << endl;
        }

    }
    //if(x==0)
        cout << count;
    //else
    //cout << count+1;
    return 0;
}
