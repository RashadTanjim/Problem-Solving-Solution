#include<iostream>
using namespace std;

int main(){

    int value,a,b;
    cin >> value;
    for(int i = 1; i <= value; i++){
        cin >> a;
        cin >> b;
        cout << "Case " << i << ": ";
        cout << a+b << endl;
    }
    return 0;
}
