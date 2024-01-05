#include <iostream>
using namespace std;

void solve(void) {
  int s, t, d; cin >> s >> t >> d;

  cout << d/(2*s)*t;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}