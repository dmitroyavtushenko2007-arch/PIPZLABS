#include "pch.h"

using namespace System;

int main(array<System::String^>^ args)
{
    Console::OutputEncoding = System::Text::Encoding::Unicode;
    Console::InputEncoding = System::Text::Encoding::Unicode;

    // --- Завдання 1: Ціна килимового покриття ---
    Console::WriteLine(L"=== Завдання 1 ===");
    Console::Write(L"Введіть ваш номер варіанту: ");
    int N = Int32::Parse(Console::ReadLine());

    double L = N + 10.0;
    double W = N + 5.0;
    double C = N;

    double area = L * W;
    double totalPrice = area * C;

    Console::WriteLine(L"Розмір кімнати {0:F2} метрів на {1:F2} метрів", L, W);
    Console::WriteLine(L"Площа кімнати {0:F2} квадратних метрів", area);
    Console::WriteLine(L"Ціна килимового покриття ${0:F2}\n", totalPrice);


    // --- Завдання 2: Об'єднання двох рядків ---
    Console::WriteLine(L"=== Завдання 2 ===");
    Console::Write(L"Введіть перший рядок: ");
    String^ str1_t2 = Console::ReadLine();
    Console::Write(L"Введіть другий рядок: ");
    String^ str2_t2 = Console::ReadLine();

    String^ combinedStr = str1_t2 + str2_t2;

    Console::WriteLine(L"Перший рядок: {0}", str1_t2);
    Console::WriteLine(L"Другий рядок: {0}", str2_t2);
    Console::WriteLine(L"Результат: {0}\n", combinedStr);


    // --- Завдання 3: Порівняння рядків (Compare) ---
    Console::WriteLine(L"=== Завдання 3 ===");
    Console::Write(L"Введіть перший рядок: ");
    String^ str1_t3 = Console::ReadLine();
    Console::Write(L"Введіть другий рядок: ");
    String^ str2_t3 = Console::ReadLine();

    int result = String::Compare(str1_t3, str2_t3);

    if (result < 0)
        Console::WriteLine(L"Рядок '{0}' менше ніж рядок '{1}'.\n", str1_t3, str2_t3);
    else if (result > 0)
        Console::WriteLine(L"Рядок '{0}' більше ніж рядок '{1}'.\n", str1_t3, str2_t3);
    else
        Console::WriteLine(L"Рядок '{0}' еквівалентно рядку '{1}'.\n", str1_t3, str2_t3);


    // --- Завдання 4: Додавання 'begin' та 'end' і довжина рядка ---
    Console::WriteLine(L"=== Завдання 4 ===");
    Console::Write(L"Введіть початковий рядок: ");
    String^ originalStr_t4 = Console::ReadLine();

    String^ resultStr = L"begin" + originalStr_t4 + L"end";
    int length = resultStr->Length;

    Console::WriteLine(L"Початковий рядок: {0}", originalStr_t4);
    Console::WriteLine(L"Одержаний рядок: {0}", resultStr);
    Console::WriteLine(L"Довжина одержаного рядка: {0} символів\n", length);


    // --- Завдання 5: Реверс рядка ---
    Console::WriteLine(L"=== Завдання 5 ===");
    Console::Write(L"Введіть початковий рядок: ");
    String^ originalStr_t5 = Console::ReadLine();

    String^ reversedStr = L"";
    for (int i = originalStr_t5->Length - 1; i >= 0; --i)
    {
        reversedStr += originalStr_t5[i];
    }

    Console::WriteLine(L"Початковий рядок: {0}", originalStr_t5);
    Console::WriteLine(L"Одержаний рядок: {0}\n", reversedStr);


    // --- Завдання 6: Порівняння довжини двох рядків ---
    Console::WriteLine(L"=== Завдання 6 ===");
    Console::Write(L"Введіть перший рядок (слова через пробіл): ");
    String^ str1_t6 = Console::ReadLine();
    Console::Write(L"Введіть другий рядок (слова через пробіл): ");
    String^ str2_t6 = Console::ReadLine();

    int length1 = str1_t6->Length;
    int length2 = str2_t6->Length;

    Console::WriteLine(L"Перший рядок: '{0}' (Довжина: {1})", str1_t6, length1);
    Console::WriteLine(L"Другий рядок: '{0}' (Довжина: {1})", str2_t6, length2);

    if (length1 > length2)
        Console::WriteLine(L"Результат: Перший рядок довше.");
    else if (length1 < length2)
        Console::WriteLine(L"Результат: Другий рядок довше.");
    else
        Console::WriteLine(L"Результат: Рядки мають однакову довжину.");

    Console::ReadLine();
    return 0;
}