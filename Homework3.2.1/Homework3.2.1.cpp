// Homework3.2.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

enum class seasons
{
    Январь = 1, Февраль, Март, Апрель, Май, Июнь, Июль, Август, Сентябрь, Октябрь, Ноябрь, Декабрь
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    seasons month = seasons::Январь;
    int num = static_cast<int>(month);
    while (num)
    {
        std::cout << "Введите номер месяца: ";
        std::cin >> num;
        if (num < 0 || num > 12) {
            std::cout << "Неправильный номер!" << std::endl;
        }

        switch (num)
        {
        case(0):
            std::cout << "До свидания" << std::endl;
            break;

        case(static_cast<int>(seasons::Январь)):
            std::cout << "Январь" << std::endl;
            break;

        case(static_cast<int>(seasons::Февраль)):
            std::cout << "Февраль" << std::endl;
            break;

        case(static_cast<int>(seasons::Март)):
            std::cout << "Март" << std::endl;
            break;

        case(static_cast<int>(seasons::Апрель)):
            std::cout << "Апрель" << std::endl;
            break;

        case(static_cast<int>(seasons::Май)):
            std::cout << "Май" << std::endl;
            break;

        case(static_cast<int>(seasons::Июнь)):
            std::cout << "Июнь" << std::endl;
            break;

        case(static_cast<int>(seasons::Июль)):
            std::cout << "Июль" << std::endl;
            break;

        case(static_cast<int>(seasons::Август)):
            std::cout << "Август" << std::endl;
            break;

        case(static_cast<int>(seasons::Сентябрь)):
            std::cout << "Сентябрь" << std::endl;
            break;

        case(static_cast<int>(seasons::Октябрь)):
            std::cout << "Октябрь" << std::endl;
            break;

        case(static_cast<int>(seasons::Ноябрь)):
            std::cout << "Ноябрь" << std::endl;
            break;

        case(static_cast<int>(seasons::Декабрь)):
            std::cout << "Декабрь" << std::endl;
            break;
        }
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
