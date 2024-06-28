#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int a = 1, b = 1;
  for (int i=2; i<=n; i++) {
    int c = (a+b) % 10;
    a = b;
    b = c;
  }
  cout << b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}