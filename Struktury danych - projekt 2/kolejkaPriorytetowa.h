#pragma once
#include<vector>

struct Element {
    int value;
    int priority;

    Element(int v, int p) : value(v), priority(p) {}
};

// Klasa reprezentuj¹ca kolejkê priorytetow¹
class PriorityQueue {
private:
    std::vector<Element> elements;

public:
    // Konstruktor
    PriorityQueue() {};

    // Funkcja dodaj¹ca element do kolejki
    void enqueue(const Element& element);

    // Funkcja usuwaj¹ca i zwracaj¹ca element o najwy¿szym priorytecie
    Element dequeue();

    // Funkcja sprawdzaj¹ca, czy kolejka priorytetowa jest pusta
    bool isEmpty() const;

private:
    // Funkcja naprawiaj¹ca kopiec w górê (dla dodanego elementu)
    void siftUp(int index);

    // Funkcja naprawiaj¹ca kopiec w dó³ (dla usuniêtego elementu)
    void siftDown(int index);
};
