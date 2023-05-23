#include "stos.h"
#include <iostream>

using namespace std;

stos::stos()
{
    i = 0;
    f = 1;
    el = NULL;
}

stos::~stos()
{
    while (el != NULL)
    {
        temp = el->prev;
        delete el;
        el = temp;
    }
}

void stos::push(int x)
{
    if (f) // Warunek dla pierwszego elementu 
    {
        f = 0;
        el = new wezel;
        el->element = x;
        el->prev = NULL;
    }
    else // To siê wykona kiedy na stosie le¿y ju¿ jakiœ obiekt
    {
        temp = new wezel;
        temp->element = x;
        temp->prev = el;
        el = temp;
    }
    i++;
}

int stos::pop()
{
    if (el == NULL) return 0; // Warunek dla pustego stosu

    temp = el->prev;
    delete el;
    el = temp;
    i--;

    return 1;
}

int stos::value()
{
    if (!empty())
        return el->element;

    return ERROR;
}

bool stos::empty()
{
    return i == 0 ? 1 : 0;
}

unsigned int stos::size()
{
    return i;
}
