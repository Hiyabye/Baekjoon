#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  int n, p; cin >> n >> p;

  vector<int> cnt(p, 0);
  int cur = n;
  while (cnt[cur] < 2) {
    cnt[cur]++;
    cur = (cur * n) % p;
  }
  cout << count(cnt.begin(), cnt.end(), 2);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}