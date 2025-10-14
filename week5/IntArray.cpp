#include "IntArray.h"   // kendi sınıfımızın tanımı burada
#include <iostream>     // ekrana yazmak için (cout vb.)
using namespace std;


IntArray::IntArray(const int aSize){
      cout<< "this constructor!"<<endl;
}

IntArray::~IntArray(){
      /* 
      cout << "deconstructor worked!"<< endl;
      it is deconstructed at the end of the main function.
      first created, deleted the last.
      last created, deleted the first.
      */
}
int main(){
      IntArray int_array;
      cout<< "helloo" << endl;
      return 0;
}