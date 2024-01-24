#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  char prev = '\0';
  for (char c : s) {
    if (c != prev) {
      cout << c;
      prev = c;
    }
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}