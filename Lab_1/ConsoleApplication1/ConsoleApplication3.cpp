#include "pch.h"

using namespace System;

int main(array<System::String^>^ args)
{
    // Щоб кирилиця нормально виводилася
    Console::OutputEncoding = System::Text::Encoding::UTF8;

    // Мій номер варіанту
    int N = 27;

    // Рахуємо розміри та ціну за формулами з методички
    double L = N + 10.0; // довжина
    double W = N + 5.0;  // ширина
    double C = N;        // ціна за квадрат

    // Рахуємо площу і скільки все це коштуватиме
    double area = L * W;
    double totalPrice = area * C;

    // Виводимо на екран. F2 залишає дві цифри після коми
    Console::WriteLine(L"Розмір кімнати {0:F2} метрів на {1:F2} метрів", L, W);
    Console::WriteLine(L"Площа кімнати {0:F2} квадратних метрів", area);
    Console::WriteLine(L"Ціна килимового покриття ${0:F2}", totalPrice);

    // Щоб консоль не закрилася миттєво
    Console::ReadLine();

    return 0;
}