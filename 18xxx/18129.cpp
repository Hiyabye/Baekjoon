#include <cctype>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

void solve(void) {
  string s; int k; cin >> s >> k;
  for (char &c : s) c = tolower(c);

  unordered_set<char> us;
  char prev = s[0]; int cnt = 1;
  for (char c : s) {
    if (us.find(c) != us.end()) continue;
    if (c == prev) cnt++;
    else {
      cout << (cnt >= k);
      us.insert(prev);
      prev = c; cnt = 1;
    }
  }
  cout << (cnt >= k);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}