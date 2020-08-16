//First and Last Digit CodeChef - FLOW004

    #include <iostream>
    using namespace std;

    int main()
    {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    		int n;
    		cin>>n;
    		int count, ans=n%10;
    		count =0;
    		while(n/10)
    		    n/=10;
    		ans+=n;
    		cout<<ans<<endl;
    	}
    	return 0;
    }
