#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int avginputarray(int array[],int size){
    cout<<"The data type to enter must be: 'int'"<<endl;
    int s=0;
    for (int i=0;i<size;i++){
                cin>>array[i];
                s+=array[i]; 
    }    
    return s/size;
}
float avginputarray(float array[],int size){
    cout<<"The data type to enter must be: 'float'"<<endl;
    float s=0;
    for (int i=0;i<size;i++){
                cin>>array[i]; 
                s+=array[i]; 
    }    
    return s/size;
}
float avginputarray(double array[],int size){
    cout<<"The data type to enter must be: 'double'"<<endl;
    double s=0;
    for (int i=0;i<size;i++){
                cin>>array[i]; 
                s+=array[i]; 
    }    
    return s/size;
}


int main(){
    int size=0;
    cout << "Enter size of array: "<<endl;
    cin >>size;
    int array1[size];
    float array2[size];
    double array3[size];
    float avg;
    cout << "Data type? 1 - int, 2 - float, 3 - double"<<endl;
    int t;
    cin >> t;
    switch(t){
        case 1:{
            avg=avginputarray(array1,size);
            cout<<"The average value of the array is: "<<avg<<endl;
            break;
        }
        case 2:{
            avg=avginputarray(array2,size);
            cout<<"The average value of the array is: "<<avg<<endl;
            break;            
        }
        case 3:{
            avg=avginputarray(array3,size);
            cout<<"The average value of the array is: "<<avg<<endl;
            break;                       
        }
    }
      
    return 0;
}
