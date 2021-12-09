#include <iostream>
#include "Grafos.hpp"

using std::cout;
using std::endl;

void mostrarNodo(char nodo);

int main()
{
    GRAFO<char> g =
    {
        {'a', {'c', 'b'}},
        {'b', {'d'}},
        {'c', {'e'}},
        {'d', {'f'}},
        {'e', {}},
        {'f', {}}  
    };
    DFS<char>(g, 'a', &mostrarNodo);
    cout << endl;
    BFS<char>(g, 'a', &mostrarNodo);
}

void mostrarNodo(char nodo)
{
    cout << nodo << " ";
}