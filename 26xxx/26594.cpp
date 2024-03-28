#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  int n = 1;
  while (s[n] == s[n-1]) n++;
  cout << n;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}