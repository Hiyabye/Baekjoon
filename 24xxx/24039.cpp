#include <iostream>
#include <vector>
using namespace std;

vector<int> precompute(void) {
  vector<int> prime;
  for (int i=2; i<=103; i++) {
    bool flag = true;
    for (int j=2; j*j<=i; j++) {
      if (i % j) continue;
      flag = false;
      break;
    }
    if (flag) prime.push_back(i);
  }

  vector<int> special;
  for (int i=1; i<prime.size(); i++) {
    special.push_back(prime[i] * prime[i-1]);
  }
  return special;
}

int solve(vector<int>& special) {
  int n; cin >> n;

  for (int i=0; i<special.size(); i++) {
    if (n < special[i]) return special[i];
  }
  return -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> special = precompute();
  cout << solve(special);
  return 0;
}