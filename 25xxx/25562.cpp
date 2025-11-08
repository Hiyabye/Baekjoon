#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  cout << n*(n-1)/2 << "\n";
  for (int i=0; i<n; i++) cout << (1 << i) << " ";
  cout << "\n";

  cout << n-1 << "\n";
  for (int i=1; i<=n; i++) cout << i << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}