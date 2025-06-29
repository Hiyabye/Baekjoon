#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  return count(s.begin(), s.end(), 'O') * 2 >= n;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Yes" : "No");
  return 0;
}