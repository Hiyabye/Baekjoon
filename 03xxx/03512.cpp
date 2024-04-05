#include <iomanip>
#include <iostream>
#include <string>
#include <map>
using namespace std;

void solve(void) {
  int n, c; cin >> n >> c;
  map<string, double> m;
  while (n--) {
    int a; string t; cin >> a >> t;
    m[t] += a;
  }

  double sum = 0;
  for (auto [k, v] : m) sum += v;
  cout << sum << "\n" << m["bedroom"] << "\n";
  cout << fixed << setprecision(7) << c * (sum - m["balcony"] / 2);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}