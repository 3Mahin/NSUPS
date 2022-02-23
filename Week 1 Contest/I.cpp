#include <bits/stdc++.h>

using namespace std;

int main(){
    string a,b,c,d;
    
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);

    d = a+b;

    sort(d.begin(), d.end());
    sort(c.begin(), c.end());

    if(d == c){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

return 0;
}