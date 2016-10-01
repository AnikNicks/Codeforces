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
#define ll long long
#define uu first
#define vv second
#define MAX 2005


int main()
{
    vector <ll> vect1,vect2;
map <ll,ll> ans;
    ll n,numb,count=0;
    scanf("%lld",&n);
    for(ll i=0;i<n;i++)
    {
        scanf("%lld",&numb);
        vect1.push_back(numb);
    }
    if(n==1)
    {
        cout << "1"<< endl;
        return 0;
    }
    vect2=vect1;
    sort(vect2.begin(),vect2.end());
    ll previous=vect2[vect2.size()-1];
    ans[vect2[vect2.size()-1]]=1;
    count=1;
    ll m=vect2.size()-2;
    for(ll i=m;i>=0;i--)
    {
        if(vect2[i+1]>vect2[i])
        {
            count++;
            ans[vect2[i]]=count;

        }
        else
            count++;

    }
    for(ll i=0;i<n-1;i++)
    {
        cout<< ans[vect1[i]] << " ";
    }
    cout << ans[vect1[vect1.size()-1]];
    return 0;
}
