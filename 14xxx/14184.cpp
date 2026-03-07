#include <algorithm>
#include <iostream>
#include <map>
#include <tuple>
#include <vector>
using namespace std;

struct Logo {
  int id, a, b, c;
};

inline bool cmp(const Logo &x, const Logo &y) {
  if (x.a != y.a) return x.a > y.a;
  if (x.b != y.b) return x.b > y.b;
  if (x.c != y.c) return x.c > y.c;
  return x.id < y.id;
}

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  map<int, tuple<int, int, int>> mp;
  while (n--) {
    int d; cin >> d;
    for (int i=1; i<=d; i++) {
      int x; cin >> x;
      auto &[a, b, c] = mp[x];
      a += 4 - i;
      if (i == 1) b++;
      else if (i == 2) c++;
    }
  }

  vector<Logo> ans;
  for (const auto &[id, t] : mp) {
    const auto &[a, b, c] = t;
    ans.push_back({id, a, b, c});
  }
  sort(ans.begin(), ans.end(), cmp);

  cout << ans[0].id;
  for (int i=1; i<ans.size(); i++) {
    if (ans[i].a != ans[0].a || ans[i].b != ans[0].b || ans[i].c != ans[0].c) break;
    cout << " " << ans[i].id;
  }
  cout << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}