#include <bits/stdc++.h>

using namespace std;

int main(){
    string a,b,s = "";
    getline(cin, a);
    getline(cin, b);

    if(a.length() - b.length() == 0){
        for (int i = 0; i < a.length(); i++){
            s += a[i]+b[i];
        }
        cout << s << endl;
    }
    else{
        if(a>b){
            for (int i = 0; i < b.length(); i++){
                s += a[i]+b[i];
            }
            s += a[a.length()-1];
            cout << s << endl;
        }
        else{
            for (int i = 0; i < a.length(); i++){
                s += a[i]+b[i];
            }
            s += b[b.length()-1];
            cout << s << endl;
        }
    }

return 0;
}