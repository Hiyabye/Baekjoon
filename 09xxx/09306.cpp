#include <iostream>
#include <string>
using namespace std;

void solve(int idx) {
  string f; cin >> f;
  string l; cin >> l;

  cout << "Case " << idx << ": " << l << ", " << f << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}