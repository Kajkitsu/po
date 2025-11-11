# Plan prezentacji: Programowanie Obiektowe
## Nowa struktura - od ogółu do szczegółu

---

## **ZAJĘCIA 1: Wprowadzenie - czym jest OOP?**

### 1. Slajd powitalny
- Informacje o prowadzącym

### 2. Historia programowania
- Programowanie proceduralne vs obiektowe
- Po co wymyślono OOP? (Simula, Smalltalk)
- Jakie problemy rozwiązuje?

### 3. Podstawowe pojęcia - teoria
- **Obiekt** - co to jest? (rzeczywisty lub abstrakcyjny byt)
- **Klasa** - szablon dla obiektów
- **Metoda** - funkcja należąca do klasy
- **Atrybuty** - dane przechowywane w obiekcie

### 4. Analogie ze świata rzeczywistego
- Klasa "Samochód" → konkretne samochody (obiekty)
- Klasa "Student" → Jan Kowalski, Anna Nowak (obiekty)
- Klasa "Książka" → konkretne egzemplarze książek
- **Kluczowe**: Klasa = WZORZEC, Obiekt = KONKRETNY EGZEMPLARZ

### 5. Paradygmaty OOP - wprowadzenie (tylko nazwy!)
- Abstrakcja
- Enkapsulacja
- Dziedziczenie
- Polimorfizm
- **Nie wchodzimy w szczegóły** - tylko pokazujemy że istnieją

---

## **ZAJĘCIA 2: Pierwsza klasa w C++**

### 6. Przypomnienie: struktura w C++
```cpp
struct Point {
    int x;
    int y;
};

Point p1;
p1.x = 10;
p1.y = 20;
```
- Grupowanie danych
- Wszystko publiczne

### 7. Przechodzimy do klasy - minimalistyczny przykład
```cpp
class Point {
public:
    int x;
    int y;
};

Point p1;
p1.x = 10;
p1.y = 20;
```
- **Różnica**: domyślnie prywatne vs publiczne
- Na razie używamy `public` - żeby było podobnie do struktury

### 8. Dodajemy pierwszą metodę
```cpp
class Point {
public:
    int x;
    int y;
    
    void print() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};
```
- Metoda to funkcja "należąca" do klasy
- Może korzystać z pól `x` i `y`

### 9. Używanie klasy
```cpp
int main() {
    Point p1;
    p1.x = 10;
    p1.y = 20;
    p1.print();  // (10, 20)
    
    Point p2;
    p2.x = 5;
    p2.y = 15;
    p2.print();  // (5, 15)
}
```

### 10. Ćwiczenie praktyczne 1 (WOLNO!)
- Napisz klasę `Point`
- Pola public: `x`, `y` (typu int)
- Metoda: `print()` wyświetlająca punkt w formacie `(x, y)`
- Stwórz 2-3 obiekty i wyświetl ich wartości
- **CEL**: Oswojenie z podstawową składnią klasy

---

## **ZAJĘCIA 3: Enkapsulacja - ukrywanie danych**

### 11. Problem z publicznymi polami
```cpp
class BankAccount {
public:
    double balance;  // Każdy może to zmienić!
};

BankAccount account;
account.balance = -1000;  // Ojej! To nie powinno być możliwe
```
- **Brak kontroli** nad danymi
- Można ustawić nieprawidłowe wartości

### 12. Wprowadzenie `private` i `public`
```cpp
class BankAccount {
private:
    double balance;  // Teraz nikt z zewnątrz nie może tego zmienić

public:
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }
    
    double getBalance() {
        return balance;
    }
};
```
- **private** - tylko metody klasy mają dostęp
- **public** - dostępne z zewnątrz
- Metody kontrolują dostęp do danych

### 13. Konwencja: gettery i settery
```cpp
class Person {
private:
    string name;
    int age;

public:
    // Getter - pobieranie wartości
    string getName() { return name; }
    int getAge() { return age; }
    
    // Setter - ustawianie wartości z walidacją
    void setAge(int a) {
        if (a >= 0 && a <= 150) {
            age = a;
        }
    }
};
```

### 14. Ćwiczenie praktyczne 2
- Napisz klasę `Rectangle`
- Pola private: `width`, `height` (typu double)
- Konstruktor: `Rectangle(double w, double h)`
- Metody ustawiające (settery):
  - `void setWidth(double w)` - ustawia szerokość
  - `void setHeight(double h)` - ustawia wysokość
