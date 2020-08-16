//Reverse The Number CodeChef - FLOW007
    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cin>>n;
        while(n--)
        {
            int a;
            cin>>a;
            int digit,rev=0;
            while(a)
            {
                digit=a%10;
                rev=rev*10+digit;
                a=a/10;
            }
            cout<<rev<<endl;
        }
    }
