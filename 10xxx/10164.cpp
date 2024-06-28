#include <iostream>
using namespace std;

int c(int n, int r) {
  int ret = 1;
  for (int i=0; i<r; i++) {
    ret *= n-i;
    ret /= i+1;
  }
  return ret;
}

void solve(void) {
  int n, m, k; cin >> n >> m >> k;

  cout << (k ? c((k-1)/m+(k-1)%m, (k-1)/m) * c(n+m-(k-1)/m-(k-1)%m-2, m-(k-1)%m-1) : c(n+m-2, n-1));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}