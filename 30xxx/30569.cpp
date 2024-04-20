#include <iostream>
using namespace std;

void solve(void) {
  int h1, d1, t1; cin >> h1 >> d1 >> t1;
  int h2, d2, t2; cin >> h2 >> d2 >> t2;

  for (double a=0, b=0, c=0; h1>0 && h2>0; c+=0.5) {
    if (c >= a) a = t1 + c, h2 -= d1;
    if (c >= b) b = t2 + c, h1 -= d2;
  }
  cout << (h1 > 0 ? "player one" : h2 > 0 ? "player two" : "draw");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}