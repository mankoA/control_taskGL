#include <iostream>
#include <cstring>
#include <chrono>

#define BUFFERSIZE 1024

namespace myprintf{
    int printf(const char *format){
        
        char * buffer = new char [BUFFERSIZE];
        int count=0,l=0;
        while (l<BUFFERSIZE){
            buffer[l]=format[count];
            count++;
            l++;
            if (l==BUFFERSIZE && count<=strlen(format)){
                l=0;
                std::printf("%s",buffer);
            }
            else if ((count-1)==strlen(format))
            {
                std::printf("%s",buffer);
                break;
            }                   
        }     
        delete [] buffer;
        return 0;
    }
}

int main(){
    std::string text="Hello World \n Hello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \n Hello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \nHello World \n";
    auto Startprintf = std::chrono::high_resolution_clock::now();
    myprintf::printf (text.c_str());
      
    auto Finishprintf = std::chrono::high_resolution_clock::now();
    
    auto Startcout = std::chrono::high_resolution_clock::now();
    std::cout<<text<<std::endl;
    auto Finishcout = std::chrono::high_resolution_clock::now();

    std::cout <<"MY PRINTF took "  << std::chrono::duration_cast<std::chrono::milliseconds>(Finishprintf - Startprintf).count() << "mS\n";
    std::cout <<"COUT took "  << std::chrono::duration_cast<std::chrono::milliseconds>(Finishcout - Startcout).count() << "mS\n";
    
    return 0;
}