#include <iostream>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;
  int n; cin >> n;

  for (int i=0; i<n; i++) {
    int c; cin >> c;
    cout << c << " " << (c >= 1000 ? a * 1000 + b * (c-1000) : a * c) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}