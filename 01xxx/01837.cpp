#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<bool> precompute(void) {
  vector<bool> prime(1000001, true);
  prime[0] = prime[1] = false;
  for (int i=4; i<=1000000; i+=2) {
    prime[i] = false;
  }

  for (int i=3; i*i<=1000000; i+=2) {
    if (!prime[i]) continue;
    for (int j=i*i; j<=1000000; j+=i*2) {
      prime[j] = false;
    }
  }
  return prime;
}

void solve(vector<bool> &prime) {
  string p; int k; cin >> p >> k;

  for (int i=2; i<k; i++) {
    if (!prime[i]) continue;
    int r = 0;
    for (char c : p) r = (10 * r + (c - '0')) % i;
    if (r) continue;
    cout << "BAD " << i;
    return;
  }
  cout << "GOOD";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  vector<bool> prime = precompute();
  solve(prime);
  return 0;
}