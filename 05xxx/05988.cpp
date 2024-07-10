#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string k; cin >> k;

  return (k.back() - '0') & 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) cout << (solve() ? "odd" : "even") << "\n";
  return 0;
}