#include <iostream>
#include <random>

int main();

void RandNumber() {
    int number;

    std::cout << "Добро пожаловать в игру 'Угадай число'!" << std::endl;
    std::cout << "Я загадал число от 1 до 100." << std::endl;
    std::cout << "Попробуйте угадать его!" << std::endl;
    std::cout << "Введите предполагаемое число: ";

    std::random_device rd;  // Получаем случайное значение из аппаратного источника
    std::mt19937 gen(rd());  // Инициализируем генератор Мерсенна
    std::uniform_int_distribution<> distrib(1, 100); // Определяем диапазон от 1 до 100

    int randomNumber = distrib(gen);


    std::cin >> number;
    if (number < 0 || number > 100) { std::cout << "Неверное значение, число должно быть от 1 до 100"; main(); }
    else {
        if (number == randomNumber) { std::cout << "Поздравляем вас! Вы смотгли угадать число!"; }
        else { system("cls"); std::cout << "Повезёт в следующий раз\n" << "Случайное число от 1 до 100: " << randomNumber << std::endl; }
    }
}


int main() {
    int Game;
    std::cout << "Вас приветствует казино \'KazahZik\'" << std::endl;
    std::cout << "[1] Угадай число" << std::endl
        << "[2] None" << std::endl;
    std::cout << "Введи номер игры в которую хотите сыграть:";

    std::cin >> Game;

    if (Game < 1 || Game > 1) {
        std::cout << "Неверное значение!";
        return main();
    }

    system("cls");

    switch (Game)
    {
    case 1:
        RandNumber();
        break;
    }
}