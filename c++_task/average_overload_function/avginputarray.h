#ifndef AVGINPUTARRAY_H
#define AVGINPUTARRAY_H


float avginputarray(int array[],int size){
    std::cout<<"The data type to enter must be: 'int'"<<std::endl;
    int s=0;
    for (int i=0;i<size;i++){
                std::cin>>array[i];
                s+=array[i]; 
    }    
    return s/size;
}
float avginputarray(float array[],int size){
    std::cout<<"The data type to enter must be: 'float'"<<std::endl;
    float s=0;
    for (int i=0;i<size;i++){
                std::cin>>array[i]; 
                s+=array[i]; 
    }    
    return s/size;
}
float avginputarray(double array[],int size){
    std::cout<<"The data type to enter must be: 'double'"<<std::endl;
    double s=0;
    for (int i=0;i<size;i++){
                std::cin>>array[i]; 
                s+=array[i]; 
    }    
    return s/size;
}
#endif