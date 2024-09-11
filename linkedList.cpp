#include<stdio.h>
#include<stdlib.h>
#include"linkedList.h"



LinkedList::LinkedList()
{
    this->data = nullptr;
    this->next = nullptr;
}
void LinkedList::setData(void * newData,int index)
{
    LinkedList* list = getList(index);
    list->data = newData;
}

void* LinkedList::getData(int index)
{
    LinkedList* list = getList(index);
    return list->data;
}


void LinkedList::add(void* data)
{
    if(this->next == nullptr)
    {
        LinkedList* list = new LinkedList();
        list->next = nullptr;
        this->next = list;
        list->data = data;
    }
    else
    {
        next->add(data);
    }
    
}
void LinkedList::add(void* data , int index)
{
    LinkedList* list = getList(index);
    LinkedList* newList = new LinkedList();
    newList->data = data;
    newList->next = list->next;
    list->next = newList;

}
LinkedList* LinkedList::getList(int index)
{
    if(index == 0)
    {
        return this;
    }
    else
    {
        // This shit is the reason i fuking exploded.
        // If you put index-- it executes substraction after the function
        // That means endless recursive :*(
        return next->getList(--index);   
    }
}





