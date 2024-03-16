#include <iostream>
using namespace std;

void solve(void) {
  int t; cin >> t;
  int n; cin >> n;

  int sum = 0;
  for (int i=0; i<n; i++) {
    int f; cin >> f;
    sum += f;
  }
  cout << (t <= sum ? "Padaeng_i Happy" : "Padaeng_i Cry");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}