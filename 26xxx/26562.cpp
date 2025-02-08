#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
using namespace std;

unordered_map<string, int> mp = {
  {"Franklin", 100},
  {"Grant", 50},
  {"Jackson", 20},
  {"Hamilton", 10},
  {"Lincoln", 5},
  {"Washington", 1}
};

void solve(void) {
  string s; getline(cin, s);
  stringstream ss(s); string t;

  int ans = 0;
  while (ss >> t) {
    ans += mp[t];
  }
  cout << "$" << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n; cin.ignore();
  while (n--) solve();
  return 0;
}