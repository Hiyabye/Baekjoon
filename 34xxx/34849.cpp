#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  if (n <= 10000) cout << "Accepted";
  else cout << "Time limit exceeded";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}