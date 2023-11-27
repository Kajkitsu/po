//
// Created by nwaszkowiak on 11/20/23.
//
#include"MyArray.cpp"

class MySingleton {
private:
   MyArray* array;


    // Prywatny konstruktor, aby zapobiec
    // tworzeniu instancji za pomocą operatora new
    MySingleton() {
        this->array=new MyArray(100);
    }

    // Prywatny destruktor
    ~MySingleton() {}

    // Usunięcie możliwości kopiowania i przypisywania
    MySingleton(const MySingleton &) = delete;

    MySingleton &operator=(const MySingleton &) = delete;

public:
    // Metoda do uzyskania instancji MySingleton
    static MySingleton &getInstance() {
        static MySingleton instance;
        return instance;
    }


    MyArray* getArray(){
        return array;
    };


};