#ifndef BOOKS_H
#define BOOKS_H
#include <string>
using namespace std;

class Book
{
public:
  Book();
  Book(string t, string a, float p, int s);
  ~Book();
  // mutators
  void setTitle(string t);
  void setAuthor(string a);
  void setPrice(float p);
  void setStock(int s);
  // accessors
  string getTitle() const;
  string getAuthor() const;
  float getPrice() const;
  int getStock() const;

private:
  string title;
  string author;
  float price;
  int amntInStock;
};

#endif // BOOKS_H
