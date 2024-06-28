#include <iostream>
using namespace std;

void solve(void) {
  int h1, b1; cin >> h1 >> b1;
  int h2, b2; cin >> h2 >> b2;

  if (3*(h1-h2) > b2-b1) cout << "1 " << 3*(h1-h2)+b1-b2;
  else if (3*(h1-h2) < b2-b1) cout << "2 " << 3*(h2-h1)+b2-b1;
  else cout << "NO SCORE";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}