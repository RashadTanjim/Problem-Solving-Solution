//Count of Maximum CodeChef - MAXCOUNT

    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
     {   ll t,a,large,s,c;
    	 cin>>t;
    	 while(t--)
    	  {    large=0;
    		 map < ll ,ll > m;
    		 cin>>a;
    		 for(ll i = 1 ; i <= a ;i++ )
    	      {
    			  cin>>c;
    			  m[c]++;

    		  }
    		  for(ll i = 1 ; i <= 10000 ;i++ )
    	      {
    			   if(m[i]>large)
    			    { s=i;
    					large=m[i];
    				}


    	      }
    		  cout<<s<<" "<<large<<endl;

    	  }
    		 return 0;
    	 }

