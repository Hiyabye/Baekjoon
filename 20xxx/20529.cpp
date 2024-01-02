#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int dist(int a, int b, int c) {
  int ret = 0;
  for (int i=0; i<4; i++) {
    if ((a & (1<<i)) != (b & (1<<i))) ret++;
    if ((b & (1<<i)) != (c & (1<<i))) ret++;
    if ((c & (1<<i)) != (a & (1<<i))) ret++;
  }
  return ret;
}

void solve(void) {
  int n;
  cin >> n;

  string s;
  vector<int> a(n, 0);
  for (int i=0; i<n; i++) {
    cin >> s;
    a[i] |= (s[0] == 'E') ? (1<<3) : 0;
    a[i] |= (s[1] == 'S') ? (1<<2) : 0;
    a[i] |= (s[2] == 'T') ? (1<<1) : 0;
    a[i] |= (s[3] == 'J') ? (1<<0) : 0;
  }

  if (n > 32) {
    cout << "0\n";
    return;
  }

  int ans = dist(a[0], a[1], a[2]);
  for (int i=0; i<n; i++) {
    for (int j=i+1; j<n; j++) {
      for (int k=j+1; k<n; k++) {
        ans = min(ans, dist(a[i], a[j], a[k]));
        if (ans == 0) {
          cout << "0\n";
          return;
        }
      }
    }
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}