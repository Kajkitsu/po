class MyArray {
private:
    MyArray() {
        // alokacja pamięci
    }
    ~MyArray() {
        // zwalnianie pamięci
    }

    friend class MySingleton; // MySingleton jest teraz przyjacielem MyArray

    // reszta implementacji MyArray
};

class MySingleton {
public:
    static MySingleton& getInstance() {
        static MySingleton instance; // tworzy instancję MySingleton
        return instance;
    }

    MyArray& getArray() {
        return myArray; // zwraca referencję do MyArray
    }

private:
    MySingleton() : myArray() {} // tworzy instancję MyArray

    MyArray myArray;

    // reszta implementacji MySingleton
};