- Metody pobierające (gettery):
  - `double getWidth() const` - zwraca szerokość
  - `double getHeight() const` - zwraca wysokość
- Metody obliczające:
  - `double area() const` - zwraca pole powierzchni (width * height)
  - `double perimeter() const` - zwraca obwód (2 * (width + height))
- Metoda wyświetlająca:
  - `void display() const` - wyświetla informacje w formacie:
    ```
    Rectangle: <width> x <height>
    Area: <area>
    Perimeter: <perimeter>
    ```
- **CEL**: Enkapsulacja, gettery/settery, metody obliczające

---

## **ZAJĘCIA 4: Konstruktory - podstawy**

### 15. Problem: niezainicjalizowane obiekty
```cpp
class Point {
private:
    int x;
    int y;
public:
    void print() {
        cout << x << ", " << y;  // Wartości śmieciowe!
    }
};

Point p;
p.print();  // Co się wyświetli?
```

### 16. Co to jest konstruktor?
- Specjalna metoda wywoływana przy tworzeniu obiektu
- Nazwa = nazwa klasy
- **Brak typu zwracanego** (nawet void!)
- Służy do inicjalizacji

### 17. Konstruktor domyślny (bez parametrów)
```cpp
class Point {
private:
    int x;
    int y;
public:
    // Konstruktor domyślny
    Point() {
        x = 0;
        y = 0;
        cout << "Stworzono punkt (0, 0)" << endl;
    }
    
    void print() {
        cout << x << ", " << y << endl;
    }
};

Point p;  // Wywołuje konstruktor!
```

### 18. Konstruktor z parametrami
```cpp
class Point {
private:
    int x;
    int y;
public:
    // Konstruktor z parametrami
    Point(int startX, int startY) {
        x = startX;
        y = startY;
    }
};

Point p1(10, 20);  // Stworzenie z konkretnymi wartościami
```

### 19. Przeciążanie konstruktorów
```cpp
class Point {
private:
    int x, y;
public:
    // Konstruktor domyślny
    Point() {
        x = 0;
        y = 0;
    }
    
    // Konstruktor z parametrami
    Point(int startX, int startY) {
        x = startX;
        y = startY;
    }
    
    // Konstruktor z jednym parametrem
    Point(int val) {
        x = val;
        y = val;
    }
};

Point p1;           // Wywołuje Point()
Point p2(5, 10);    // Wywołuje Point(int, int)
Point p3(7);        // Wywołuje Point(int)
```

### 20. Ćwiczenie praktyczne 3
- Napisz klasę `Book`
- Pola private: `title`, `author`, `year`, `pages`
- 3 konstruktory:
  - Domyślny (ustawia domyślne wartości)
  - Z tytułem i autorem
  - Z wszystkimi danymi
- Metoda `display()` wyświetlająca dane książki
- **CEL**: Opanowanie konstruktorów i przeciążania

---

## **ZAJĘCIA 5: Konstruktory - wartości domyślne**

### 21. Wartości domyślne w parametrach
```cpp
class Rectangle {
private:
    int width, height;
public:
    // Wartości domyślne
    Rectangle(int w = 1, int h = 1) {
        width = w;
        height = h;
    }
};

Rectangle r1;          // width=1, height=1
Rectangle r2(5);       // width=5, height=1
Rectangle r3(5, 10);   // width=5, height=10
```
- **Uwaga**: jeden konstruktor może zastąpić wiele!

### 22. Kiedy kompilator tworzy konstruktor?
- Jeśli **NIE** napiszesz żadnego konstruktora
- Kompilator utworzy pusty konstruktor domyślny
- **Ale**: jeśli napiszesz jakikolwiek konstruktor, domyślny NIE powstanie automatycznie!

```cpp
class Test {
private:
    int value;
public:
    Test(int v) { value = v; }
};

Test t1;      // BŁĄD! Brak konstruktora domyślnego
Test t2(10);  // OK
```

### 23. Ćwiczenie praktyczne 4
- Napisz klasę `Student`
- Pola: `name`, `index`, `year`, `averageGrade`
- Konstruktor z wartościami domyślnymi
- Spróbuj różnych sposobów tworzenia obiektów
- **CEL**: Zrozumienie elastyczności konstruktorów

