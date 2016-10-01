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
int a[10]={0};
vector <int> ans;
int main()
{
    int numb,t,n,m,count=0,s;
    cin >> m>>n;
    for(int i=0;i<m;i++)
    {
        int t=0;
        for(int j=0;j<n;j++)
        {
            scanf("%d",&numb);
            s=max(a[j],t);
            t=s+numb;
            a[j]=t;
        }
        ans.push_back(t);
    }
    for(int i=0;i<ans.size()-1;i++)
        cout << ans[i] << " ";
    cout << ans[ans.size()-1];
    return 0;
}
