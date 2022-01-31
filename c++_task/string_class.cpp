#include <iostream>
#include <cstring>
#define DEFAULT_SIZE 70;
using std::cout;
using std::cin;
using std::endl;
class MyString{

    private:
        static int objcount;
        int size;
        char * str;
    public:  
        
        MyString(){
            size=DEFAULT_SIZE;
            str=new char[size];
            objcount++;
        }
        MyString(int sizein){
            size=sizein;
            str=new char[size];
            objcount++;
        }     
        MyString(const char * strin){
            size=strlen(strin);
            str=new char[size];
            objcount++;
            strcpy(str,strin);            
        }
        MyString(const MyString &obj){
            delete[] str;
            size=obj.size;
            str=new char[size];
            strcpy(str,obj.str);
            objcount++;
        }
        ~MyString(){
            delete[] str;
        }
        MyString &operator=(const MyString &obj){   
            size=obj.size;
            delete[] str;
            str=new char[size];
            strcpy(str,obj.str);
            return *this;

        }
        MyString &operator+=(const MyString &obj){   
            size+=obj.size;
            strcat(str,obj.str);
            return *this;

        }
        MyString operator+(const MyString &obj){   
            MyString temp(size+obj.size);
            strcpy(temp.str,str);
            strcat(temp.str,obj.str);
            return temp;
        }
        MyString &operator=(const char * strin){
            size=strlen(strin);
            delete[] str;
            str=new char[size];
            strcpy(str,strin);
            return *this;
        }
        MyString &operator+=(const char * strin){   
            size+=strlen(strin);
            strcat(str,strin);
            return *this;
        }
        MyString operator+(const char * strin){   
            MyString temp(size+strlen(strin));
            strcpy(temp.str,str);
            strcat(temp.str,strin);
            return temp;
        }        
        void inputString() {      
            cout<<"Input your string:"<<endl;
            cin.getline(str, size+1, '\n'); 
            while(getchar()!='\n');
            cin.clear();             
        }
        void printString() {
            cout<<str<<endl;
        }        
        static void ShowCount(){
            cout<<objcount<<" objects were created"<<endl;
        } 
};

int MyString::objcount=0;
int main(){
    MyString s1,s2(5),s3("Hello"),s4,s5,s6,s7,s8;
    s1.inputString();
    s2.inputString();
    s1.printString();
    s2.printString();
    s3.printString();
    s4=s3;
    s4.printString();
    s5="END";
    s5.printString();
    s6=" World";
    s3+=s6;
    s3.printString();
    s5+=" OF PROGRAM";
    s5.printString();
    MyString::ShowCount();
    s7=s5+s6;   
    s7.printString();
    s5.printString();
    s6.printString();
    s8=s5+" str";
    s8.printString();
    s5.printString();
    MyString::ShowCount();
    return 0;
}
     