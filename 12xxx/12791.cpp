#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int s, e; cin >> s >> e;
  int year[] = {1967, 1969, 1970, 1971, 1972, 1973, 1973, 1974, 1975, 1976, 1977, 1977, 1979, 1980, 1983, 1984, 1987, 1993, 1995, 1997, 1999, 2002, 2003, 2013, 2016, 2019};
  string album[] = {"DavidBowie", "SpaceOddity", "TheManWhoSoldTheWorld", "HunkyDory", "TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars", "AladdinSane", "PinUps", "DiamondDogs", "YoungAmericans", "StationToStation", "Low", "Heroes", "Lodger", "ScaryMonstersAndSuperCreeps", "LetsDance", "Tonight", "NeverLetMeDown", "BlackTieWhiteNoise", "1.Outside", "Earthling", "Hours", "Heathen", "Reality", "TheNextDay", "BlackStar", "NoPlan"};

  int n = sizeof(year) / sizeof(int);
  int cnt = 0;
  for (int i=0; i<n; i++) {
    if (s <= year[i] && year[i] <= e) cnt++;
  }

  cout << cnt << "\n";
  for (int i=0; i<n; i++) {
    if (s <= year[i] && year[i] <= e) cout << year[i] << " " << album[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  int q; cin >> q;
  while (q--) solve();
  return 0;
}