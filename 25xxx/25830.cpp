#include <iostream>
#include <string>
using namespace std;

inline string format(int n) {
  return (n < 10 ? "0" : "") + to_string(n);
}

void solve(void) {
  string s; cin >> s;

  int ans = stoi(s.substr(0, 2)) * 3540 + stoi(s.substr(3, 2)) * 59;
  cout << format(ans / 3600) << ":" << format(ans % 3600 / 60) << ":" << format(ans % 60);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}