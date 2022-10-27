#include "matrix.h"
#include <iostream>

using namespace std;

//выделение памяти для матрицы m*n
int** allocate_matrix(int m, int n)
{
    int** a = new int*[m];
    for (int i = 0; i < m; i++)
        a[i] = new int[n];
    return a;
}

//ввод
void input_matrix(int** a, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "input element [" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }
}

//печать
void print_matrix(int** a, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << "\t";
        cout << endl;
    }
}

//умножение a*b с созданием новой матрицы
int** mult(int** a, int ma, int na, int** b, int mb, int nb)
{
    if (na != mb) //если размерность некорректна
        return NULL; //не умножаем, пустая ссылка
    int** res = allocate_matrix(ma, nb); //память под результирующую
    for (int i = 0; i < ma; i++)
    {
        for (int j = 0; j < nb; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < mb; k++)
            {
                res[i][j] += a[i][k] * b[k][j]; //суммирование соответствующих элементов
            }
        }
    }
    return res;
}

void free_matrix(int** a, int m, int n) //освободить занятую память
{
    for (int i = 0; i < m; i++)
        delete[] a[i];
    delete[] a;
}
