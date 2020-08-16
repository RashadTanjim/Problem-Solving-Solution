//Professor GukiZ's Robot CodeForces - 620A

#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
ll x1,y1,x2,y2,ans;
int main()
{
    while(~scanf("%I64d%I64d%I64d%I64d",&x1,&y1,&x2,&y2))
    {
        ll dx=abs(x1-x2),dy=abs(y1-y2);
        ans=max(dx,dy);
        printf("%I64d\n",ans);
    }
}