- **CEL**: Zrozumienie elastyczności konstruktorów

---

## **ZAJĘCIA 6-7: Diagramy UML - czytamy i rysujemy**

### 24. Po co nam diagramy klas?
- Komunikacja w zespole
- Planowanie przed kodowaniem
- Dokumentacja projektu
- **Analogia**: diagram to mapa/szkic budynku przed budową

### 25. Czytanie diagramów klas - podstawy
- **Prostokąt** = klasa
- **3 sekcje**:
  - Górna: nazwa klasy
  - Środkowa: atrybuty (pola)
  - Dolna: metody
  
### 26. Symbole dostępu
- `+` = public (dostępne wszędzie)
- `-` = private (tylko wewnątrz klasy)
- `#` = protected (klasa + dziedziczące)

### 27. Pierwszy prosty diagram - Point
```
┌──────────────────┐
│      Point       │
├──────────────────┤
│ - x: int         │
│ - y: int         │
├──────────────────┤
│ + Point()        │
│ + Point(int,int) │
│ + print(): void  │
└──────────────────┘
```
- Pola prywatne
- Konstruktory publiczne
- Metoda publiczna

### 28. Ćwiczenie praktyczne 5
- **Dostają kod** klasy `Book`
- **Zadanie**: narysuj diagram UML
- Porównanie wyników w grupach
- **CEL**: Uczą się tłumaczyć kod → diagram

### 29. Relacje między klasami - wprowadzenie
- **Asocjacja** (prosta linia) - "klasa A używa klasy B"
- **Krotność**: 
  - `1` - dokładnie jeden
  - `*` - wiele (0 lub więcej)
  - `0..1` - zero lub jeden
  - `1..*` - jeden lub więcej

### 30. Przykład: Book i Author
```
┌─────────────┐  napisana  1    1  ┌──────────────┐
│    Book     │────────────────────│    Author    │
├─────────────┤      przez         ├──────────────┤
│ - title     │                    │ - name       │
│ - year      │                    │ - surname    │
└─────────────┘                    └──────────────┘
```
- Każda książka ma 1 autora
- Autor może napisać wiele (1..*) książek

### 31. Ćwiczenie praktyczne 6
- **Dostają diagram** klasy `Student` i `Course`
- **Zadanie**: napisz kod na podstawie diagramu
- Student może uczęszczać na wiele kursów
- Kurs może mieć wielu studentów
- **CEL**: Diagram → kod

---

## **ZAJĘCIA 8: Destruktor i zarządzanie pamięcią**

### 32. Po co destruktor?
- Sprzątanie po obiekcie
- Zwalnianie zasobów (pamięć, pliki, połączenia)
- Wywoływany automatycznie gdy obiekt przestaje istnieć

### 33. Składnia destruktora
```cpp
class MyClass {
public:
    MyClass() {
        cout << "Konstruktor" << endl;
    }
    
    ~MyClass() {  // Destruktor - znak ~
        cout << "Destruktor" << endl;
    }
};
```
- Nazwa: `~NazwaKlasy`
- Brak parametrów
- Brak typu zwracanego

### 34. Kiedy destruktor jest wywoływany?
```cpp
void funkcja() {
    MyClass obj;  // Konstruktor
    // ... używanie obj ...
}  // Koniec zakresu - destruktor!

int main() {
    funkcja();
    // Tutaj obj już nie istnieje
}
```

### 35. Dynamiczna alokacja - new i delete
```cpp
// Statyczna - na stosie
Point p1(10, 20);  // Automatycznie usunięty na końcu zakresu

// Dynamiczna - na stercie
Point* p2 = new Point(10, 20);
// ... używanie ...
delete p2;  // MUSISZ ręcznie usunąć!
```

### 36. Przykład z destruktorem i new/delete
```cpp
class Array {
private:
    int* data;
    int size;
    
public:
    Array(int s) {
        size = s;
        data = new int[size];  // Alokacja pamięci
        cout << "Alokacja " << size << " int'ów" << endl;
    }
    
    ~Array() {
        delete[] data;  // Zwolnienie pamięci
        cout << "Zwolnienie pamięci" << endl;
    }
};
```

