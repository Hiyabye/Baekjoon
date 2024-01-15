#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  long long n, m; cin >> n >> m;

  cout << abs(n - m);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}