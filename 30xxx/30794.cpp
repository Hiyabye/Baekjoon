#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int lv; string s; cin >> lv >> s;

  cout << (s == "miss" ? 0 : s == "bad" ? 200 : s == "cool" ? 400 : s == "great" ? 600 : 1000) * lv;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}