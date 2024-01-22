#include <iostream>
using namespace std;

void solve(void) {
  int w1; cin >> w1;
  int h1; cin >> h1;
  int w2; cin >> w2;
  int h2; cin >> h2;

  cout << (w1 < w2 ? 2*(w2+h1+h2)+4 : 2*(w1+h1+h2)+4) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}