#include <bits/stdc++.h>

using namespace std;

int l, c;
vector<char> a, b;
vector<bool> visited;

void backtrack(int idx) {
  if (idx == l) {
    int cnt = 0;
    for (int i=0; i<l; i++) {
      if (b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u') cnt++;
    }
    if (cnt < 1 || l-cnt < 2) return;
    for (int i=0; i<l; i++) {
      cout << b[i];
    }
    cout << "\n";
    return;
  }

  for (int i=0; i<c; i++) {
    if (idx > 0 && a[i] < b[idx-1]) continue;
    if (visited[i]) continue;
    visited[i] = true;
    b[idx] = a[i];
    backtrack(idx+1);
    visited[i] = false;
  }
}

void solve(void) {
  cin >> l >> c;
  a.resize(c);
  b.resize(l);
  visited.resize(c, false);
  for (int i=0; i<c; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());
  backtrack(0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}