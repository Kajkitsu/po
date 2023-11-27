//
// Created by nwaszkowiak on 11/20/23.
//

class MyArray{
private:
    int* tab;
    int size;
    MyArray(int initialSize)
    {
        tab = new int[initialSize]; //alokuje tablice
        size = 0;
    }
    ~MyArray()
    {
        delete[] tab;
    }
public:

    int getSize()
    {
        return size;
    }

    int getValue(int i) //pobiera wartoc
    {
        return tab[i];
    }
    int setValue(int value) //ustala wartosc
    {
        tab[size] = value;  // tab[0] size = 0+1 = 1 --> tab[1]
        size++;
        return size-1;
    }


friend class MySingleton;
};