﻿#include<iostream>
#include<vector>
#include<list>
#include<set>
#include"kolejkaPriorytetowa.h"
#include"Stos.h"
#include"graf.h"

using namespace std;

int main()
{
	// create the graph given in above figure
	int V = 9;
	graf g(V);

	// dodawanie punktów do grafu
	g.addEdge(0, 1, 4);
	g.addEdge(0, 7, 8);
	g.addEdge(1, 2, 8);
	g.addEdge(1, 7, 11);
	g.addEdge(2, 3, 7);
	g.addEdge(2, 8, 2);
	g.addEdge(2, 5, 4);
	g.addEdge(3, 4, 9);
	g.addEdge(3, 5, 14);
	g.addEdge(4, 5, 10);
	g.addEdge(5, 6, 2);
	g.addEdge(6, 7, 1);
	g.addEdge(6, 8, 6);
	g.addEdge(7, 8, 7);
	g.addEdge(0, 0, 2);

	// wyznaczenie najkrótszej ścieżki 
	g.shortestPath(0);

	return 0;
}
