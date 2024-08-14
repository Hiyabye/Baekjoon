#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

vector<bool> sieve(int n) {
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

bool check(int n) {
  unordered_set<int> s;
  while (s.find(n) == s.end()) {
    s.insert(n);
    if (n == 1) return true;
    int nxt = 0;
    while (n) {
      nxt += (n % 10) * (n % 10);
      n /= 10;
    }
    n = nxt;
  }
  return false;
}

void solve(void) {
  int n; cin >> n;

  vector<bool> p = sieve(n);
  for (int i=1; i<=n; i++) {
    if (!p[i]) continue;
    if (check(i)) cout << i << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}