### 37. Ćwiczenie praktyczne 7
- Klasa `DynamicArray`
- Konstruktor alokuje tablicę podanego rozmiaru
- Destruktor zwalnia pamięć
- Metody: `set(int index, int value)`, `get(int index)`
- **Testowanie**: czy pamięć jest zwalniana?
- **CEL**: Zrozumienie zarządzania zasobami

---

## **ZAJĘCIA 9: Lista inicjalizacyjna i wskaźnik this**
- Komunikacja w zespole
- Planowanie przed kodowaniem
- Dokumentacja projektu

### 7. Czytanie diagramów klas - podstawy
- **Prostokąt** = klasa
- **Górna część** = nazwa klasy
- **Środkowa część** = atrybuty (pola)
  - `+` = public
  - `-` = private
  - `#` = protected
- **Dolna część** = metody

### 8. Pierwszy diagram - klasa Author
```
┌─────────────────┐
│     Author      │
├─────────────────┤
│ - name: string  │
│ - surname: string│
├─────────────────┤
│ + Author(...)   │
│ + getName()     │
│ + print()       │
└─────────────────┘
```

### 9. Relacje między klasami
- **Asocjacja** (linia) - "używa"
- **Agregacja** (pusty romb) - "ma"
- **Kompozycja** (pełny romb) - "składa się z"
- **Krotność**: 1, *, 0..1, 1..*

### 10. Przykład: Book i Author
```
┌─────────────┐         ┌──────────────┐
│    Book     │ 1    1  │    Author    │
│─────────────│◇────────│──────────────│
│ - title     │         │ - name       │
│ - year      │         │ - surname    │
└─────────────┘         └──────────────┘
```

### 11. Ćwiczenie praktyczne 2
- **Dostają diagram** klasy `Student` z relacją do `Course`
- **Zadanie**: napisz kod na podstawie diagramu
- **CEL**: Studenci uczą się czytać diagramy i przekładać je na kod

### 12. Ćwiczenie praktyczne 3
- **Mają kod** klasy `Library` i `Book`
- **Zadanie**: narysuj diagram UML
- **CEL**: Uczą się myśleć w diagramach, planować przed kodowaniem

---

## **ZAJĘCIA 4-5: Konstruktory i destruktory**

### 13. Co to jest konstruktor?
- Specjalna metoda inicjalizująca obiekt
- Nazwa = nazwa klasy
- Brak typu zwracanego
- Wywoływany automatycznie przy tworzeniu obiektu

### 14. Rodzaje konstruktorów
- **Domyślny** (bezargumentowy)
- **Z parametrami**
- **Z wartościami domyślnymi**
- Przykłady w kodzie

### 15. Przeciążanie konstruktorów
```cpp
class Card {
    Card();                          // domyślny
    Card(string color, int value);   // z parametrami
    Card(string color);              // tylko kolor
};
```

### 16. Destruktor
- Sprzątanie po obiekcie
- `~NazwaKlasy()`
- Zwalnianie pamięci
- **Kiedy jest wywoływany?**

### 17. new i delete
- Dynamiczna alokacja pamięci
- Kiedy używać?
- Zagrożenia (wycieki pamięci)
- **Praktyczny przykład**

### 18. Ćwiczenie praktyczne 4
- Klasa `Array` z dynamiczną tablicą
- Konstruktor alokujący pamięć
- Destruktor zwalniający pamięć
- Metody `get()` i `set()`

---

## **ZAJĘCIA 6: Lista inicjalizacyjna i wskaźnik this**

### 19. Lista inicjalizacyjna konstruktora
```cpp
Card::Card(string c, int v) : color(c), value(v) {
    // ciało konstruktora
}
```
- Dlaczego lepsza niż przypisanie w ciele?
- Kiedy MUSIMY jej użyć? (const, referencje)

### 20. Wskaźnik this
- Każdy obiekt ma wskaźnik do siebie
- `this->color` vs `color`
- Kiedy jest niezbędny?
- **Praktyczne zastosowania**

---

## **ZAJĘCIA 7-8: Pliki .h i .cpp (ORGANIZACJA KODU)**

### 21. Dlaczego dzielimy kod?
- Deklaracja vs definicja
- Czytelność
- Wielokrotne użycie
- Szybsza kompilacja

### 22. Struktura pliku .h
```cpp
#ifndef CARD_H
#define CARD_H

class Card {
    // deklaracje
};

#endif
```

