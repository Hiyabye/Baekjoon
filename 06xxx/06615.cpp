#include <iostream>
#include <vector>
using namespace std;

inline vector<long long> calc(long long n) {
  vector<long long> ret;
  while (n != 1) {
    ret.push_back(n);
    n = (n & 1 ? 3 * n + 1 : n / 2);
  }
  ret.push_back(1);
  return ret;
}

bool solve(void) {
  long long a, b; cin >> a >> b;
  if (a == 0 && b == 0) return false;

  long long ans;
  vector<long long> c = calc(a), d = calc(b);
  while (!c.empty() && !d.empty() && c.back() == d.back()) {
    ans = c.back(); c.pop_back(); d.pop_back();
  }

  cout << a << " needs " << c.size() << " steps, ";
  cout << b << " needs " << d.size() << " steps, ";
  cout << "they meet at " << ans << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}