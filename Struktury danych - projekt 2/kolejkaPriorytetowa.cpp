#include "kolejkaPriorytetowa.h"
#include <stdexcept>


void PriorityQueue::enqueue(const Element& element)
{
    elements.push_back(element);
    siftUp(elements.size() - 1);
}

Element PriorityQueue::dequeue()
{
    if (elements.empty()) {
        throw std::out_of_range("Kolejka priorytetowa jest pusta!");
    }

    Element top = elements.front();
    elements[0] = elements.back();
    elements.pop_back();
    siftDown(0);
    return top;
}

bool PriorityQueue::isEmpty() const
{
    return elements.empty();
}

void PriorityQueue::siftUp(int index)
{
    int parentIndex = (index - 1) / 2;

    while (index > 0 && elements[index].priority < elements[parentIndex].priority) {
        std::swap(elements[index], elements[parentIndex]);
        index = parentIndex;
        parentIndex = (index - 1) / 2;
    }
}

void PriorityQueue::siftDown(int index)
{
    int leftChildIndex = 2 * index + 1;
    int rightChildIndex = 2 * index + 2;
    int smallestIndex = index;

    if (leftChildIndex < elements.size() && elements[leftChildIndex].priority < elements[smallestIndex].priority) {
        smallestIndex = leftChildIndex;
    }

    if (rightChildIndex < elements.size() && elements[rightChildIndex].priority < elements[smallestIndex].priority) {
        smallestIndex = rightChildIndex;
    }

    if (smallestIndex != index) {
        std::swap(elements[index], elements[smallestIndex]);
        siftDown(smallestIndex);
    }
}
