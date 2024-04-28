#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string t; getline(cin, t);

  int key = t[0] ^ 'C';
  for (char c : t) {
    cout << (char)(c ^ key);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}