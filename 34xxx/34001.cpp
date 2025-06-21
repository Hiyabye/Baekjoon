#include <iostream>
using namespace std;

int a[6][3] = {
  {200, 210, 220},
  {210, 220, 225},
  {220, 225, 230},
  {225, 230, 235},
  {230, 235, 245},
  {235, 245, 250}
};

int b[7][3] = {
  {260, 265, 270},
  {265, 270, 275},
  {270, 275, 280},
  {275, 280, 285},
  {280, 285, 290},
  {285, 290, 295},
  {290, 295, 300}
};

void solve(void) {
  int l; cin >> l;

  for (int i=0; i<6; i++) {
    if (l < a[i][0]) cout << 0;
    else if (l < a[i][1]) cout << 500;
    else if (l < a[i][2]) cout << 300;
    else cout << 100;
    cout << " ";
  }
  cout << "\n";
  for (int i=0; i<7; i++) {
    if (l < b[i][0]) cout << 0;
    else if (l < b[i][1]) cout << 500;
    else if (l < b[i][2]) cout << 300;
    else cout << 100;
    cout << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}