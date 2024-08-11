#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline int calc(int n, const vector<bool> &a) {
  vector<int> b, cnt(n+1, 0);
  for (int i=1; i<=n; i++) if (a[i]) b.push_back(i);
  int m = b.size();
  for (int i=0; i<m-2; i++) for (int j=i+1; j<m-1; j++) for (int k=j+1; k<m; k++) {
    if (b[i] ^ b[j] ^ b[k]) continue;
    cnt[b[i]]++; cnt[b[j]]++; cnt[b[k]]++;
  }
  int mx = 0, idx = 0;
  for (int i=1; i<=n; i++) {
    if (cnt[i] > mx) {
      mx = cnt[i];
      idx = i;
    }
  }
  return idx;
}

void solve(void) {
  int n; cin >> n;

  vector<bool> a(n+1, true);
  while (a[0]) a[calc(n, a)] = false;

  cout << count(a.begin(), a.end(), true) << "\n";
  for (int i=1; i<=n; i++) if (a[i]) cout << i << " ";
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}