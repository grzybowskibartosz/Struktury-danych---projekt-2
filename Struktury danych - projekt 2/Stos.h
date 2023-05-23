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
	bool f; // Flaga do oznaczenia, czy stos ma jak�kolwiek zawarto�� | 1 - stos pusty / 0 - stos z zawarto�ci�
	unsigned int i; // Aktualna liczba element�w
	struct wezel {
		int element; // Warto�� elementu
		wezel* prev; // Wska�nik na poprzedni element
	};
	wezel* el; // Zmienna do elementu
	wezel* temp; // Zmienna tymczasowa 
};

