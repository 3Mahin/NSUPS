#include <iostream>

using namespace std;

int main(){
    int n;
    int sum, diff;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> sum >> diff;

        if(diff > sum){
            cout << "impossible" << endl;
        }
        else{
            cout << (sum+diff)/2 << " " << (sum-diff)/2 << endl;
        }
    }

return 0;
}
