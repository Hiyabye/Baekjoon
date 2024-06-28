#include <iostream>
#include <vector>
using namespace std;

vector<bool> prime;

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

void solve(void) {
  int n;
  cin >> n;

  if (n < 8) {
    cout << -1;
    return;
  }

  if (n % 2 == 0) {
    cout << "2 2 ";
    n -= 4;
  } else {
    cout << "2 3 ";
    n -= 5;
  }

  for (int i=2; i<=n/2; i++) {
    if (prime[i] && prime[n-i]) {
      cout << i << " " << n-i;
      return;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  prime = sieve(1000000);
  solve();
  return 0;
}