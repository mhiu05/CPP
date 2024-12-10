#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    cin >> s;
    map<char, long long> freq;

    for (long long i = 0; i < s.size(); i++)
    {
        freq[s[i]]++;
    }

    set<long long> se;
    for (auto i : freq)
    {
        se.insert(i.second);
    }

    if (se.size() == 1)
    {
        cout << "28tech";
    }
    else if (se.size() == 2)
    {
        vector<int> A;
        for (auto it : freq)
        {
            A.push_back(it.second);
        }
        sort(A.begin(), A.end());
        for (int x : A)
            cout << x << endl;
        if (A[A.size() - 1] - A[A.size() - 2] == 1 || (A[0] == 1 && A[1] != 1))
            cout << "28tech";
        else
            cout << "29tech";
    }
    else
        cout << "29tech";
}