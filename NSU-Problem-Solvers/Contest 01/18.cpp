//Small Factorial CodeChef - FLOW018


    #include<bits/stdc++.h>
    using namespace std;
    int fact(int);
    int main()
    {
    	int t;
    	scanf("%d",&t);
    	while(t--)
    	{
    		int n;
    		scanf("%d",&n);
    		printf("%d\n",fact(n));
    	}
    	return 0;
    }

    int fact(int p)
    {
    	int factor;
    	if(p==0)
    		factor=1;
    	else
    		factor=p*fact(p-1);
    	return factor;
    }
