#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<int> cnt(1001, 0);
  for (int i=0; i<n; i++) {
    int a, b; cin >> a >> b;
    for (int j=a; j<=b; j++) cnt[j]++;
  }

  for (int i=0; i<=1000; i++) {
    if (cnt[i] == n) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "gunilla has a point" : "edward is right");
  return 0;
}