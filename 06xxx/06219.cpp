#include <iostream>
#include <vector>
using namespace std;

vector<bool> prime(4000001, true);

void precompute(void) {
  prime[0] = prime[1] = false;
  for (int i=4; i<=4000000; i+=2) {
    prime[i] = false;
  }

  for (int i=3; i*i<=4000000; i+=2) {
    if (!prime[i]) continue;
    for (int j=i*i; j<=4000000; j+=i*2) {
      prime[j] = false;
    }
  }
}

int count(int n, int d) {
  int cnt = 0;
  while (n) {
    if (n % 10 == d) cnt++;
    n /= 10;
  }
  return cnt;
}

void solve(void) {
  int a, b, d; cin >> a >> b >> d;

  int ans = 0;
  for (int i=a; i<=b; i++) {
    if (prime[i] && count(i, d)) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  precompute();
  solve();
  return 0;
}