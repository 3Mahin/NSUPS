#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a,b,c;
    string ans[100];

    while(true){
        cin >> a >> b >> c;
        if(a==0 && b==0 && c==0){
            break;
        }
        else if(c*c == (a*a)+(b*b) || a*a == (c*c)+(b*b) || b*b == (a*a)+(c*c)){
            cout << "right" << endl;
        }
        else{
            cout << "wrong" << endl;
        }
    }

return 0;
}
