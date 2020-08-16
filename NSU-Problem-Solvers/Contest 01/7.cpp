#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin>>t;
    for(int i = 1;i<=t;i++) {
        cin>>n;
        int max = 0, c;
        while(n--) {
            cin>>c;
            if(max < c)
                max = c;
        }
        cout<< "Case " << i << ": " << max<<endl;
    }
    return 0;
}
