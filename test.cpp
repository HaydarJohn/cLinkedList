#include<iostream>
#include"linkedList.h"


int main()
{
    LinkedList* array = new LinkedList();
    
    int data = 69;
    int data1 = 420;
    int data2 = 31;
    
    array->setData(&data,0);
    array->add(&data2);
    array->add(&data1,1);
    
    
    std::cout<<*(int*)(array->getData(0))<<std::endl;
    std::cout<<*(int*)(array->getData(1))<<std::endl;
    std::cout<<*(int*)(array->getData(2))<<std::endl;
}