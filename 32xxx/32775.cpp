#include <iostream>
using namespace std;

void solve(void) {
  int s; cin >> s;
  int f; cin >> f;

  cout << (s > f ? "flight" : "high speed rail");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}