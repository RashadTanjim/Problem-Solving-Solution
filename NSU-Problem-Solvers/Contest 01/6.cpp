#include<bits/stdc++.h>
using namespace std;

int main(){

    int T,ar[3];
    cin >> T;
    for(int t = 1; t <= T; t++){

        cin >> ar[0] >> ar[1] >> ar[2];
        sort(ar,ar+3);
        cout << "Case " << t << ": " << ar[1] << endl;
    }
    return 0;
}
/*#include<iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    int a, b, c;
    for(int i=1; i<=T; i++)
    {
        cin>>a>>b>>c;

        if(((a>b)&&(a<c)) || ((a>c)&&(a<b)))
            cout<< "Case " << i << ": " << a<<endl;
        else if(((b>a)&&(b<c)) || ((b>c)&&(b<a)))
            cout<< "Case " << i << ": " << b<<endl;
        else if(((c>b)&&(c<a)) || ((c>a)&&(c<b)))
            cout<< "Case " << i << ": " << c<<endl;


    }
    return 0;
}
*/
