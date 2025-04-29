#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  long long odd = 0;
  for (int i=0; i<n; i++) {
    int a; cin >> a;
    if (a & 1) odd++;
  }
  cout << odd * (n - odd);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}