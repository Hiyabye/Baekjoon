#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == -1) return false;

  vector<pair<int, string>> v;
  while (n--) {
    int a, b, c; string d; cin >> a >> b >> c >> d;
    v.push_back({a * b * c, d});
  }
  cout << max_element(v.begin(), v.end())->second << " took clay from ";
  cout << min_element(v.begin(), v.end())->second << ".\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}