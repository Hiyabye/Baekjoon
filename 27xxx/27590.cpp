#include <iostream>
using namespace std;

void solve(void) {
  int ds, ys; cin >> ds >> ys;
  int dm, ym; cin >> dm >> ym;

  ds = ys - ds;
  dm = ym - dm;
  while (ds != dm) {
    if (ds < dm) ds += ys;
    else dm += ym;
  }
  cout << ds;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}