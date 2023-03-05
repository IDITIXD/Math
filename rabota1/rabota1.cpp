﻿#include <iostream>
#include "math.h"// Библиотека для математических операций
using namespace::std;

double F(double x, double a)// Функция возвращает результат(у), на вход принимает переменную х и параметр а
{
   return 30 / (sin(a * x) + a * x * x);
}

int main()
{
    setlocale(0, "");// Для русского вывода
    double a; // Параметр
    cout << "Введите значение параметра а: ";
    cin >> a; // Ввод параметра
    int i = 1;
    printf("%20s %20s %20s %20s", "№п.п.", "Значение x","Значение a" , "Значение y");//Печать названий столбцов
    cout << "\n";

    for (double x = -10; x <= 3; x=x + 1.3) // Прогоняем х с -10 до 3 с шагом 1,3
    {
        if ((sin(a * x) + a * x * x) != 0) // Проверка на возможность вычислить значение
            printf("%20i %20.1f %20f %20f", i, x, a, F(x, a)); //Печать строки таблицы
        else
        {
            printf("%20i %20.1f %20f %20s", i, x, a,"Деление на 0!"); //Печать строки таблицы в случае ошибки
        }
        cout <<"\n"; 
        i++;// Счётчик для нумерации
    }
}
