#ifndef BOOK_H
#define BOOK_H
#include "product.h"

class Book : public Product
{
public:
  Book(std::string ISBN, std::string author, std::string name, double price, int qty);
  ~Book();

  /**
   * Returns the appropriate keywords that this product should be associated with
   */
  std::set<std::string> keywords() const;

  /**
   * Returns a string to display the product info for hits of the search 
   */
  std::string displayString() const;

  /**
   * Outputs the product info in the database format
   */
  void dump(std::ostream& os) const;


private:
  std::string ISBN_;
  std::string author_;
};
#endif