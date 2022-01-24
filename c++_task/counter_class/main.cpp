
#include "counter.h"
using std::cout;
using std::cin;
using std::endl;


int main(){
    Counter H(0,24); 
    Counter M; 
    Counter S(0,60); 
    M.count_min(0);
    M.count_max(60);
    for (int h=0;h<24;h++){
        for (int m=0;m<60;m++){
            for (int s=0;s<60;s++){
                cout<<H.count_out()<<"\t"<<M.count_out()<<"\t"<<S.count_out()<<"\t"<<endl; 
                S.count_add();
            }
            M.count_add();
        }
        H.count_add();       
    }    
    return 0;
}