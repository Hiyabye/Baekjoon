#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;

  bool ans = true;
  while (n--) {
    string s; cin >> s;
    if (s == "LIE") ans = !ans;
  }
  cout << (ans ? "TRUTH" : "LIE");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}