#include <iostream>


int TrueOrFalse_MinMaxNumber(int num, int min = 1, int max = 100) {
    if (num < min || num > max) {
        std::cout << "Число не может быть меньше 1 и больше 100!";
        return main();
    }
    else {
        return true;
    }

}

void RandNumber() {
        int number;
        
        std::cout << "Добро пожаловать в игру 'Угадай число'!" << std::endl;
        std::cout << "Я загадал число от 1 до 100." << std::endl;
        std::cout << "Попробуйте угадать его!" << std::endl;
        std::cout << "Введите предполагаемое число: ";

        std::cin >> number;
        if (TrueOrFalse_MinMaxNumber(number) == true) {
            if (number == rand() % 100) { std::cout << "Поздравляем вас! Вы смотгли угадать число!"; }
            else { std::cout << "Повезёт в следующий раз"; }
        }
}


int main() {
    int DO;
    std::cout << "Вас приветствует казино \'KazahZik\'" << std::endl;
    std::cout << "[1] Угадай число" << std::endl
        << "[2] None" << std::endl;
    syd::cout << "Введи номер игры в которую хотите сыграть:";

    if (DO < 1 || DO > 1) {
        std::cout << "Неверное значение!";
        return main();
    }

    system("cls");

    if (DO == 1) {
        RandNumber()
    }
    

   
}
