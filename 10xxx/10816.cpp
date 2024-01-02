#include <iostream>
#include <map>
using namespace std;

void solve(void) {
  int n, m, tmp;
  map<int, int> a;

  cin >> n;
  for (int i=0; i<n; i++) {
    cin >> tmp;
    a[tmp]++;
  }

  cin >> m;
  for (int i=0; i<m; i++) {
    cin >> tmp;
    cout << a[tmp] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}