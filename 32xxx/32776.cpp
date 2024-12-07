#include <iostream>
using namespace std;

void solve(void) {
  int s; cin >> s;
  int ma, f, mb; cin >> ma >> f >> mb;

  cout << (s > ma + f + mb && s > 240 ? "flight" : "high speed rail");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}