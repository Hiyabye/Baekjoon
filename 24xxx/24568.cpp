#include <iostream>
using namespace std;

void solve(void) {
  int r; cin >> r;
  int s; cin >> s;

  cout << 8*r + 3*s - 28;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}