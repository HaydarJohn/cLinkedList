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
    printf("got here 0\n");
    LinkedList* newList = new LinkedList();
        printf("got here 0\n");

    newList->data = data;
        printf("got here 0\n");

    newList->next = list->next;
        printf("got here 0\n");

    list->next = newList;
}
LinkedList* LinkedList::getList(int index)
{
    if(index == 0)
    {
        return this;
    }
    return next->getList(index--);
}





