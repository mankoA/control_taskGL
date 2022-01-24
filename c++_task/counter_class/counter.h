#include <iostream>
#ifndef COUNTER_H
#define COUNTER_H
    class Counter{
        private:
            int begin=0;
            int end=0;
            int count=0;
        public:  
            Counter(){}
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
            int count_out(){
                return count;
            }    
    };
#endif