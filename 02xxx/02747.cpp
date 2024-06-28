#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  vector<int> f(n+1);
  f[0] = 0; f[1] = 1;
  for (int i=2; i<=n; i++) f[i] = f[i-1] + f[i-2];

  cout << f[n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}