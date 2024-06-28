#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<long long> f(117);
  f[1] = f[2] = f[3] = 1;
  for (int i=4; i<=116; i++) f[i] = f[i-1] + f[i-3];

  int n;
  cin >> n;
  cout << f[n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}