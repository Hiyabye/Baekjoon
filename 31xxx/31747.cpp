#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> a, b;
  for (int i=0; i<n; i++) {
    int x; cin >> x;
    if (x == 1) a.push_back(i);
    else b.push_back(i);
  }

  int ans = 0;
  for (int i=0, j=0; i<a.size() || j<b.size(); ans++) {
    if (i == a.size())                        j++;
    else if (j == b.size())                   i++;
    else if (a[i] > b[j] && a[i] - b[j] >= k) j++;
    else if (b[j] > a[i] && b[j] - a[i] >= k) i++;
    else                                      i++, j++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}