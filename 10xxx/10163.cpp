#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  vector<vector<int> > v(1001, vector<int>(1001, 0));
  for (int i=1; i<=n; i++) {
    int a, b, w, h; cin >> a >> b >> w >> h;
    for (int j=a; j<a+w; j++) {
      for (int k=b; k<b+h; k++) {
        v[j][k] = i;
      }
    }
  }

  vector<int> cnt(n+1, 0);
  for (int i=0; i<1001; i++) {
    for (int j=0; j<1001; j++) {
      cnt[v[i][j]]++;
    }
  }

  for (int i=1; i<=n; i++) {
    cout << cnt[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}