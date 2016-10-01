#include <iostream>
#include <string>
#include <ctime>
#include <cstring>
#include <deque>
#include <stdio.h>
#include <string.h>
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


int main ()
{
    long long n,k;
    scanf("%lld %lld",&n,&k);
    printf("%lld",((n/k)+1)*k);
    return 0;
}
