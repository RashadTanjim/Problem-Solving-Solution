#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,k,a,count = 0;
    vector<int>array;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> a;
        array.push_back(a);
    }
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if((array[i]+array[j])%k == 0){
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
