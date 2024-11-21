#include "Array.h"

using namespace std;

int main(){

    int n, m;

    cout << "Введите размер массива:" << endl;
    cin >> n;
    cout << "Введите количество частей на которые будет разбит массив:" << endl;
    cin >> m;
    printf("%-*i | %-*i | ", 15, n, 13, m);
    SumRandomArray object(n, m);

    object.printArray();
    cout << endl;
}