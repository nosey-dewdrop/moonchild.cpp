// stack -> automatic
//heap -> programmer can make

#include <iostream>  
#include <cmath>  // because we need math functions
using namespace std; 


class Book {
      public:
            Book(int id = 0) {   
                  this->id = id;
            }
            void displayId() {   
                  cout << "book id: " << id << endl;
            }
      private:
            int id;  
};

int main(){

      Book* B1 = new Book; // HEAP 1 pointer object.
      // pointer keeps the adress ıf the objects. so you need to use ->
      B1 -> displayId();

      Book* B2 = new Book[5]; // HEAP 5 object
      B2[0] = Book(201);       
      B2[0].displayId();

      Book B3[3]; // STACK 3 object
      // Book B3[3] = { Book(301), Book(302), Book(303) }; de yapabilirdin.
      B3[0] = Book(301);
      B3[1] = Book(302);
      B3[2] = Book(303);

      return 0;
}

/**
 * STACK:
 */