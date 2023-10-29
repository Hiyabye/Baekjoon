#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> a(10), b(10);
  for (int i=0; i<10; i++) cin >> a[i];
  for (int i=0; i<10; i++) cin >> b[i];

  int ascore = 0, bscore = 0;
  for (int i=0; i<10; i++) {
    if (a[i] > b[i]) ascore += 3;
    else if (a[i] < b[i]) bscore += 3;
    else { ascore++; bscore++; }
  }

  cout << ascore << " " << bscore << "\n";
  if (ascore > bscore) {
    cout << "A";
    return;
  } else if (ascore < bscore) {
    cout << "B";
    return;
  }

  for (int i=9; i>=0; i--) {
    if (a[i] > b[i]) {
      cout << "A";
      return;
    } else if (a[i] < b[i]) {
      cout << "B";
      return;
    }
  }
  cout << "D";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}