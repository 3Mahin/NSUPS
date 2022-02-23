#include <iostream>

using namespace std;

int main(){
    int n,a;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> a;
        a *= 567;
        a /= 9;
        a += 7492;
        a *= 235;
        a /= 47;
        a -= 498;
        a /= 10;
        arr[i] = abs(a%10);

    }
    for(int i=0; i<n; i++){
        cout << arr[i] << endl;
    }

return 0;
}
