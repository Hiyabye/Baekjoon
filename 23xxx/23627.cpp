#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; cin >> s;

  return s.length() >= 5 && s.substr(s.length() - 5) == "driip";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "cute" : "not cute");
  return 0;
}