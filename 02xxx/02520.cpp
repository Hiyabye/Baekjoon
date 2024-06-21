#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int cm, y, ssu, ssa, f; cin >> cm >> y >> ssu >> ssa >> f;
  int b, gs, gc, w; cin >> b >> gs >> gc >> w;

  cout << min({cm*2, y*2, ssu*4, ssa*16, f*16/9, b+gs/30+gc/25+w/10}) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}