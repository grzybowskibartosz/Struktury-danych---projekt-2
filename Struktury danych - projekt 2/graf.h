// This class represents a directed graph using
// adjacency list representation
#include<vector>
#include<list>
#include<set>


using namespace std;
# define INF 0x3f3f3f3f


class graf
{
	int V; // No. of vertices

	// In a weighted graph, we need to store vertex
	// and weight pair for every edge
	list< pair<int, int> >* adj;

public:
	graf(int V); // Constructor

	// function to add an edge to graph
	void addEdge(int u, int v, int w);

	// prints shortest path from s
	void shortestPath(int s);
};








