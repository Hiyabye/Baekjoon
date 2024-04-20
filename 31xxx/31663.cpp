#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  vector<int> sum(45, 0), cnt(45, 0);
  for (int i=0; i<n; i++) {
    for (int j=0; j<v[i].length(); j++) {
      sum[j] += v[i][j];
      cnt[j]++;
    }
  }

  for (int i=0; i<45; i++) {
    if (cnt[i] == 0) break;
    cout << (char)(sum[i] / cnt[i]);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}