#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; double w1, w2, b; cin >> s >> w1 >> w2 >> b;

  if (w1 + w2 + b < 0 || b >= 0) return false;
  if (s == "AND") return w1 + b <  0 && w2 + b <  0;
  else            return w1 + b >= 0 && w2 + b >= 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "true" : "false") << "\n";
  return 0;
}