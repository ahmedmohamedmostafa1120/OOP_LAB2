#include "../include/mylib.hpp"
#include <iostream>
using namespace std;
using namespace mylib;

int main() {

 char str1[] = "Hello";
 char str2[] = "";
 cout << "Comparing str1 and str2: " << compare(str1, str2)  << endl;
 cout << "original: " << str1<< " upper: " << toUpper(str1) << endl;
 cout << "original: " << str1<< " lower: " << toLower(str1) << endl;
 cout << "original: " << str1<< " copied: " << copy(str1, str2) << endl;


 return 0;

}