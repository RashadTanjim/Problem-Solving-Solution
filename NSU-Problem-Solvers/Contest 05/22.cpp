//Laboratories CodeChef - GOOGOL05

    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cin>>n;
        string str[n+1];
        for(int i=0; i<n; i++)
        {
            cin>>str[i];
        }
        sort(str,str+n);
        str[n]="--";
        int flag=1;
        for(int i=0; i<n; i++)
        {
            if(str[i]==str[i+1])
            {
                flag++;
            }
            else
            {
                cout<<str[i]<<" ";
                cout<<flag<<endl;
                flag=1;
            }
        }
        return 0;
    }
