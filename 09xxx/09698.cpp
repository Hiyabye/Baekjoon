#include <iostream>
using namespace std;

void solve(int idx) {
  int h, m; cin >> h >> m;

  m -= 45;
  if (m < 0) m += 60, h--;
  if (h < 0) h += 24;
  
  cout << "Case #" << idx << ": " << h << " " << m << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}