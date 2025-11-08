#include <iostream>
#include <set>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;

  set<int> st;
  for (int d=1; d<=9; d++) {
    for (int mask=0; mask<(1<<d); mask++) {
      int n = 0;
      for (int i=0; i<d; i++) {
        n = 10 * n + ((mask >> i) & 1 ? 7 : 4);
      }
      st.insert(n);
    }
  }

  int ans = 0;
  for (int x : st) {
    if (x < a) continue;
    if (x > b) break;
    ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}