#include <iostream>
#include <set>
using namespace std;

void solve(void) {
  char c; cin >> c;
  int n; cin >> n;

  set<char> ans;
  ans.insert(c);
  while (n--) {
    char a, b; cin >> a >> b;
    if (b != c) continue;
    ans.insert(a);
    c = a;
  }
  cout << c << "\n" << ans.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}