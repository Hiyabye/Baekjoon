#include <iostream>
using namespace std;

void solve(void) {
  int x; cin >> x;
  int m; cin >> m;

  for (int i=1; i<=1000; i++) {
    if ((m*i+1) % x) continue;
    cout << (m*i+1) / x;
    return;
  }
  cout << "No such integer exists.";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}