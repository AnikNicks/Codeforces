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
using namespace std;

int main()
{
    long long n,max=0,count=0,a,b;
    string s;
    map <string,long long> lists;
    cin >> n;
    lists["0"]=1;
    lists["1"]=1;
    lists["2"]=1;
    lists["3"]=1;
    lists["4"]=1;
    lists["5"]=1;
    lists["6"]=1;
    lists["7"]=1;
    lists["8"]=1;
    lists["9"]=1;
    lists["10"]=1;
    lists["11"]=1;
    lists["12"]=1;
    lists["13"]=1;
    lists["14"]=1;
    lists["15"]=1;
    lists["16"]=1;
    lists["17"]=1;
    lists["ABSINTH"]=1;
    lists["BEER"]=1;
    lists["BRANDY"]=1;
    lists["CHAMPAGNE"]=1;
    lists["GIN"]=1;
    lists["RUM"]=1;
    lists["SAKE"]=1;
    lists["TEQUILA"]=1;
    lists["VODKA"]=1;
    lists["WHISKEY"]=1;
    lists["WINE"]=1;

    for(long long i=0;i<n;i++)
    {
        cin >> s;
        //cout << lists[s] << endl;
        if(lists[s]==1)
            count++;
    }
    cout << count << endl;
    return 0;
}
