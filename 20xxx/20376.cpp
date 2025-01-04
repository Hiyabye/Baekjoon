#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

void solve(void) {
  unordered_set<string> us; string s;
  while (getline(cin, s)) {
    us.insert(s.substr(11));
  }
  cout << us.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}