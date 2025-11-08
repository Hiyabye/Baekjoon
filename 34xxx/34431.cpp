#include <iostream>
using namespace std;

void solve(void) {
  long long w; cin >> w;
  long long m; cin >> m;
  long long c; cin >> c;

  cout << (w * m * c + 5999999) / 6000000;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}