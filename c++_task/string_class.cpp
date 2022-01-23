#include <iostream>
#include <cstring>
#define DEFAULT_SIZE 7;
using std::cout;
using std::cin;
using std::endl;
using std::strcpy;
using std::strlen;

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
            size=strlen(strin)+1;
            str=new char[size];
            strcpy(str,strin);
        }
        ~MyString(){
            delete[] str;
        }
        void inputString() {      
            cout<<"Input your string: "<<endl;           
            cin.getline(str, size, '\n');              
        }
        void printString() {
            cout<<str<<endl;
        }             
};

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