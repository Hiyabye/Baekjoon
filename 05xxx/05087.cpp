#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; cin >> s;
  if (s == "#") return false;

  int ans = 0;
  while (s != "*") {
    ans += (s == "A" || (stoi(s) & 1) ? 1 : -1);
    cin >> s;
  }
  cout << (ans ? (ans > 0 ? "Cheryl" : "Tania") : "Draw") << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}