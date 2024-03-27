#include <iostream>
#include <string>
using namespace std;

int calc(const char c) {
  if (string("BFPV").find(c) != string::npos) return 1;
  if (string("CGJKQSXZ").find(c) != string::npos) return 2;
  if (string("DT").find(c) != string::npos) return 3;
  if (string("L").find(c) != string::npos) return 4;
  if (string("MN").find(c) != string::npos) return 5;
  if (string("R").find(c) != string::npos) return 6;
  return 0;
}

void solve(void) {
  string s;

  while (cin >> s) {
    int prev = 0;
    for (char c : s) {
      int cur = calc(c);
      if (cur == 0) {
        prev = 0;
      } else if (cur != prev) {
        cout << cur;
        prev = cur;
      }
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}