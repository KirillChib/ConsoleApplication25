// Queue.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class Queue
{
private :
    int * _arr;
    int _top{ 0 };
    int _size;
    const int _Empty{ -1 };
public:
    Queue(int size):_size{size},_arr{new int[_size]}{}
    bool IsEmpty()
    {
        return _top == _Empty;
    }
    bool IsFull()
    {
        return _top == _size;
    }
    void Add(int value)
    {
        if (!IsFull)
            _arr[++_top];

    }
    int Pop()
    {
        if (!IsEmpty)
            return _arr[--_top];
    }
    void Swap(int index)
    {
        for (size_t i = 0; i < _size - 1; i++)
        {
            _arr[index] == _arr[index + 1];
            index++;
        }
    }
};




    int main()
    {
        Queue ueue(5);
        for (size_t i = 0; i < 5; i++)
        {
            ueue.Add(i);
        }
        ueue.Swap(ueue.Pop())

            for(size_t i=0;)

    }
