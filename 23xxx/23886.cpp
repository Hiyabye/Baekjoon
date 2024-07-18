#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool solve(void) {
  string x; cin >> x;
  int n = x.length();

  vector<int> v(n-1);
  for (int i=0; i<n-1; i++) {
    if (x[i] == x[i+1]) return false;
    v[i] = x[i+1] - x[i];
  }
  
  if (v[0] < 0 || v[n-2] > 0) return false;
  for (int i=1; i<n-1; i++) {
    if (v[i] * v[i-1] < 0) continue;
    if (v[i] != v[i-1]) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "ALPSOO" : "NON ALPSOO");
  return 0;
}