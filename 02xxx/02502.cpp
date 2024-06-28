#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int> > v(31);

void precompute(void) {
  v[1] = make_pair(1, 0);
  v[2] = make_pair(0, 1);
  for (int i=3; i<=30; i++) {
    v[i].first = v[i-1].first + v[i-2].first;
    v[i].second = v[i-1].second + v[i-2].second;
  }
}

void solve(void) {
  int d, k; cin >> d >> k;

  int b = 1;
  while (1) {
    for (int a=1; a<=b; a++) {
      if (a*v[d].first + b*v[d].second == k) {
        cout << a << "\n" << b;
        return;
      }
    }
    b++;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  precompute();
  solve();
  return 0;
}