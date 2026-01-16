#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  int x1; string d1; cin >> x1 >> d1; x1--;
  int x2; string d2; cin >> x2 >> d2; x2--;

  int ans = 0;
  if (d1[0] == 'r') {
    do ans += a[x1]; while (++x1 < n);
  } else {
    do ans += a[x1]; while (--x1 >= 0);
  }
  cout << ans << " ";

  ans = 0;
  if (d2[0] == 'r') {
    do ans += (a[x2] == 0); while (++x2 < n);
  } else {
    do ans += (a[x2] == 0); while (--x2 >= 0);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}