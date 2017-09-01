#include "Books.h"
#include <iostream>
using namespace std;

Book::Book()
{
	title = "";
	author = "";
	price = 0;
	amntInStock = 0;
}

Book::Book(string t, string a, float p, int s)
{
	title = t;
	author = a;
	price = p;
	amntInStock = s;
}

Book::~Book()
{
	cout << "<< Ending Program >>" << endl;
}

void Book::setTitle(string t)
{
	title = t;
}

void Book::setAuthor(string a)
{
	author = a;
}

void Book::setPrice(float p)
{
	price = p;
}

void Book::setStock(int s)
{
	amntInStock = s;
}

string Book::getTitle() const
{
	return title;
}

string Book::getAuthor() const
{
	return author;
}

float Book::getPrice() const
{
	return price;
}

int Book::getStock() const
{
	return amntInStock;
}
