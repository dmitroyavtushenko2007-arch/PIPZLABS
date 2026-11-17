#include "pch.h"

using namespace System;

int main(array<System::String^>^ args)
{
    Console::OutputEncoding = System::Text::Encoding::UTF8;

    // Ініціалізуємо два рядки. Префікс L вказує на використання широких символів (Unicode)
    String^ str1 = L"Перший рядок ";
    String^ str2 = L"та другий рядок.";

    // Об'єднуємо рядки за допомогою оператора +
    String^ combinedStr = str1 + str2;

    // Виводимо початкові рядки та результат їх об'єднання
    Console::WriteLine(L"Перший рядок: {0}", str1);
    Console::WriteLine(L"Другий рядок: {0}", str2);
    Console::WriteLine(L"Результат: {0}", combinedStr);

    Console::ReadLine();

    return 0;
}