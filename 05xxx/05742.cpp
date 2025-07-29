#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n, c, k; cin >> n >> c >> k;
  if (n == 0 && c == 0 && k == 0) return false;

  vector<int> cnt(k+1, 0);
  for (int i=0; i<n; i++) for (int j=0; j<c; j++) {
    int x; cin >> x;
    cnt[x]++;
  }
  int mn = *min_element(cnt.begin()+1, cnt.end());

  for (int i=1; i<=k; i++) {
    if (cnt[i] == mn) cout << i << " ";
  }
  cout << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}