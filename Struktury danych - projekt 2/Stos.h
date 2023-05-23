#pragma once
class stos
{
public:
	const int ERROR = 1000000000;

	stos();
	~stos();

	void push(int x);
	int pop();
	int value();
	bool empty();
	unsigned int size();

private:
	bool f; // Flaga do oznaczenia, czy stos ma jak¹kolwiek zawartoœæ | 1 - stos pusty / 0 - stos z zawartoœci¹
	unsigned int i; // Aktualna liczba elementów
	struct wezel {
		int element; // Wartoœæ elementu
		wezel* prev; // WskaŸnik na poprzedni element
	};
	wezel* el; // Zmienna do elementu
	wezel* temp; // Zmienna tymczasowa 
};

