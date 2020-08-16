//Chef And Coloring CodeChef - COLOR

    #include <iostream>
    #include <string>

    using namespace std;

    int T,n;
    string s;

    int main()
    {

        ios_base::sync_with_stdio(0);

        cin >> T;
        for(int i=0; i<T; i++){
        int r=0,g=0,b=0;
        cin >> n;
        cin >> s;
        for(int j=0; j<n; j++)
        {
            if(s[j]=='R') r++;
            if(s[j]=='G') g++;
            if(s[j]=='B') b++;
        }
        cout << n-max(r,max(g,b)) << "\n";
        }

    return (0);
    }
