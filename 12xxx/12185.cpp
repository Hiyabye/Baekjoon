#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int n; cin >> n;
  vector<int> v(5001, 0);
  while (n--) {
    int a, b; cin >> a >> b;
    for (int i=a; i<=b; i++) v[i]++;
  }

  cout << "Case #" << idx << ": ";

  int p; cin >> p;
  while (p--) {
    int c; cin >> c;
    cout << v[c] << " ";
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}