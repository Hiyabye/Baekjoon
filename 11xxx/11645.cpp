#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

void solve(void) {
  int n; cin >> n;
  unordered_set<string> s;
  while (n--) {
    string t; cin >> t;
    s.insert(t);
  }
  cout << s.size() << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}