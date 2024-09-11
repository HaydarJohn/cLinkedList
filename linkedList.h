#pragma once

class LinkedList
{
    void* data;
    LinkedList* next;
    public:
    LinkedList();
    void setData(void * newData,int index);
    void* getData(int index);
    void add(void* data);
    void add(void* data , int index);
    LinkedList* getList(int index);
};