#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string a, b; cin >> a >> b;
  b.erase(0, 1); b.pop_back();

  while (b.find("\\n") != string::npos) {
    b.replace(b.find("\\n"), 2, "\n");
  }
  cout << b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}