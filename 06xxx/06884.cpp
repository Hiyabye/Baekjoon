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
  int n; cin >> n;
  vector<int> a(n+1, 0), b(n+1, 0);
  for (int i=1; i<=n; i++) cin >> a[i];
  for (int i=1; i<=n; i++) b[i] = b[i-1] + a[i];

  for (int i=2; i<=n; i++) {
    for (int j=i; j<=n; j++) {
      if (p[b[j]-b[j-i]]) {
        cout << "Shortest primed subsequence is length " << i << ":";
        for (int k=j-i+1; k<=j; k++) cout << " " << a[k];
        cout << "\n";
        return;
      }
    }
  }
  cout << "This sequence is anti-primed.\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<bool> p = sieve(100000000);

  int t; cin >> t;
  while (t--) solve(p);
  return 0;
}