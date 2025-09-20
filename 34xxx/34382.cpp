#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<double> f(n);
  for (int i=0; i<n; i++) cin >> f[i];

  double avg = 0;
  for (int i=0; i<n; i++) {
    avg += f[i];
  }
  avg /= n;

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (abs(avg - f[i]) > 10) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}