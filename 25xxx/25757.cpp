#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

void solve(void) {
  int n; char c; cin >> n >> c;

  unordered_set<string> s;
  while (n--) {
    string t; cin >> t;
    s.insert(t);
  }
  cout << s.size() / (c == 'Y' ? 1 : c == 'F' ? 2 : 3);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}