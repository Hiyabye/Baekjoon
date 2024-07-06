#include <iostream>
#include <set>
#include <vector>
using namespace std;

int n, m;
vector<int> h;
vector<bool> prime;
set<int> ans;

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

void backtrack(int cnt, int idx, int sum) {
  if (cnt == m) {
    if (prime[sum]) ans.insert(sum);
    return;
  }

  for (int i=idx; i<n-m+cnt+1; i++) {
    backtrack(cnt+1, i+1, sum+h[i]);
  }
}

void solve(void) {
  cin >> n >> m;
  h.resize(n);
  for (int i=0; i<n; i++) cin >> h[i];

  backtrack(0, 0, 0);

  if (ans.empty()) ans.insert(-1);
  for (int a : ans) cout << a << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  prime = sieve(9000);
  solve();
  return 0;
}