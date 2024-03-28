#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  cout << (n & 1 ? "Either" : ((n*(n+1)/2) & 1 ? "Odd" : "Even"));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}