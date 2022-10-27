#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <iostream>

//структура представляющая узел списка
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
void init_list(Node<T>*& list); //инициализация пустой ссылки списка

template <typename T>
void add_list(Node<T>*& list, T x); //добавить новое число

template <typename T>
void print_list(Node<T>* list); //печать списка

template <typename T>
void free_list(Node<T>* list); //освободить память

#include "list.cpp"

#endif // LIST_H_INCLUDED
