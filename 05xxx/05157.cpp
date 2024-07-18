#include <iostream>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;

void solve(int idx) {
  int tmp, b, n, r; cin >> tmp >> b >> n >> r;
  unordered_set<int> s;
  while (b--) {
    int x; cin >> x;
    s.insert(x);
  }

  int ans = 0;
  while (n--) {
    int c, p; cin >> c >> p;
    if (s.find(c) == s.end()) continue;
    ans += p * r / 100;
  }
  cout << "Data Set " << idx << ":\n" << ans << "\n\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int k; cin >> k;
  for (int i=1; i<=k; i++) solve(i);
  return 0;
}