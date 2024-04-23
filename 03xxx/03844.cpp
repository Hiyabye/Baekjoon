#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

vector<bool> precompute(int n) {
  vector<bool> p(n+1, true);
  p[0] = p[1] = false;
  for (int i=4; i<=n; i+=2) {
    p[i] = false;
  }

  for (int i=3; i*i<=n; i+=2) {
    if (!p[i]) continue;
    for (int j=i*i; j<=n; j+=i*2) {
      p[j] = false;
    }
  }
  return p;
}

long long power(long long base, long long exp) {
  long long ret = 1;
  while (exp) {
    if (exp & 1) ret = ret * base % MOD;
    base = base * base % MOD;
    exp >>= 1;
  }
  return ret;
}

bool solve(const vector<bool> &p) {
  int n; cin >> n;
  if (n == 0) return false;

  long long ans = 1;
  for (int i=2; i<=n; i++) {
    if (!p[i]) continue;
    int k = 0;
    for (int j=n; j; j/=i) k += j / i;
    if (k & 1) k--;
    ans = ans * power(i, k) % MOD;
  }
  cout << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<bool> p = precompute(10000000);
  while (solve(p));
  return 0;
}