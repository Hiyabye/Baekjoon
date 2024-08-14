#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int c, n; cin >> c >> n;
  vector<int> m(c);
  for (int i=0; i<c; i++) cin >> m[i];
  
  while (n--) {
    int b; cin >> b; b--;
    m[b]--;
  }
  cout << "Data Set " << idx << ":\n" << *max_element(m.begin(), m.end()) << "\n\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int k; cin >> k;
  for (int i=1; i<=k; i++) solve(i);
  return 0;
}