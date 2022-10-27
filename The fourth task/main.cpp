#include <iostream>
#include "list.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    //������ ������
    Node<int>* list;
    init_list(list);

    //���������
    int n, t;
    cout << "������� ���������� ��������� � ������: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "������� ������� #" << i << ": ";
        cin >> t;
        add_list(list, t); //��������� � ������
    }
    cout << "\n������� ������:\n";
    print_list(list); //����� ������
    free_list(list); //������� ������
    return 0;
}
