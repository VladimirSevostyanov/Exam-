#include <iostream>
#include "matrix.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int ma, na, mb, nb;
    //создание и ввод матриц
    cout << "Введите размерность матрицы A (строк столбцов через пробел): ";
    cin >> ma >> na;
    int** A = allocate_matrix(ma, na);
    input_matrix(A, ma, na);

    cout << "\nВведите размерность матрицы B (строк столбцов через пробел): ";
    cin >> mb >> nb;
    int** B = allocate_matrix(mb, nb);
    input_matrix(B, mb, nb);

    //вывод исходных
    cout << "\nA:\n";
    print_matrix(A, ma, na);
    cout << "\nB:\n";
    print_matrix(B, mb, nb);

    //выполняем умножение
    cout << "\nA * B:\n";
    int** c = mult(A, ma, na, B, mb, nb);
    if (c != NULL) //если получили результат
    {
        print_matrix(c, ma, nb);
    }
    else
    {
        cout << "Некорректная размерность матриц для умножения!\n";
    }

    //очищаем память
    free_matrix(A, ma, na);
    free_matrix(B, mb, nb);
    if (c != NULL)
        free_matrix(c, ma, nb);
    return 0;
}
/*
 Введите размерность матрицы A (строк столбцов через пробел): 2 3
input element [0][0]: 1
input element [0][1]: 2
input element [0][2]: 3
input element [1][0]: 1
input element [1][1]: 2
input element [1][2]: 3

Введите размерность матрицы B (строк столбцов через пробел): 3 2
input element [0][0]: 1
input element [0][1]: 2
input element [1][0]: 3
input element [1][1]: 1
input element [2][0]: 2
input element [2][1]: 3

A:
1       2       3
1       2       3

B:
1       2
3       1
2       3

A * B:
13      13
13      13
 */

/*
 Введите размерность матрицы A (строк столбцов через пробел): 2 3
input element [0][0]: 1
input element [0][1]: 2
input element [0][2]: 3
input element [1][0]: 1
input element [1][1]: 2
input element [1][2]: 3

Введите размерность матрицы B (строк столбцов через пробел): 2 3
input element [0][0]: 1
input element [0][1]: 2
input element [0][2]: 3
input element [1][0]: 12
input element [1][1]: 2
input element [1][2]: 3

A:
1       2       3
1       2       3

B:
1       2       3
12      2       3

A * B:
Некорректная размерность матриц для умножения!
 */