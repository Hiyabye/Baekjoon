#include <iostream>
#include <unordered_set>
using namespace std;

int sum(int n) {
  int ret = 0;
  while (n) ret += n % 10, n /= 10;
  return ret;
}

int factor(int n) {
  unordered_set<int> s;
  for (int i=2; i*i<=n; i++) {
    while (!(n % i)) s.insert(i), n /= i;
  }
  if (n > 1) s.insert(n);
  return s.size();
}

void solve(void) {
  int n; cin >> n;

  bool a = (n >= 4 && n != 5 && sum(n) & 1);
  bool b = (n == 2 || n == 4 || (n != 1 && !(factor(n) & 1)));

  cout << ((a ^ b) ? (a ? 1 : 2) : (!a ? 3 : 4));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}