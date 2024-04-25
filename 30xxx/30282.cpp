#include <iostream>
#include <map>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> s(10), hpr(10), hpb(10), mpr(10), mpb(10);
  for (int i=0; i<10; i++) cin >> s[i] >> hpr[i] >> hpb[i] >> mpr[i] >> mpb[i];

  map<pair<int, int>, int> mp;
  for (int i=0; i<10; i++) {
    for (int j=hpr[i]*60+hpb[i]; j<mpr[i]*60+mpb[i]; j++) {
      if (mp.find({s[i], j}) == mp.end()) {
        mp[{s[i], j}] = i + 1;
      } else {
        cout << "NE\n" << mp[{s[i], j}] << " " << i + 1;
        return;
      }
    }
  }

  int ans = 0;
  for (int i=0; i<10; i++) {
    ans += (mpr[i] - hpr[i]) * 60 + (mpb[i] - hpb[i]);
  }
  cout << "TAIP\n" << ans / 60 << " " << ans % 60;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}