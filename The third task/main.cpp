#include <iostream>
#include "matrix.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int ma, na, mb, nb;
    //�������� � ���� ������
    cout << "������� ����������� ������� A (����� �������� ����� ������): ";
    cin >> ma >> na;
    int** A = allocate_matrix(ma, na);
    input_matrix(A, ma, na);

    cout << "\n������� ����������� ������� B (����� �������� ����� ������): ";
    cin >> mb >> nb;
    int** B = allocate_matrix(mb, nb);
    input_matrix(B, mb, nb);

    //����� ��������
    cout << "\nA:\n";
    print_matrix(A, ma, na);
    cout << "\nB:\n";
    print_matrix(B, mb, nb);

    //��������� ���������
    cout << "\nA * B:\n";
    int** c = mult(A, ma, na, B, mb, nb);
    if (c != NULL) //���� �������� ���������
    {
        print_matrix(c, ma, nb);
    }
    else
    {
        cout << "������������ ����������� ������ ��� ���������!\n";
    }

    //������� ������
    free_matrix(A, ma, na);
    free_matrix(B, mb, nb);
    if (c != NULL)
        free_matrix(c, ma, nb);
    return 0;
}


/*
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
A:
1       2       3
1       2       3

B:
1       2       3
1       2       3

A * B:
������������ ����������� ������ ��� ���������!
*/