#pragma once
#include<vector>

struct Element {
    int value;
    int priority;

    Element(int v, int p) : value(v), priority(p) {}
};

// Klasa reprezentuj�ca kolejk� priorytetow�
class PriorityQueue {
private:
    std::vector<Element> elements;

public:
    // Konstruktor
    PriorityQueue() {};

    // Funkcja dodaj�ca element do kolejki
    void enqueue(const Element& element);

    // Funkcja usuwaj�ca i zwracaj�ca element o najwy�szym priorytecie
    Element dequeue();

    // Funkcja sprawdzaj�ca, czy kolejka priorytetowa jest pusta
    bool isEmpty() const;

private:
    // Funkcja naprawiaj�ca kopiec w g�r� (dla dodanego elementu)
    void siftUp(int index);

    // Funkcja naprawiaj�ca kopiec w d� (dla usuni�tego elementu)
    void siftDown(int index);
};
