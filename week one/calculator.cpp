// calculator is such a basic app. i will do it anyways.
#include <iostream>  
#include <cmath>  // because we need math functions
using namespace std; 

// did not understand namespaces.
namespace damla {
    void selam() {
      cout << "merhaba ben Damla!" << endl;
    }
}

// in cpp the order is mattered. you cannot do something before defining it.
// why include iostream? because we need to do input and output

int add(int a, int b) {
            return a + b;
};// cpp başka bir fonksiyonyu main içerisine yazamazsın.



int main(){
      damla::selam();
      cout << "Welcome to the calculator app!" << endl;
      cout << add(3,5) << endl;
}

