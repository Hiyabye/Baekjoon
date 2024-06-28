#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  int n, m;
  cin >> n >> m;
  vector<int> a(m), b(m);
  for (int i=0; i<m; i++) cin >> a[i] >> b[i];

  int six = *min_element(a.begin(), a.end());
  int one = *min_element(b.begin(), b.end());

  int ans = 0;
  if (one * 6 <= six) ans = one * n;
  else {
    ans = six * (n/6);
    n %= 6;
    if (one * n <= six) ans += one * n;
    else ans += six;
  }
  
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}