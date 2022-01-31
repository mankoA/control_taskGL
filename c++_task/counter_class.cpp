#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Counter{
    private:
        int begin;
        int end;
        int count;
    public:  
        Counter():begin(0),end(0){
           
        }
        Counter(int min,int max){
            begin=min;
            end=max;
            count=begin;
        }     
        ~Counter(){}
        void count_min(int min){
            begin=min;
            count=begin;
        }
        void count_max(int max){
            end=max;
            count=begin;
        }
        void count_add(){
            if (count+1==end) {
                count=begin;
            }
            else{
                ++count;
            }
        }
        int count_out() const{
            return count;
        }    
};
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