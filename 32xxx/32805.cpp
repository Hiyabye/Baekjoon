#include <iostream>
using namespace std;

void solve(void) {
  int w, s; cin >> w >> s;

  for (int i=1; i<=s; i++) {
    if ((s*(s+1)/2) * 29260 + i * 110 == w) {
      cout << i;
      return;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}