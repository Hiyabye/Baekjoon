#include <iostream>
#include <set>
#include <utility>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<int> x(n), y(n);
  for (int i=0; i<n; i++) cin >> x[i] >> y[i];

  set<pair<int, int>> p;
  for (int i=0; i<n; i++) {
    p.insert({x[i], y[i]});
  }

  long long sumx = 0, sumy = 0;
  for (int i=0; i<n; i++) {
    sumx += x[i]; sumy += y[i];
  }

  for (int i=0; i<n; i++) {
    if (p.find({2*sumx/n-x[i], 2*sumy/n-y[i]}) == p.end()) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int c; cin >> c;
  while (c--) cout << (solve() ? "yes" : "no") << "\n";
  return 0;
}