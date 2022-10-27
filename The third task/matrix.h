#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED

int** allocate_matrix(int m, int n); //выделение памяти для матрицы m*n
void input_matrix(int** a, int m, int n); //ввод
void print_matrix(int** a, int m, int n); //печать
int** mult(int** a, int ma, int na, int** b, int mb, int nb); //умножение a*b с созданием новой матрицы
void free_matrix(int** a, int m, int n); //освободить занятую память

#endif // MATRIX_H_INCLUDED
