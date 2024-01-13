#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n+1);
  for (int i=1; i<=n; i++) v[i] = i;

  while (n > 1) {
    for (int i=2; i<=n; i+=2) v[i/2] = v[i];
    n /= 2;
  }
  cout << v[1];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}