//Sum of Digits CodeChef - FLOW006

    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int tt;
        cin>>tt;
        while(tt--)
        {
         int no,sum=0,remd;
         cin>>no;
         while(no!=0)
         {
           remd=no%10;
           no=no/10;
           sum=sum+remd;

         }
             cout<<sum<<endl;
        }
    }
