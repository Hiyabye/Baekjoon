#include <iostream>
#include <sstream>
#include <string>
#include <unordered_set>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  unordered_set<string> s;
  while (n--) {
    string t; cin >> t;
    s.insert(t);
  }

  while (m--) {
    string t; cin >> t;
    stringstream ss(t); string u;
    while (getline(ss, u, ',')) {
      if (s.find(u) != s.end()) s.erase(u);
    }
    cout << s.size() << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}