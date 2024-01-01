#include <bits/stdc++.h>
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

void solve(vector<bool> &prime) {
  int n, x, first;
  cin >> n;
  vector<int> a, b;
  
  cin >> first;
  if (first % 2 == 1) a.push_back(first);
  else b.push_back(first);
  for (int i=1; i<n; i++) {
    cin >> x;
    if (x % 2 == 1) a.push_back(x);
    else b.push_back(x);
  }

  if (a.size() != b.size()) {
    cout << "-1";
    return;
  }

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  vector<vector<int> > adj(a.size());
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  vector<bool> prime = sieve(2000);
  solve(prime);
  return 0;
}