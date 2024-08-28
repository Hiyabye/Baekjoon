#include <iostream>
using namespace std;

void solve(void) {
  long long n; cin >> n;

  cout << (n-1)*(n-1) << "\n";
  for (long long i=2; i<=n; i++) {
    cout << "1 " << i << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}