#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  int n, k, a, b; cin >> n >> k >> a >> b;

  cout << (abs(k-1)+n-1)*b << " " << (n-1)*a;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}