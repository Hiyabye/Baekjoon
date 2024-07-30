#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  vector<int> v(12);
  for (int i=0; i<12; i++) cin >> v[i];
  sort(v.begin(), v.end());
  if (v[0] == 0 && v[11] == 0) return false;

  for (int i=0; i<12; i+=4) {
    if (v[i] == v[i+1] && v[i+1] == v[i+2] && v[i+2] == v[i+3]) continue;
    cout << "no\n";
    return true;
  }
  cout << "yes\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}