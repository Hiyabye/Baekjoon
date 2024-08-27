#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  long long n, w; cin >> n >> w;
  vector<int> s(n);
  for (int i=0; i<n; i++) cin >> s[i];

  for (int i=1; i<n; i++) {
    if (s[i-1] >= s[i]) continue;
    long long x = w / s[i-1];
    w = w % s[i-1] + x * s[i];
  }
  cout << w;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}