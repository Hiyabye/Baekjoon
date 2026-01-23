#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline int calc(vector<int> v) {
  while (v.size() > 1) {
    for (int i=1; i<v.size(); i++) {
      v[i-1] += v[i];
    }
    v.pop_back();
  }
  return v[0];
}

void solve(void) {
  int n, f; cin >> n >> f;
  vector<int> v(n);
  for (int i=0; i<n; i++) v[i] = i+1;

  do {
    if (calc(v) == f) break;
  } while (next_permutation(v.begin(), v.end()));

  for (int i=0; i<n; i++) cout << v[i] << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}