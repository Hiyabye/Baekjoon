#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string m; cin >> m;
  if (m == "0") return false;

  char c = *max_element(m.begin(), m.end());
  int idx = m.find_first_of(c);
  if ((c - '0') & 1) m[idx] = '0';
  else m[idx] = (m[idx] - '0' + 4) % 10 + '0';
  while (m[0] == '0') m.erase(0, 1);
  if (m.empty()) m = "0";
  cout << m << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}