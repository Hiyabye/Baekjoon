#include <iostream>
#include <set>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  set<char> us;
  for (char c='A'; c<='Z'; c++) us.insert(c);
  for (char c : s) {
    if (us.find(c) != us.end()) us.erase(c);
  }

  if (us.empty()) cout << "Alphabet Soup!";
  else for (char c : us) cout << c;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}