#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == -1) return false;

  vector<int> v;
  for (int i=1; i<n; i++) {
    if (n % i) continue;
    v.push_back(i);
  }

  if (accumulate(v.begin(), v.end(), 0) != n) {
    cout << n << " is NOT perfect.\n";
    return true;
  }

  cout << n << " = ";
  for (int i=0; i<v.size(); i++) {
    cout << v[i];
    if (i != v.size()-1) cout << " + ";
  }
  cout << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}