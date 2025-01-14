#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  cout << n / 2 << "\n";
  for (int i=1; i<n/2; i++) cout << "2 ";
  cout << (n & 1 ? 3 : 2);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}