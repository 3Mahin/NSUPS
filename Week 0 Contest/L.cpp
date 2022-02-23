#include <iostream>

using namespace std;

int main(){
    int n;
    long k;
    int var;
    int count =0;

    cin >> n >> k;

    for(int i=0; i<n; i++){
        cin >> var;
        if(var%k==0){
            count++;
        }
    }
    cout << count << endl;

return 0;
}
