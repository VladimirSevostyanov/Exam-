#pragma once
#include "list.h"
#include <iostream>

using namespace std;

//инициализация пустой ссылки списка
template <typename T>
void init_list(Node<T>*& list)
{
    list = NULL;
}

//добавить новое число
template <typename T>
void add_list(Node<T>*& list, T x)
{
    //создаем новый узел
    Node<T>* n = new Node<T>(x);
    if (list == NULL) //если список пуст
    {
        list = n; //новый элемент является первым
    }
    else
    {
        //доходим до последнего
        Node<T>* t = list;
        while (t->next != NULL)
            t = t->next;
        t->next = n; //вставка в конец
    }
}

//печать списка
template <typename T>
void print_list(Node<T>* list)
{
    Node<T>* t = list;
    while (t != NULL)
    {
        cout << t->value << " ";
        t = t->next;
    }
    cout << endl;
}

//освободить занятую память
template <typename T>
void free_list(Node<T>* list)
{
    Node<T>* rm;
    while (list != NULL)
    {
        rm = list;
        list = list->next;
        delete rm; //удаляем узел из памяти
    }
}
