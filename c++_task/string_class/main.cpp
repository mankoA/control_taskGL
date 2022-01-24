#include "mystring.h"
int main(){

    MyString s1;
    s1.inputString();    
    s1.printString();

    MyString s2(5);
    s2.inputString();    
    s2.printString();
       
    MyString s3("Everything is fine ");    
    s3.printString();
    
    return 0;
}