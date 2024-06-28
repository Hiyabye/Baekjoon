#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;
  int i; cin >> i;

  cout << s[i-1];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}