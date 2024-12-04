#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int mod = 1e9 + 7;
const int MAXN = 1e6 + 1;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

class Customer
{
public:
    int id, discount, invoice_id;
    string name;
    double amount;
    Customer() {};
    Customer(int id, int discount, int invoice_id, string name, double amount)
    {
        this->id = id;
        this->discount = discount;
        this->invoice_id = invoice_id;
        this->name = name;
        this->amount = amount;
    };
};

void nhap(vector<Customer> &customer, int n)
{
    for (int i = 0; i < n; ++i)
    {
        string tmp;
        getline(cin, tmp);
        string Customer_id, Full_name, Discount, Invoice_id, Amount;
        getline(cin, Customer_id);
        getline(cin, Full_name);
        getline(cin, Discount);
        getline(cin, Invoice_id);
        getline(cin, Amount);
        int id = stoi(Customer_id.substr(Customer_id.find(":") + 1));
        string name = Full_name.substr(Full_name.find(":") + 1);
        int discount = stoi(Discount.substr(Discount.find(":") + 1));
        int invoice_id = stoi(Invoice_id.substr(Invoice_id.find(":") + 1));
        double amount = stod(Amount.substr(Amount.find(":") + 1, Amount.size() - (Amount.find(":") + 1) - 1));
        customer.push_back(Customer(id, discount, invoice_id, name, amount));
    }
}

void in(vector<Customer> v, int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << "Customer ID : " << v[i].id << endl;
        cout << "Full Name :" << v[i].name << endl;
        cout << "Amount : " << fixed << setprecision(2) << v[i].amount - v[i].amount * v[i].discount / 100 << " $" << endl;
        cout << "--------------------" << endl;
    }
}

int cmp(Customer a, Customer b)
{
    int x = a.amount - a.amount * a.discount / 100, y = b.amount - b.amount * b.discount / 100;
    if (x != y)
        return x > y;
    return a.id < b.id;
}

int main()
{
    faster();
    int n;
    cin >> n;
    cin.ignore();
    vector<Customer> customer;
    nhap(customer, n);
    sort(customer.begin(), customer.end(), cmp);
    in(customer, n);
    return 0;
}