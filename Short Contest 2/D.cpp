#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,n,x;
    int room = 2;
    int floor = 1;

    cin >> t;

    while(t--){
        cin >> n >> x;

        if(n==1){
            cout << floor << endl;
        }
        else{
            while(room < n){
                room = room + x;
                floor++;
            }
            cout << floor << endl;
            floor = 1;
            room = 2;
        }
    }

return 0;
}