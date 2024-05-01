#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int calc(int n, vector<int> &a, vector<int> &op) {
  int ret = a[0];
  for (int i=1; i<n; i++) {
    switch (op[i-1]) {
      case 0: ret += a[i]; break;
      case 1: ret -= a[i]; break;
      case 2: ret *= a[i]; break;
      case 3: ret /= a[i]; break;
    }
  }
  return ret;
}

int backtrack1(int cur, int n, vector<int> &a, vector<int> &b, vector<int> &op) {
  if (cur == n-1) return calc(n, a, op);

  int ans = -1e9;
  for (int i=0; i<4; i++) {
    if (b[i] == 0) continue;
    b[i]--;
    op[cur] = i;
    ans = max(ans, backtrack1(cur+1, n, a, b, op));
    b[i]++;
  }
  return ans;
}

int backtrack2(int cur, int n, vector<int> &a, vector<int> &b, vector<int> &op) {
  if (cur == n-1) return calc(n, a, op);

  int ans = 1e9;
  for (int i=0; i<4; i++) {
    if (b[i] == 0) continue;
    b[i]--;
    op[cur] = i;
    ans = min(ans, backtrack2(cur+1, n, a, b, op));
    b[i]++;
  }
  return ans;
}

void solve(void) {
  int n; cin >> n;
  vector<int> a(n), b(4), op(n-1);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<4; i++) cin >> b[i];

  cout << backtrack1(0, n, a, b, op) << "\n" << backtrack2(0, n, a, b, op);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}