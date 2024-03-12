#include <iostream>
using namespace std;

void solve(void) {
  int sa, sb; cin >> sa >> sb;

  cout << (sa ^ sb);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}