#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

void solve(void) {
  string s; cin >> s;
  unordered_set<char> us;
  for (char c : s) us.insert(c);

  cout << us.size() - 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}