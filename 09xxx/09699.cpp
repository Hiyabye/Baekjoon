#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  vector<int> v(5);
  for (int i=0; i<5; i++) cin >> v[i];

  cout << "Case #" << idx << ": " << *max_element(v.begin(), v.end()) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}