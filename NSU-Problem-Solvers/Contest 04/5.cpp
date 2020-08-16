//Taymyr is calling you CodeForces - 764A

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
#include <map>
using namespace std;
const int maxn = 1e5+100;
const int inf = 0x7fffffff;
int vis[maxn];
int main(void)
{
    int n,m,z;
    int ans = 0;
    scanf("%d %d %d",&n,&m,&z);
    for(int i=1; i*n<=z; i++)
        vis[i*n] = 1;
    for(int i=1; i*m<=z; i++)
    {
        if(vis[i*m])
            ans++;
    }
    printf("%d\n",ans);
    return 0;
}
