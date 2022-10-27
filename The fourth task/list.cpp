#pragma once
#include "list.h"
#include <iostream>

using namespace std;

//������������� ������ ������ ������
template <typename T>
void init_list(Node<T>*& list)
{
    list = NULL;
}

//�������� ����� �����
template <typename T>
void add_list(Node<T>*& list, T x)
{
    //������� ����� ����
    Node<T>* n = new Node<T>(x);
    if (list == NULL) //���� ������ ����
    {
        list = n; //����� ������� �������� ������
    }
    else
    {
        //������� �� ����������
        Node<T>* t = list;
        while (t->next != NULL)
            t = t->next;
        t->next = n; //������� � �����
    }
}

//������ ������
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

//���������� ������� ������
template <typename T>
void free_list(Node<T>* list)
{
    Node<T>* rm;
    while (list != NULL)
    {
        rm = list;
        list = list->next;
        delete rm; //������� ���� �� ������
    }
}
