#include <iostream>
#include <vector>
using namespace std;

vector<bool> precompute(int n) {
  vector<bool> prime(n+1, true);
  prime[0] = prime[1] = false;
  for (int i=4; i<=n; i+=2) {
    prime[i] = false;
  }

  for (int i=3; i*i<=n; i+=2) {
    if (!prime[i]) continue;
    for (int j=i*i; j<=n; j+=i*2) {
      prime[j] = false;
    }
  }
  return prime;
}

bool check(int x, const vector<bool> &p) {
  vector<int> f;
  for (int i=2; i*i<=x; i++) {
    if (x % i) continue;
    while (!(x % i)) f.push_back(i), x /= i;
  }
  if (x > 1) f.push_back(x);

  return p[f.size()];
}

void solve(const vector<bool> &p) {
  int a, b; cin >> a >> b;

  int ans = 0;
  for (int i=a; i<=b; i++) {
    if (check(i, p)) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<bool> p = precompute(100000);
  solve(p);
  return 0;
}