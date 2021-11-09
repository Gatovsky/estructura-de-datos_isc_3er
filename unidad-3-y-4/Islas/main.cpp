// C++ Programa para contar el número de islas en un arreglo 2D, aplicando búsqueda en profundidad ()
#include <bits/stdc++.h>
using namespace std;

#define Filas 5
#define Columnas 5

// Función que verifica si una celda determinada (fila, columna) se puede incluir en DFS
int esSeguro(int M[][Columnas], int fil, int col, bool visitado[][Columnas]){
    return (fil >= 0) && (fil < Filas) && (col >= 0) && (col < Columnas) && (M[fil][col] && !visitado[fil][col]);
}
// Función para hacer DFS con una matriz booleana 2D. Solo considera los 8 vecinos como vértices adyacentes
void DFS(int M[][Columnas], int fil, int col, bool visitado[][Columnas]){
    static int numFil[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
    static int numCol[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
    visitado[fil][col] = true;
    for (int k = 0; k < 8; ++k)
        if (esSeguro(M, fil+numFil[k], col+numCol[k], visitado))
            DFS(M, fil+numFil[k], col+numCol[k], visitado);
}

// Función que devuelve la cantidad de islas en una matriz 2D booleana dada
int cuentaIslas(int M[][Columnas])
{
    bool visitado[Filas][Columnas];
    memset(visitado, 0, sizeof(visitado));
    int cuenta = 0;
    for (int i = 0; i < Filas; ++i)
        for (int j = 0; j < Columnas; ++j)
            if (M[i][j] && !visitado[i][j]) {
                DFS(M, i, j, visitado);
                ++cuenta;
            }
    return cuenta;
}
int main()
{
    int M[][Columnas] ={{ 1, 1, 0, 0, 0 },
                        { 0, 1, 0, 0, 1 },
                        { 1, 0, 1, 1, 1 },
                        { 0, 0, 0, 0, 0 },
                        { 1, 1, 1, 0, 1 }};
    cout << "Número de islas: " << cuentaIslas(M);
    return 0;
}