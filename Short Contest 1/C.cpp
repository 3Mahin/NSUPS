#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,x;
    int arr[500];
    int sum=0;
    cin>> n >> x;

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr , arr+n);

    for (int i=0; i<n; i++){
        sum+=arr[i];
    }

    int diff = x-sum;
    int ans =diff/arr[0];

    cout<< ans+n <<endl;

return 0;
}
