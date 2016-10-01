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
int a[99999];
int main()
{
    int t,n,m,count=0;
    vector <int> x,y;
    cin >> t;
    for(int k=0;k<t;k++)
    {
        cin >> a[k];
    }
    int min,choice;
    for(int i=0;i<t;i++)
    {
        min=a[i];
        choice=i;
        for(int j=i+1;j<t;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                choice=j;
            }
        }
        if(choice==i)
            continue;
        x.push_back(i);
        y.push_back(choice);
        swap(a[i],a[choice]);
    }
    cout << x.size() << endl;
    for(int i=0;i<x.size();i++)
    {
        cout << x[i] << " " << y[i] << endl;
    }
    return 0;
}
