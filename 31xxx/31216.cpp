#include <iostream>
#include <vector>
using namespace std;

vector<int> precompute(int n) {
  vector<bool> check(n+1, true);
  check[0] = check[1] = false;
  for (int i=4; i<=n; i+=2) {
    check[i] = false;
  }

  for (int i=3; i*i<=n; i+=2) {
    if (!check[i]) continue;
    for (int j=i*i; j<=n; j+=i*2) {
      check[j] = false;
    }
  }

  vector<int> prime;
  for (int i=0; i<=n; i++) {
    if (check[i]) prime.push_back(i);
  }

  vector<int> super;
  for (int p : prime) {
    if (p >= prime.size()) break;
    super.push_back(prime[p-1]);
  }
  return super;
}

void solve(const vector<int>& super) {
  int n; cin >> n;

  cout << super[n-1] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> super = precompute(320000);

  int t; cin >> t;
  while (t--) solve(super);
  return 0;
}