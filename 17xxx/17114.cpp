#include <iostream>
#include <vector>
#include <queue>
using namespace std;

typedef struct Coord {
  int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11;
} Coord;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int m, n, o, p, q, r, s, t, u, v, w;
  cin >> m >> n >> o >> p >> q >> r >> s >> t >> u >> v >> w;

  vector<int> a(m * n * o * p * q * r * s * t * u * v * w);
  queue<Coord> c;
  for (int a1=0; a1<w; a1++) {
    for (int a2=0; a2<v; a2++) {
      for (int a3=0; a3<u; a3++) {
        for (int a4=0; a4<t; a4++) {
          for (int a5=0; a5<s; a5++) {
            for (int a6=0; a6<r; a6++) {
              for (int a7=0; a7<q; a7++) {
                for (int a8=0; a8<p; a8++) {
                  for (int a9=0; a9<o; a9++) {
                    for (int a10=0; a10<n; a10++) {
                      for (int a11=0; a11<m; a11++) {
                        cin >> a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11];
                        if (a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] == 1) {
                          Coord tmp = {a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11};
                          c.push(tmp);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }

  while (!c.empty()) {
    Coord cur = c.front();
    c.pop();

    int a1 = cur.a1;
    int a2 = cur.a2;
    int a3 = cur.a3;
    int a4 = cur.a4;
    int a5 = cur.a5;
    int a6 = cur.a6;
    int a7 = cur.a7;
    int a8 = cur.a8;
    int a9 = cur.a9;
    int a10 = cur.a10;
    int a11 = cur.a11;

    if (a1 > 0 && a[((((((((((a1-1)*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] == 0) {
      a[((((((((((a1-1)*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] = a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] + 1;
      Coord tmp = {a1-1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11};
      c.push(tmp);
    }
    if (a1 < w-1 && a[((((((((((a1+1)*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] == 0) {
      a[((((((((((a1+1)*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] = a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] + 1;
      Coord tmp = {a1+1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11};
      c.push(tmp);
    }
    if (a2 > 0 && a[(((((((((a1*v+(a2-1))*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] == 0) {
      a[(((((((((a1*v+(a2-1))*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] = a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] + 1;
      Coord tmp = {a1, a2-1, a3, a4, a5, a6, a7, a8, a9, a10, a11};
      c.push(tmp);
    }
    if (a2 < v-1 && a[(((((((((a1*v+(a2+1))*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] == 0) {
      a[(((((((((a1*v+(a2+1))*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] = a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] + 1;
      Coord tmp = {a1, a2+1, a3, a4, a5, a6, a7, a8, a9, a10, a11};
      c.push(tmp);
    }
    if (a3 > 0 && a[(((((((((a1*v+a2)*u+(a3-1))*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] == 0) {
      a[(((((((((a1*v+a2)*u+(a3-1))*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] = a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] + 1;
      Coord tmp = {a1, a2, a3-1, a4, a5, a6, a7, a8, a9, a10, a11};
      c.push(tmp);
    }
    if (a3 < u-1 && a[(((((((((a1*v+a2)*u+(a3+1))*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] == 0) {
      a[(((((((((a1*v+a2)*u+(a3+1))*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] = a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] + 1;
      Coord tmp = {a1, a2, a3+1, a4, a5, a6, a7, a8, a9, a10, a11};
      c.push(tmp);
    }
    if (a4 > 0 && a[(((((((((a1*v+a2)*u+a3)*t+(a4-1))*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] == 0) {
      a[(((((((((a1*v+a2)*u+a3)*t+(a4-1))*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] = a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] + 1;
      Coord tmp = {a1, a2, a3, a4-1, a5, a6, a7, a8, a9, a10, a11};
      c.push(tmp);
    }
    if (a4 < t-1 && a[(((((((((a1*v+a2)*u+a3)*t+(a4+1))*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] == 0) {
      a[(((((((((a1*v+a2)*u+a3)*t+(a4+1))*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] = a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] + 1;
      Coord tmp = {a1, a2, a3, a4+1, a5, a6, a7, a8, a9, a10, a11};
      c.push(tmp);
    }
    if (a5 > 0 && a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+(a5-1))*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] == 0) {
      a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+(a5-1))*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] = a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] + 1;
      Coord tmp = {a1, a2, a3, a4, a5-1, a6, a7, a8, a9, a10, a11};
      c.push(tmp);
    }
    if (a5 < s-1 && a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+(a5+1))*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] == 0) {
      a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+(a5+1))*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] = a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] + 1;
      Coord tmp = {a1, a2, a3, a4, a5+1, a6, a7, a8, a9, a10, a11};
      c.push(tmp);
    }
    if (a6 > 0 && a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+(a6-1))*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] == 0) {
      a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+(a6-1))*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] = a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] + 1;
      Coord tmp = {a1, a2, a3, a4, a5, a6-1, a7, a8, a9, a10, a11};
      c.push(tmp);
    }
    if (a6 < r-1 && a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+(a6+1))*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] == 0) {
      a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+(a6+1))*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] = a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] + 1;
      Coord tmp = {a1, a2, a3, a4, a5, a6+1, a7, a8, a9, a10, a11};
      c.push(tmp);
    }
    if (a7 > 0 && a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+(a7-1))*p+a8)*o+a9)*n+a10)*m+a11] == 0) {
      a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+(a7-1))*p+a8)*o+a9)*n+a10)*m+a11] = a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] + 1;
      Coord tmp = {a1, a2, a3, a4, a5, a6, a7-1, a8, a9, a10, a11};
      c.push(tmp);
    }
    if (a7 < q-1 && a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+(a7+1))*p+a8)*o+a9)*n+a10)*m+a11] == 0) {
      a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+(a7+1))*p+a8)*o+a9)*n+a10)*m+a11] = a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] + 1;
      Coord tmp = {a1, a2, a3, a4, a5, a6, a7+1, a8, a9, a10, a11};
      c.push(tmp);
    }
    if (a8 > 0 && a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+(a8-1))*o+a9)*n+a10)*m+a11] == 0) {
      a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+(a8-1))*o+a9)*n+a10)*m+a11] = a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] + 1;
      Coord tmp = {a1, a2, a3, a4, a5, a6, a7, a8-1, a9, a10, a11};
      c.push(tmp);
    }
    if (a8 < p-1 && a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+(a8+1))*o+a9)*n+a10)*m+a11] == 0) {
      a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+(a8+1))*o+a9)*n+a10)*m+a11] = a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] + 1;
      Coord tmp = {a1, a2, a3, a4, a5, a6, a7, a8+1, a9, a10, a11};
      c.push(tmp);
    }
    if (a9 > 0 && a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+(a9-1))*n+a10)*m+a11] == 0) {
      a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+(a9-1))*n+a10)*m+a11] = a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] + 1;
      Coord tmp = {a1, a2, a3, a4, a5, a6, a7, a8, a9-1, a10, a11};
      c.push(tmp);
    }
    if (a9 < o-1 && a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+(a9+1))*n+a10)*m+a11] == 0) {
      a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+(a9+1))*n+a10)*m+a11] = a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] + 1;
      Coord tmp = {a1, a2, a3, a4, a5, a6, a7, a8, a9+1, a10, a11};
      c.push(tmp);
    }
    if (a10 > 0 && a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+(a10-1))*m+a11] == 0) {
      a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+(a10-1))*m+a11] = a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] + 1;
      Coord tmp = {a1, a2, a3, a4, a5, a6, a7, a8, a9, a10-1, a11};
      c.push(tmp);
    }
    if (a10 < n-1 && a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+(a10+1))*m+a11] == 0) {
      a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+(a10+1))*m+a11] = a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] + 1;
      Coord tmp = {a1, a2, a3, a4, a5, a6, a7, a8, a9, a10+1, a11};
      c.push(tmp);
    }
    if (a11 > 0 && a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11-1] == 0) {
      a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11-1] = a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] + 1;
      Coord tmp = {a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11-1};
      c.push(tmp);
    }
    if (a11 < m-1 && a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11+1] == 0) {
      a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11+1] = a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] + 1;
      Coord tmp = {a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11+1};
      c.push(tmp);
    }
  }

  int max = 0;
  for (int a1=0; a1<w; a1++) {
    for (int a2=0; a2<v; a2++) {
      for (int a3=0; a3<u; a3++) {
        for (int a4=0; a4<t; a4++) {
          for (int a5=0; a5<s; a5++) {
            for (int a6=0; a6<r; a6++) {
              for (int a7=0; a7<q; a7++) {
                for (int a8=0; a8<p; a8++) {
                  for (int a9=0; a9<o; a9++) {
                    for (int a10=0; a10<n; a10++) {
                      for (int a11=0; a11<m; a11++) {
                        if (a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11] == 0) {
                          cout << "-1\n";
                          return 0;
                        }
                        if (max < a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11]) {
                          max = a[(((((((((a1*v+a2)*u+a3)*t+a4)*s+a5)*r+a6)*q+a7)*p+a8)*o+a9)*n+a10)*m+a11];
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  cout << max-1 << "\n";
  return 0;
}