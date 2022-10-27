#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED

int** allocate_matrix(int m, int n); //��������� ������ ��� ������� m*n
void input_matrix(int** a, int m, int n); //����
void print_matrix(int** a, int m, int n); //������
int** mult(int** a, int ma, int na, int** b, int mb, int nb); //��������� a*b � ��������� ����� �������
void free_matrix(int** a, int m, int n); //���������� ������� ������

#endif // MATRIX_H_INCLUDED
