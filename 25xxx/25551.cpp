#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int mw, mb; cin >> mw >> mb;
  int tw, tb; cin >> tw >> tb;
  int pw, pb; cin >> pw >> pb;

  int a = min({mw, tb, pw}), b = min({mb, tw, pb});
  cout << min({a+b, 2*a+1, 2*b+1});
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}