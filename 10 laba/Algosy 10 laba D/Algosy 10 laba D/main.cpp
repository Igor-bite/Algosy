//
//  main.cpp
//  Algosy 10 laba D
//
//  Created by Игорь Клюжев on 30.03.2020.
//  Copyright © 2020 Игорь Клюжев. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int m = 50000;
int findMST(vector<int> edges, int n, int root) {
    int res = 0;
    int minEdge[n];
    for (int e : edges) {
        
    }
}

int main(int argc, const char * argv[]) {
    
    return 0;
}
/*

int findMST(edges, n, root):
int res = 0
int minEdge[n] // создаем массив минимумов, входящих в каждую компоненту, инициализируем бесконечностью.
for each e∈ edges
    minEdge[e.to] = min(e.w, minEdge[e.to])
for each v∈V∖{root}
    res += minEdge[v] //веса минимальных ребер точно будут в результате
edge zeroEdges[] //создаем массив нулевых ребер
for each e∈ edges
    if e.w == minEdge[e.to]
        zeroEdges.pushback(e1) // e1 - ребро е, уменьшенное на минимальный вес, входящий в e.to
if dfs(root, zeroEdges) // проверяем, можно ли дойти до всех вершин по нулевым ребрам
    return res
int newComponents[n] // будущие компоненты связности
newComponents = Сondensation(zeroEdges)
edge newEdges[] //создаем массив ребер в новом графе с вершинами в полученных компонентах
for each e∈ edges
    if e.to и e.from в разных компонентах
        добавляем в newEdges ребро с концами в данных компонентах и весом e.w - minEdge[e.to]
res += findMST(newEdges, ComponentsCount, newComponents[root])
return res
*/
