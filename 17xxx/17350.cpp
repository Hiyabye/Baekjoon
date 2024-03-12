#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;

  bool ans = false;
  while (n--) {
    string s; cin >> s;
    if (s == "anj") ans = true;
  }
  cout << (ans ? "뭐야;" : "뭐야?");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}