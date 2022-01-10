#Problem Link : https://www.codechef.com/JAN221C/problems/RIFFLES
#Problem Code : RIFFLES
#This is the partial solution of the problem RIFFLES .

#include <iostream>
using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{
  if (r >= l)
  {
    int mid = l + (r - l) / 2;
    if (arr[mid] == x)
      return mid;
    if (arr[mid] > x)
      return binarySearch(arr, l, mid - 1, x);
    return binarySearch(arr, mid + 1, r, x);
  }
  return -1;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    int arr[n + 1] = {};
    int temp[n + 1] = {};
    for (int i = 1; i <= n; i++)
    {
      arr[i] = i;
    }
    int j = 1;
    int d = n / 2 + 1;
    for (int i = 1; i <= n; i++)
    {
      if (i % 2 != 0)
      {
        temp[j] = arr[i];
        j++;
      }
      else
      {
        temp[d] = arr[i];
        d++;
      }
    }
    int count = 1, index = 2, element;
    while (arr[2] != temp[index])
    {
      element = temp[index];
      index = binarySearch(arr, 1, n + 1, element);
      count++;
    }
    int l = k % count;
    int x = (n - 2) / 2;
    if (l <= x)
    {
      while (l--)
      {
        j = 1;
        d = n / 2 + 1;
        for (int i = 1; i <= n; i++)
        {
          if (i % 2 != 0)
          {
            temp[j] = arr[i];
            j++;
          }
          else
          {
            temp[d] = arr[i];
            d++;
          }
        }
        for (int i = 1; i <= n; i++)
        {
          arr[i] = temp[i];
        }
      }
    }
    else
    {
      int s = 2;
      for (int i = n-1; i > 1; i--)
      {
        arr[s] = temp[i];
        s++;
      }

      x = l-x-1;
      while (x--)
      {
        j = 1;
        d = n / 2 + 1;

        for (int i = 1; i <= n; i++)
        {
          if (i % 2 != 0)
          {
            temp[j] = arr[i];
            j++;
          }
          else
          {
            temp[d] = arr[i];
            d++;
          }
        }
        for (int i = 1; i <= n; i++)
        {
          arr[i] = temp[i];
        }
      }
    }

    for (int i = 1; i <= n; i++)
    {
      cout << arr[i] << " ";
    }
    cout << "\n";
  }
  return 0;
}
