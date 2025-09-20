#include <iostream>
using namespace std;

void solve(void) {
  int s; cin >> s;

  cout << (3659 - s % 3600) / 60;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}