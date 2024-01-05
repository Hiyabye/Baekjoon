#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  long long n, m, p; cin >> n >> m >> p;
  vector<vector<long long> > s(n, vector<long long>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> s[i][j];

  for (int i=0; i<n; i++) {
    sort(s[i].begin(), s[i].end());

    int item = 0;
    for (int j=0; j<m; j++) {
      if (s[i][j] == -1) {
        item++;
        continue;
      }
      while (item > 0 && p < s[i][j]) {
        item--;
        p <<= 1;
      }
      if (p < s[i][j]) {
        cout << "0";
        return;
      }
      p += s[i][j];
    }
    while (item > 0) {
      item--;
      p <<= 1;
    }
  }
  cout << "1";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}