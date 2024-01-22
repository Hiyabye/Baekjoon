#include <iostream>
using namespace std;

void solve(void) {
  int w; cin >> w;
  int l; cin >> l;
  int h; cin >> h;

  cout << ((w/h<2 || l/h<2 || w/l>2 || l/w>2) ? "bad" : "good");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}