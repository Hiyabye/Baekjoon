#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m, k; cin >> n >> m >> k;
  vector<long long> s(n);
  for (int i=0; i<n; i++) cin >> s[i];
  sort(s.begin(), s.end(), greater<long long>());

  long long a = 0, b = 0;
  for (int i=0; i<min(m+k, n); i++) a += s[i];
  for (int i=0; i<n; i++) b += s[i];
  cout << fixed << setprecision(5) << (double)a / b * 100;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}