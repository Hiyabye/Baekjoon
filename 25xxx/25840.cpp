#include <iostream>
#include <set>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;

  set<string> s;
  while (n--) {
    string x; cin >> x;
    s.insert(x);
  }
  cout << s.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}