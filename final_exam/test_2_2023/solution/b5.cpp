#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int mod = 1e9 + 7;
const int MAXN = 1e5 + 5;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

class Author
{
private:
    string name, email;
    char gender;

public:
    Author() {}
    Author(string name, string email, char gender)
    {
        this->name = name;
        this->email = email;
        this->gender = gender;
    }
    string getName()
    {
        return this->name;
    }
    string getEmail()
    {
        return this->email;
    }
    char getGender()
    {
        return this->gender;
    }
};

class Book
{
private:
    string name;
    vector<Author> authors;
    double price;
    int qty;

public:
    Book() {};
    Book(string name, vector<Author> authors, double price, int qty)
    {
        this->name = name;
        this->authors = authors;
        this->price = price;
        this->qty = qty;
    }
    string getName()
    {
        return this->name;
    }
    double getPrice()
    {
        return this->price;
    }
    int getQty()
    {
        return this->qty;
    }
    int getNumAuthor()
    {
        return this->authors.size();
    }
    Author getAuthor(int index)
    {
        if (index >= 0 && index < authors.size())
        {
            return authors[index];
        }
        return Author();
    }
};

void nhap(vector<Book> &books, int n)
{
    for (int i = 0; i < n; ++i)
    {
        string tmp;
        getline(cin, tmp);
        string name;
        double price;
        int qty, numAuthors;
        vector<Author> authors;

        getline(cin, name);
        cin >> price >> qty >> numAuthors;
        cin.ignore();

        for (int j = 0; j < numAuthors; ++j)
        {
            string nameA, emailA;
            char genderA;
            getline(cin, nameA);
            getline(cin, emailA);
            cin >> genderA;
            cin.ignore();
            authors.push_back(Author(nameA, emailA, genderA));
        }
        books.push_back(Book(name, authors, price, qty));
    }
}

bool cmp(Book a, Book b)
{
    return a.getName() < b.getName();
}

void in(vector<Book> books)
{
    for (int i = 0; i < books.size(); ++i)
    {
        cout << "-----------------------\n";
        cout << "Book information :" << endl;
        cout << "Name : " << books[i].getName() << endl;
        cout << "Price : " << books[i].getPrice() << endl;
        cout << "Quantity : " << books[i].getQty() << endl;
        cout << "Author information :" << endl;
        for (int j = 0; j < books[i].getNumAuthor(); ++j)
        {
            cout << "#" << j + 1 << endl;
            cout << "Name : " << books[i].getAuthor(j).getName() << endl;
            cout << "Email : " << books[i].getAuthor(j).getEmail() << endl;
            cout << "Gender : " << books[i].getAuthor(j).getGender() << endl;
        }
    }
}

int main()
{
    faster();
    int n;
    cin >> n;
    cin.ignore();
    vector<Book> books;
    nhap(books, n);
    sort(books.begin(), books.end(), cmp);
    in(books);
    return 0;
}