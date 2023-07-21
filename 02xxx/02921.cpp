#include <bits/stdc++.h>

using namespace std;

void solve(void) {
  int n;
  cin >> n;
  cout << n*(n+1)*(n+2)/2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}