#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> a;

void post(int l, int r) {
  if (l >= r) return;
  if (l+1 == r) {
    cout << a[l] << "\n";
    return;
  }

  int m = l+1;
  while (m < r && a[l] > a[m]) m++;
  post(l+1, m);
  post(m, r);
  cout << a[l] << "\n";
}

void solve(void) {
  while (cin >> n) {
    a.push_back(n);
  }
  post(0, a.size());
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}