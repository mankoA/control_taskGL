#ifndef MYSTRING_H
#define MYSTRING_H
#include <iostream>
#include <cstring>
#define DEFAULT_SIZE 70;
    class MyString{

        private:
            int size;
            char * str;

        public:  
            MyString(){
                size=DEFAULT_SIZE;
                str=new char[size];
            }
            MyString(int sizein){
                size=sizein+1;
                str=new char[size];
            }     
            MyString(const char * strin){
                size=std::strlen(strin)+1;
                str=new char[size];
                std::strcpy(str,strin);
            }
            ~MyString(){
                delete[] str;
            }
            void inputString() {      
                std::cout<<"Input your string: "<<std::endl;           
                std::cin.getline(str, size, '\n');              
            }
            void printString() {
                std::cout<<str<<std::endl;
            }             
    };
#endif