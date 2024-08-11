#include <iostream>
#include <string>
using namespace std;

int solve(void) {
  string s; int n; cin >> s >> n;

  if (n == 1) return 0;
  if (s == "residential") return (n + 4) / 5;
  if (s == "commercial") return (n + 6) / 7;
  return (n + 3) / 4;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}