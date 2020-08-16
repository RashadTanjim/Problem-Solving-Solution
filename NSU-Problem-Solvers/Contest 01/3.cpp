#include<iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    int a, b, c;
    while(T--)
    {
        cin>>a>>b>>c;

        if(((a>b)&&(a<c)) || ((a>c)&&(a<b)))
            cout<<a<<endl;
        else if(((b>a)&&(b<c)) || ((b>c)&&(b<a)))
            cout<<b<<endl;
        else if(((c>b)&&(c<a)) || ((c>a)&&(c<b)))
            cout<<c<<endl;


    }
    return 0;
}
