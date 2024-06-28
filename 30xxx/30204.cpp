#include <iostream>
using namespace std;

void solve(void) {
  int n, x; cin >> n >> x;

  int sum = 0;
  for (int i=0; i<n; i++) {
    int p; cin >> p;
    sum += p;
  }
  cout << (sum % x == 0 ? "1" : "0");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}