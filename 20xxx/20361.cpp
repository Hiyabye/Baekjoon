#include <iostream>
using namespace std;

void solve(void) {
  int n, x, k; cin >> n >> x >> k;

  while (k--) {
    int a, b; cin >> a >> b;
    if (x == a) x = b;
    else if (x == b) x = a;
  }
  cout << x;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}