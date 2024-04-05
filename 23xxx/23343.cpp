#include <iostream>
#include <string>
using namespace std;

bool valid(const string &s) {
  for (char c : s) {
    if (c < '0' || c > '9') return false;
  }
  return true;
}

string solve(void) {
  string x, y; cin >> x >> y;
  if (!valid(x) || !valid(y)) return "NaN";

  return to_string(stoi(x) - stoi(y));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}