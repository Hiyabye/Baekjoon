#include <iostream>
#include <queue>
#include <string>
#include <unordered_set>
#include <utility>
using namespace std;

inline char i2c(int i) { return i + '0'; }

string solve(void) {
  int n; cin >> n;

  queue<pair<int, string>> q;
  unordered_set<int> st;
  q.push({1 % n, "1"}); st.insert(1);

  while (!q.empty()) {
    auto [a, b] = q.front(); q.pop();
    if (a == 0) return b;
    for (int i=0; i<2; i++) {
      pair<int, string> p = {(a*10+i) % n, b + i2c(i)};
      if (st.find(p.first) != st.end()) continue;
      st.insert(p.first);
      q.push(p);
    }
  }
  return "BRAK";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << solve() << "\n";
  return 0;
}