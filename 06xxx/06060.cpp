#include <iostream>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n; cin >> n;

  unordered_map<int, int> a, b;
  for (int i=1; i<n; i++) {
    int s, d, c; cin >> s >> d >> c;
    a[s] = d; b[s] = c;
  }

  int ans = 0, cur = 1;
  for (int i=1; i<n; i++) {
    if (b[cur] == 1) ans++;
    cur = a[cur];
  }
  cout << (ans & 1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}