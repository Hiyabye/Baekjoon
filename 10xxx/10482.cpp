#include <iostream>
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

void solve(const vector<bool> &p) {
  int x; cin >> x;

  vector<int> ans;
  for (int i=2; i<=x/2; i++) {
    if (p[i] && p[x-i]) ans.push_back(i);
  }

  cout << x << " has " << ans.size() << " representation(s)\n";
  for (int i=0; i<ans.size(); i++) {
    cout << ans[i] << "+" << x-ans[i] << "\n";
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<bool> p = sieve(32000);

  int n; cin >> n;
  while (n--) solve(p);
  return 0;
}