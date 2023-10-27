#include <iostream>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;

  if ((a+b) & 1 || a < b) cout << -1;
  else cout << (a+b)/2 << " " << (a-b)/2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}