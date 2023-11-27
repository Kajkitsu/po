#include <string>
#include <iostream>

class Element {
private:
    char* tableOfChar;
    Element *next;
public:
    Element(std::string name);
    ~Element();

    std::string getName();

    friend class List;
};

std::string Element::getName() {
    return tableOfChar;
}

Element::Element(std::string name) : next(NULL) {
    tableOfChar = new char[name.size()];
    for(int i=0; i<name.size(); i++) {
        tableOfChar[i] = name[i];
    }
}

Element::~Element() {
    delete[] tableOfChar;
}

class List {
private:
    Element *head;
    int size;
public:
    List();

    int add(Element *element);

    void print();

    Element *get(int index);

    void remove(int index);
};

List::List() : head(NULL), size(0) {}

void List::print() {
    Element *element = head;
    while (element != NULL) {
        std::cout << element->getName() << std::endl;
        element = element->next;
    };
}

int List::add(Element *newElement) {
    if (head == NULL) {
        head = newElement;
        size = 1;
        return 0;
    } else {
        int index = 0;
        Element *element = head;
        while (element->next != NULL) {
            index++;
            element = element->next;
        };
        element->next = newElement;
        size = index + 2;
        return index + 1;
    }
}

Element *List::get(int index) {
    int current_index = 0;
    Element *current = head;

    if (index > size) {
        return nullptr;
    }

    while (current_index != index) {
        current = current->next;
        current_index++;
    }

    return current;
}

void List::remove(int index) {
    int current_index = 0;
    Element *prev = head;
    Element *next;
    Element *to_rem;

    if (index > size) {
        return;
    }

    while (current_index != index - 1) {
        prev = prev->next;
        current_index++;
    }

    next = prev->next;
    to_rem = prev->next;
    next = next->next;

    prev->next = next;

    delete to_rem;

    return;
}

int main() {
    List list;


    std::cout << "test1, index:"
              << list.add(new Element("test1"))
              << std::endl;
    std::cout << "test2, index:"
              << list.add(new Element("test2"))
              << std::endl;
    std::cout << "test3, index:"
              << list.add(new Element("test3"))
              << std::endl;




    for (int i = 0; i < 10000000; i++) {
        list.remove(1);
        std::cout << "test" << std::endl;
        list.add(new Element("test"+1));
    }
    list.print();
}