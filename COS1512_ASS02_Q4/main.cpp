#include "Books.h"
#include <iostream>
#include <cctype>
using namespace std;

int main()
{

    Book myBooks[3];

    // input details for the books
    for (int i = 0; i < 3; i++)
    {
        string t, a;
        float p;
        int s;
        cout << "Enter the details for book " << i + 1 << endl
             << endl;
        cout << "Title: ";
        getline(cin, t);
        cout << "Author: ";
        getline(cin, a);
        cout << "Price: ";
        cin >> p;
        cout << "Stock: ";
        cin >> s;
        myBooks[i].setTitle(t);
        myBooks[i].setAuthor(a);
        myBooks[i].setPrice(p);
        myBooks[i].setStock(s);
        cout << endl;
        cin.get();
    }

    //Count and display details of those to be discounted
    int counter = 0;
    for (int i = 0; i < 3; i++)
    {
        if (myBooks[i].getStock() > 20)
        {
            counter++;
        }
    }
    cout << counter << " books will be discounted." << endl;
    cout << "The books to be discounted are : " << endl;
    cout.setf(ios::fixed);
    cout.precision(2);
    for (int i = 0; i < 3; i++)
    {
        if (myBooks[i].getStock() > 20)
        {
            cout << "Title: " << myBooks[i].getTitle() << endl;
            cout << "Author: " << myBooks[i].getAuthor() << endl;
            cout << "Current Price: R" << myBooks[i].getPrice() << endl;
            cout << "In Stock: " << myBooks[i].getStock() << " units" << endl;
            cout << endl;
        }
    }

    char confirmation;
    cout << "Confirm the books to be discounted : (y/n) ";
    cin >> confirmation;
    cout << endl
         << endl;

    if (tolower(confirmation) == 'y')
    {
        for (int i = 0; i < 3; i++)
        {
            if (myBooks[i].getStock() > 20)
            {
                float discountedPrice = myBooks[i].getPrice();
                discountedPrice *= 0.85;
                myBooks[i].setPrice(discountedPrice);
            }
        }
    }

    // display the details for all books in the store
    cout << "***BELOW IS THE DETAILS OF THE BOOKS IN THE STORE***" << endl
         << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Title: " << myBooks[i].getTitle() << endl;
        cout << "Author: " << myBooks[i].getAuthor() << endl;
        cout << "Price: R" << myBooks[i].getPrice() << endl;
        cout << "In Stock: " << myBooks[i].getStock() << " units" << endl;
        cout << endl;
    }
    return 0;
}
