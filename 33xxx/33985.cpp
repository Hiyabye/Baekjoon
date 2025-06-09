#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  string t; cin >> t;

  return t.front() == 'A' && t.back() == 'B';
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Yes" : "No");
  return 0;
}