#include <iostream>
#include <vector>
using namespace std;

vector<int> sieve(int n) {
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

  vector<int> ret;
  ret.push_back(2);
  for (int i=3; i<=n; i+=2) {
    if (prime[i]) ret.push_back(i);
  }
  return ret;
}

void solve(vector<int>& prime) {
  int k; cin >> k; k--;

  cout << prime[k];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> prime = sieve(7368787);
  solve(prime);
  return 0;
}