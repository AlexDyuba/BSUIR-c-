//
// Created by Alex on 9/18/21.
//

#include "ArrayInt.h"
#include <iostream>

ArrayInt::ArrayInt() :
        m_length(0), m_data(nullptr)
{
}

ArrayInt::ArrayInt(int length) :
        m_length(length)
{
    m_data = new int[length];
}

ArrayInt::ArrayInt(const std::initializer_list<int> &list) :
        ArrayInt(list.size())
{
    int count = 0;
    for (auto &element : list)
    {
        m_data[count] = element;
        ++count;
    }
}

ArrayInt::~ArrayInt()
{
    delete[] m_data;
    // Нам не нужно здесь присваивать значение null для m_data или выполнять m_length = 0, так как объект будет уничтожен сразу же после выполнения этой функции
}

int& ArrayInt::operator[](int index)
{
    assert(index >= 0 && index < m_length);
    return m_data[index];
}

int ArrayInt::getLength() const { return m_length; }

ArrayInt &ArrayInt::operator=(const std::initializer_list<int> &list) {

        // Если новый список имеет другой размер, то перевыделяем его
        if (list.size() != static_cast<size_t>(m_length))
        {
            // Удаляем все существующие элементы
            delete[] m_data;

            // Перевыделяем массив
            m_length = list.size();
            m_data = new int[m_length];
        }

        // Теперь инициализируем наш массив значениями из списка
        int count = 0;
        for (auto &element : list)
        {
            m_data[count] = element;
            ++count;
        }

        return *this;
}
