#include <bits/stdc++.h>

using namespace std;

int c(int n, int k) {
  int ret = 1;
  for (int i=0; i<k; i++) {
    ret *= n-i;
    ret /= i+1;
  }
  return ret;
}

void solve(void) {
  int n;
  cin >> n;
  cout << c(n, 4);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}