#include <iostream>
#include <vector>
using namespace std;

vector<bool> v(5001, true);

void precompute(void) {
  for (int i=1; i<=5000; i++) {
    vector<int> d(10, 0);
    int n = i;
    while (n) {
      d[n%10]++;
      n /= 10;
    }
    for (int j=0; j<10; j++) {
      if (d[j] > 1) {
        v[i] = false;
        break;
      }
    }
  }
}

void solve(void) {
  int n, m;

  while (cin >> n >> m) {
    int ans = 0;
    for (int i=n; i<=m; i++) {
      if (v[i]) ans++;
    }
    cout << ans << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  precompute();
  solve();
  return 0;
}