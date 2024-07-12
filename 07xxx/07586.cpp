#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

unordered_map<char, int> service = {
  {'L', 120}, {'S', 150}, {'B', 150}, {'N', 40},
  {'C', 160}, {'D', 100}, {'R', 100}, {'O', 100}
};

bool solve(void) {
  string s; cin >> s;
  if (s == "#") return false;

  unordered_map<string, int> mp;
  string a; cin >> a;
  while (a != "00A") {
    char b; cin >> b;
    mp[a] += service[b];
    cin >> a;
  }

  int ans = 0;
  for (auto& [_, v] : mp) {
    if (v >= 200) ans++;
  }
  cout << s << " " << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}