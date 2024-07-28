#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int c; cin >> c;
  int i; cin >> i;
  vector<int> p(i);
  for (int j=0; j<i; j++) cin >> p[j];

  for (int j=0; j<i-1; j++) for (int k=j+1; k<i; k++) {
    if (p[j] + p[k] == c) {
      cout << "Case #" << idx << ": " << j+1 << " " << k+1 << "\n";
      return;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  for (int i=1; i<=n; i++) solve(i);
  return 0;
}