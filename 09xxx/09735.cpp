#include <bits/stdc++.h>
#define int128 __int128
using namespace std;

bool f(int128 a, int128 b, int128 c, int128 d, int128 x) {
  return a*x*x*x + b*x*x + c*x + d == 0;
}

void solve(void) {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  double x;
  for (int i=-1000000; i<=1000000; i++) {
    if (!f(a, b, c, d, i)) continue;
    x = i;
    break;
  }

  set<double> s;
  s.insert(x);
  s.insert((-(b+a*x)+sqrt((b+a*x)*(b+a*x)-4*a*(c+b*x+a*x*x)))/(2*a));
  s.insert((-(b+a*x)-sqrt((b+a*x)*(b+a*x)-4*a*(c+b*x+a*x*x)))/(2*a));

  vector<double> ans;
  for (auto it=s.begin(); it!=s.end(); it++) ans.push_back(*it);
  sort(ans.begin(), ans.end());
  for (auto it=ans.begin(); it!=ans.end(); it++) cout << fixed << setprecision(4) << *it << " ";
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int n;
  cin >> n;
  while (n--) solve();
  return 0;
}