#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<long long> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  sort(v.begin(), v.end());

  int a = 0, b = 0, c = 0, d = 0;
  for (int i=0; i<n; i++) {
    if (v[i] < 0) a++;
    else if (v[i] == 0) b++;
    else if (v[i] == 1) c++;
    else d++;
  }

  long long ans = 0;
  for (int i=1; i<a; i+=2) ans += v[i-1] * v[i];
  if ((a & 1) && !b) ans += v[a-1];
  ans += c;
  for (int i=n-1; i>=n-d+1; i-=2) ans += v[i] * v[i-1];
  if (d & 1) ans += v[n-d];
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}