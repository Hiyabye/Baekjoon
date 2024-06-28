#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  cout << (s <= "2023-09-16" ? "GOOD" : "TOO LATE");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}