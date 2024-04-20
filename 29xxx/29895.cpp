#include <iostream>
using namespace std;

void solve(void) {
  long long n; cin >> n;

  for (long long i=1; i<=n; i++) {
    cout << i*(n-i+1) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}