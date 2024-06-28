#include <iostream>
using namespace std;

void solve(void) {
  int px, rx; cin >> px >> rx;

  if (px * 10 < rx * 2) cout << "weak";
  else if (px * 10 < rx * 4) cout << "normal";
  else if (px * 10 < rx * 6) cout << "strong";
  else cout << "very strong";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}