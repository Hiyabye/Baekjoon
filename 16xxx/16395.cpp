#include <iostream>
using namespace std;

int c(int n, int k) {
  int ret = 1;
  for (int i=1; i<=k; i++) {
    ret *= (n-i+1);
    ret /= i;
  }
  return ret;
}

void solve(void) {
  int n, k;
  cin >> n >> k;
  cout << c(n-1, k-1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}