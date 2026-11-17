#include "pch.h"

using namespace System;

int main(array<System::String^>^ args)
{
    // =======================================================
    // ЗАВДАННЯ 1: Одновимірні масиви CLR
    // =======================================================
    Console::WriteLine(L"==================================================");
    Console::WriteLine(L"                   ЗАВДАННЯ 1                     ");
    Console::WriteLine(L"==================================================");

    int first_n;

    // Введення початкового числа з перевіркою
    while (true)
    {
        Console::Write(L"Введіть початкове число (непарне >= 5): ");
        first_n = Int32::Parse(Console::ReadLine());

        if (first_n >= 5 && first_n % 2 != 0)
            break;

        Console::WriteLine(L"Помилка! Число має бути непарним і >= 5.\n");
    }

    const int count = 10;
    array<int>^ X = gcnew array<int>(count);
    array<double>^ Y = gcnew array<double>(count);

    Console::WriteLine(L"\nРезультати обчислень (y = x^2):");

    // Формування масиву непарних чисел та розрахунок функції
    for (int i = 0; i < count; i++)
    {
        X[i] = first_n + 2 * i;
        Y[i] = Math::Pow(X[i], 2.0);
        Console::WriteLine(L"  X[{0}] = {1,2}  -->  Y = {2,4}", i, X[i], Y[i]);
    }

    // =======================================================
    // ЗАВДАННЯ 2: Двовимірні масиви CLR
    // =======================================================
    Console::WriteLine(L"\n==================================================");
    Console::WriteLine(L"                   ЗАВДАННЯ 2                     ");
    Console::WriteLine(L"==================================================");

    Console::Write(L"Введіть розмірність квадратної матриці N: ");
    int N = Int32::Parse(Console::ReadLine());

    array<double, 2>^ A = gcnew array<double, 2>(N, N);
    array<double, 2>^ B = gcnew array<double, 2>(N, N);

    // Генерація випадкових чисел від 1 до 99 для матриці A
    Random^ rnd = gcnew Random();
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            A[i, j] = rnd->Next(1, 100);

    // Формування матриці B 
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j >= i)
                B[i, j] = A[i, j];
            else
                B[i, j] = A[j, i];
        }
    }

    // Виведення матриці A
    Console::WriteLine(L"\nМатриця A:");
    for (int i = 0; i < N; i++)
    {
        Console::Write(L"  ");
        for (int j = 0; j < N; j++)
            Console::Write(L"{0,4} ", A[i, j]);
        Console::WriteLine();
    }

    // Виведення результуючої матриці B
    Console::WriteLine(L"\nМатриця B:");
    for (int i = 0; i < N; i++)
    {
        Console::Write(L"  ");
        for (int j = 0; j < N; j++)
            Console::Write(L"{0,4} ", B[i, j]);
        Console::WriteLine();
    }

    Console::WriteLine(L"==================================================");

    return 0;
}