#include <iostream>
#include <string>
#include <ctime>
#include <cstring>
#include <deque>
#include <cstdio>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
#define ll long long
#define fname "a"
#define F first
#define S second
#define mod 1000000
#define INF 1000000000
#define mp make_pair
#define pb push_back

using namespace std;

int main()
{
    ll n,sendCount=0,m,sum=0,user=0;
    string s;
    map < string,ll> names;
    while(getline(cin,s))
    {
        if(s[0]=='+')
        {
            string s1=s.substr(1,s.size()-1);
            //cout << s1<<endl;
            names[s1]=1;
            user++;
        }
        else if(s[0]== '-')
        {
            string s1=s.substr(1,s.size()-1);
            //cout << s1<<endl;
            names.erase(s1);
            user--;
            //cout << names[s1] << endl;
        }
         else
         {
             ll count(0);
             for(ll i=s.size()-1;i>=0;i--)
             {
                 if(s[i]==':')
                    break;
                 count++;
             }
             //cout<< s.size()-s.find(':')-1<< endl;
             //cout << count-1;
             sum+=user*(count);
             sendCount++;
         }
//        if(names.empty())
//        {
//            if(sendCount<=1)
//                cout << sum << endl;
//            else
//                cout  << sum+sendCount << endl;
//            break;
//        }
    }
    cout << sum << endl;
    return 0;
}
