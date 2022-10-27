#include <iostream>
#include "list.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    //пустой список
    Node<int>* list;
    init_list(list);

    //заполняем
    int n, t;
    cout << "Введите количество элементов в списке: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Введите элемент #" << i << ": ";
        cin >> t;
        add_list(list, t); //добавляем в список
    }
    cout << "\nПолучен список:\n";
    print_list(list); //вывод списка
    free_list(list); //очистка памяти
    return 0;
}
