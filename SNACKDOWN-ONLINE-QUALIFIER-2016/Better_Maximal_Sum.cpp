/*
  id:10241501
  SnackDown Online Qualifier 2016  problem 2 "Better_Maximal_Sum"
*/


#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

#define max(a, b) (((a) > (b)) ? (a) : (b))

const int MAXN = 100001;
long long L[MAXN];
long long R[MAXN];
int a[MAXN];

int main()
{
  int T;
  scanf("%d", &T);
  while (T--)
  {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i)
      scanf("%d", &a[i]);

    long long ret = a[0];
    L[0] = a[0];
    for (int i = 1; i < N; ++i)
    {
      L[i] = max(L[i - 1] + a[i], a[i]);
      ret = max(L[i], ret);
    }
    R[N - 1] = a[N - 1];
    for (int i = N - 2; i >= 0; --i)
      R[i] = max(R[i + 1] + a[i], a[i]);

    for (int i = 1; i < N - 1; ++i)
      ret = max(ret, L[i - 1] + R[i + 1]);
    printf("%Ld\n", ret);
  }
}
