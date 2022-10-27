#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <iostream>

//��������� �������������� ���� ������
template <typename T>
struct Node
{
    T value;
    Node* next;

    Node(T value)
    {
        this->value = value;
        this->next = NULL;
    }
};

template <typename T>
void init_list(Node<T>*& list); //������������� ������ ������ ������

template <typename T>
void add_list(Node<T>*& list, T x); //�������� ����� �����

template <typename T>
void print_list(Node<T>* list); //������ ������

template <typename T>
void free_list(Node<T>* list); //���������� ������

#include "list.cpp"

#endif // LIST_H_INCLUDED
