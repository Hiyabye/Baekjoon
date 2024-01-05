#include <iostream>
using namespace std;

void solve(void) {
  int by, bm, bd; cin >> by >> bm >> bd;
  int cy, cm, cd; cin >> cy >> cm >> cd;

  cout << (cm < bm || (cm == bm && cd < bd) ? cy-by-1 : cy-by) << "\n";
  cout << cy-by+1 << "\n";
  cout << cy-by;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}