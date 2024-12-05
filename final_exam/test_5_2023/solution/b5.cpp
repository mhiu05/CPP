#include <bits/stdc++.h>

using namespace std;

class id
{
public:
    int power, blood;
    string alive;
    id()
    {
        power = 0;
        blood = 0;
        alive = "ALIVE";
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string power, blood, alive;
    int Power, Blood;
    getline(cin, power);
    getline(cin, blood);
    getline(cin, alive);

    Power = stoi(power.substr(power.find(":") + 1));
    Blood = stoi(blood.substr(blood.find(":") + 1));

    int n;
    cin >> n;

    vector<id> a(n);

    a[0].power = Power;
    a[0].blood = Blood;
    a[0].alive = "ALIVE";

    for (int i = 0; i < n; ++i)
    {
        string event;
        cin >> event;

        if (i > 0)
        {
            a[i].power = a[i - 1].power;
            a[i].blood = a[i - 1].blood;
            a[i].alive = a[i - 1].alive;
        }

        if (a[i].alive == "DEAD")
        {
            a[i].power = 0;
            a[i].blood = 0;
            continue;
        }

        if (event == "mushroom")
        {
            a[i].blood -= 15;
            a[i].power -= 2;
            if (a[i].blood <= 0 || a[i].power <= 0)
            {
                a[i].alive = "DEAD";
                a[i].power = 0;
                a[i].blood = 0;
            }
        }
        else if (event == "witch")
        {
            int p_w;
            cin >> p_w;
            if (p_w >= a[i].power)
            {
                a[i].alive = "DEAD";
                a[i].power = 0;
                a[i].blood = 0;
            }
            else
            {
                a[i].power += 5;
            }
        }
        else if (event == "pea")
        {
            a[i].blood += 10;
            a[i].power += 2;
        }
        else if (event == "soldier")
        {
            int p_s;
            cin >> p_s;
            if (p_s >= a[i].power)
            {
                a[i].alive = "DEAD";
                a[i].power = 0;
                a[i].blood = 0;
            }
            else
            {
                a[i].blood += 5;
                a[i].power += 7;
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cout << "POWER : " << a[i].power << endl;
        cout << "BLOOD : " << a[i].blood << endl;
        cout << a[i].alive << endl;
        cout << "--------------------" << endl;
    }

    return 0;
}