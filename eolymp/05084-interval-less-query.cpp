// Problem:   Interval Less Query (eolymp 5084)
// Link:      https://eolymp.com/problems/5084
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-08-15 18:57 UTC
// Verdict:   Accepted

#include <cstdio>

#include <vector>

#include <set>

#include <algorithm>

#include <cmath>

using namespace std;

 

vector<int> a;

vector<vector<int> > b;

int i, n, q, len, blocks, l, r, x;

 

int main()

{

  scanf("%d", &n);

  a.resize(n);

  len = sqrt(n) + 1;

  blocks = ceil((double)n / len);

  b.resize(len);

 

  for (i = 0;i < n; i++)

  {

    scanf("%d", &a[i]);

    b[i / len].push_back(a[i]);

  }

 

  scanf("%d", &q);

  for (i = 0;i < blocks; i++)

    sort(b[i].begin(), b[i].end());

 

  while (q--)

  {

    scanf("%d %d %d", &l, &r, &x);

    l--; r--;

    int res = 0;

    int c_l = l / len, c_r = r / len;

    if (c_l == c_r)

    {

      for (i = l; i <= r; i++)

        if (a[i] < x) res++;

    }

    else

    {

      for (i = l; i <= (c_l + 1)*len - 1; i++)

        if (a[i] < x) res++;

 

      for (i = c_l + 1; i <= c_r - 1; i++)

        res += lower_bound(b[i].begin(), b[i].end(), x) - b[i].begin();

 

      for (i = c_r * len; i <= r; i++)

        if (a[i] < x) res++;

    }

    printf("%d\n", res);

  }

  return 0;

}
