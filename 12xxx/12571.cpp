#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int n; cin >> n;
  vector<int> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i] >> b[i];

  int ans = 0;
  for (int i=0; i<n-1; i++) {
    for (int j=i+1; j<n; j++) {
      if ((a[i] - a[j]) * (b[i] - b[j]) < 0) ans++;
    }
  }
  cout << "Case #" << idx << ": " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}