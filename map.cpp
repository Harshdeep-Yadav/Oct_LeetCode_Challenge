#include <bits/stdc++.h>
using namespace std;
#include <unordered_map>

int main()
{
    unordered_map<int, int> mp;
    int arr[] = {1, 4, 5, 8, 4, 1, 5, 9, 7, 8, 0, 0, 1, 155};
    for (int i = 0; i < 14; i++)
    {
        int tmp = arr[i];
        mp[tmp]++;
    }
    int key = 5;

      

    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}