### 23. Struktura pliku .cpp
```cpp
#include "Card.h"

// definicje metod
Card::Card(...) { ... }
```

### 24. Include guards - po co?
- Problem wielokrotnego dołączania
- Rozwiązanie: `#ifndef`, `#define`, `#endif`
- Alternatywa: `#pragma once`

### 25. Ćwiczenie praktyczne 5
- **Refaktoryzacja**: przepisz klasę na .h i .cpp
- Kompilacja wieloplikowa
- **CEL**: Rozumieją organizację większych projektów

---

## **ZAJĘCIA 9-10: Konstruktor kopiujący i operator przypisania**

### 26. Po co kopiować obiekty?
- Przekazywanie przez wartość
- Zwracanie z funkcji
- Inicjalizacja

### 27. Kopiowanie płytkie vs głębokie
- **Problem**: wskaźniki w klasie
- Co się kopiuje?
- **Diagram pokazujący pamięć**

### 28. Konstruktor kopiujący
```cpp
Card::Card(const Card& other) {
    // głębokie kopiowanie
}
```

### 29. Operator przypisania
```cpp
Card& Card::operator=(const Card& other) {
    if (this != &other) {
        // kopiowanie
    }
    return *this;
}
```

### 30. Rule of Three / Rule of Five
- Destruktor
- Konstruktor kopiujący
- Operator przypisania
- (+ move constructor, move assignment w C++11)

### 31. Ćwiczenie praktyczne 6
- Klasa z dynamiczną pamięcią
- Implementacja konstruktora kopiującego
- Implementacja operatora przypisania
- **Testy**: czy kopiowanie działa poprawnie?

---

## **ZAJĘCIA 11-12: Paradygmaty OOP**

### 32. Abstrakcja
- Uproszczenie złożoności
- Pokazujemy tylko to, co istotne
- **Przykład**: interfejs pilota do TV

### 33. Enkapsulacja
- Ukrywanie implementacji
- `private`, `protected`, `public`
- **Po co?** - bezpieczeństwo, łatwiejsze zmiany

### 34. Podstawy dziedziczenia (wstęp)
- Klasa bazowa i pochodna
- `public Animal` - co to znaczy?
- **Prosty przykład**: Animal → Dog

### 35. Podstawy polimorfizmu (wstęp)
- Przeciążanie metod
- Jedna nazwa, różne zachowania
- **Przykład**: `print(int)` vs `print(string)`

---

## **ZAJĘCIA 13-14: Dziedziczenie (SZCZEGÓŁOWO)**

### 36. Dziedziczenie - dokładnie
- `class Dog : public Animal`
- Dostęp do składowych klasy bazowej
- **Diagram UML** z dziedziczeniem (strzałka z pustym trójkątem)

### 37. Poziomy dostępu
- `public` dziedziczenie
- `protected` dziedziczenie  
- `private` dziedziczenie
- **Kiedy którego użyć?**

### 38. Konstruktory w dziedziczeniu
- Wywoływanie konstruktora klasy bazowej
- Lista inicjalizacyjna
```cpp
Dog::Dog(string n) : Animal(n) { }
```

### 39. Przesłanianie metod
- Nadpisywanie zachowania klasy bazowej
- Kiedy używać?
- **Przykład**: `Animal::makeSound()` vs `Dog::makeSound()`

### 40. Ćwiczenie praktyczne 7
- Hierarchia: `Shape → Rectangle, Circle`
- Każda implementuje `area()` i `perimeter()`
- **Diagram UML** → kod

---

## **ZAJĘCIA 15-16: Polimorfizm i metody wirtualne**

### 41. Metody wirtualne - po co?
- Późne wiązanie (runtime)
- Wskaźnik/referencja do klasy bazowej
```cpp
Animal* a = new Dog();
a->makeSound(); // Co się wypisze?
```

### 42. Słowo kluczowe `virtual`
```cpp
class Animal {
    virtual void makeSound() { }
};
```

### 43. Klasy abstrakcyjne
- Metody czysto wirtualne: `= 0`
- Nie można tworzyć obiektów
- **Po co?** - wymuszamy implementację w klasach pochodnych

