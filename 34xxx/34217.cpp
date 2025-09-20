#include <iostream>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;
  int c, d; cin >> c >> d;

  cout << (a + c != b + d ? (a + c < b + d ? "Hanyang Univ." : "Yongdap") : "Either");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}