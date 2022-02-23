#include <bits/stdc++.h>

using namespace std;

int main() {
  string input;
  cin >> input;
  
  for (int i = 0; i < input.length() - 1; i++) {
    if (input[i] != input[i + 1]) {
      cout << input[i];
    }
  }
  
  cout << input[input.length() - 1];

  return 0;
}