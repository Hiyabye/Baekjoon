#include <iostream>
using namespace std;

void solve(void) {
  int a; cin >> a;
  int b; cin >> b;

  cout << (a + b * 7 <= 30);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}