#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int value;
    vector<int> v;
    
    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> value;
        v.push_back(value);
    }

    sort(v.begin(),v.end());

    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    
return 0;
}