### 44. Polimorfizm w praktyce
```cpp
vector<Animal*> zoo;
zoo.push_back(new Dog());
zoo.push_back(new Cat());

for (auto animal : zoo) {
    animal->makeSound(); // polimorfizm!
}
```

### 45. Ćwiczenie praktyczne 8
- Klasa abstrakcyjna `Employee`
- Pochodne: `Manager`, `Developer`
- Polimorficzna metoda `calculateSalary()`
- **Użycie vectora** wskaźników

---

## **ZAJĘCIA 17: Dziedziczenie wielobazowe (OPCJONALNIE)**

### 46. Dziedziczenie wielobazowe w C++
```cpp
class Klasa : public BazowaA, public BazowaB { };
```

### 47. Problem diamentu
- Klasa dziedziczy wielokrotnie po tej samej klasie
- Rozwiązanie: dziedziczenie wirtualne

### 48. Kiedy używać? (rzadko!)
- Mixiny
- Interfejsy (lepiej w Javie)

---

## **ZAJĘCIA 18: Wzorce projektowe (PODSTAWY)**

### 49. Co to są wzorce projektowe?
- Sprawdzone rozwiązania typowych problemów
- Nie kod, ale koncepcja

### 50. Singleton
- Tylko jedna instancja klasy
- Globalny dostęp
```cpp
class Singleton {
    static Singleton& getInstance() {
        static Singleton instance;
        return instance;
    }
private:
    Singleton() { }
};
```

### 51. Factory (krótko)
- Tworzenie obiektów bez podawania klasy
- Przydatne przy polimorfizmie

---

## **ZAJĘCIA 19: Wyjątki**

### 52. Po co wyjątki?
- Obsługa błędów
- Oddzielenie logiki od error handling

### 53. try, catch, throw
```cpp
try {
    if (b == 0) throw runtime_error("Div by zero");
} catch (exception& e) {
    cerr << e.what();
}
```

### 54. Własne wyjątki
```cpp
class MyException : public exception {
    const char* what() const noexcept override {
        return "My error";
    }
};
```

### 55. Ćwiczenie praktyczne 9
- Klasa `BankAccount` z wyjątkami
- `InsufficientFundsException`
- `InvalidAmountException`

---

## **ZAJĘCIA 20: Klasy zaprzyjaźnione i podsumowanie**

### 56. friend - kiedy używać?
```cpp
class MyClass {
    friend class MyFriend;
};
```

### 57. Podsumowanie całego kursu
- Od prostej klasy do polimorfizmu
- Diagramy UML
- Dobre praktyki

### 58. Projekt końcowy
- **System zarządzania biblioteką**
  - Klasy: Book, User, Library
  - Dziedziczenie: różne typy użytkowników
  - Diagramy UML
  - Wyjątki przy wypożyczeniach

---

## **Kluczowe zmiany w strukturze:**

✅ **Praktyka od 1. zajęć** - studenci piszą pierwszą klasę na pierwszych zajęciach  
✅ **Diagramy UML na 2-3 zajęciach** - gdy już rozumieją co to klasa  
✅ **Stopniowe budowanie wiedzy** - od prostego do złożonego  
✅ **Więcej ćwiczeń praktycznych** - po każdym temacie  
✅ **Logiczny przepływ**: Klasa → Diagram → Konstruktory → Organizacja → Dziedziczenie → Polimorfizm  
✅ **Usunięto powtórkę wskaźników** - jeśli potrzeba, pojawią się w kontekście (new/delete)

---

## **Podział na tygodnie (15 tygodni):**

- **Tydzień 1**: Klasa i obiekt (zajęcia 1)
- **Tydzień 2-3**: Diagramy UML (zajęcia 2-3)
- **Tydzień 4-5**: Konstruktory (zajęcia 4-5)
- **Tydzień 6**: Lista inicjalizacyjna, this (zajęcia 6)
- **Tydzień 7-8**: Pliki .h/.cpp (zajęcia 7-8)
- **Tydzień 9-10**: Kopiowanie obiektów (zajęcia 9-10)
- **Tydzień 11-12**: Paradygmaty + Dziedziczenie (zajęcia 11-14)
- **Tydzień 13-14**: Polimorfizm (zajęcia 15-16)
- **Tydzień 15**: Wyjątki + podsumowanie (zajęcia 19-20)

*Zajęcia 17-18 opcjonalnie w zależności od tempa grupy*
