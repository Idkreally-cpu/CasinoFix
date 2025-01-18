#include <iostream>

int main()
{
    //Задание №1
    //Пользовательский интерфейс интерфейс
#include <iostream>
#include <cstdlib>
#include <ctime>

    void printInstructions() {
        std::cout << "Добро пожаловать в игру 'Угадай число'!" << std::endl;
        std::cout << "Я загадал число от 1 до 100." << std::endl;
        std::cout << "Попробуйте угадать его!" << std::endl;
    }

    int main() {
        std::srand(static_cast<unsigned int>(std::time(0))); // Инициализация генератора случайных чисел
        int targetNumber = std::rand() % 100 + 1; // Случайное число от 1 до 100
        int guess = 0;
        int attempts = 0;

        printInstructions();

        while (true) {
            std::cout << "Введите ваше предположение: ";
            std::cin >> guess;

            if (std::cin.fail()) { // Проверка на корректность ввода
                std::cin.clear(); // Сброс состояния потока
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Игнорирование некорректного ввода
                std::cout << "Пожалуйста, введите корректное число!" << std::endl;
                continue;
            }

            attempts++;

            if (guess < 1 || guess > 100) {
                std::cout << "Число должно быть в диапазоне от 1 до 100." << std::endl;
            }
            else if (guess < targetNumber) {
                std::cout << "Слишком низко! Попробуйте снова." << std::endl;
            }
            else if (guess > targetNumber) {
                std::cout << "Слишком высоко! Попробуйте снова." << std::endl;
            }
            else {
                std::cout << "Поздравляем! Вы угадали число " << targetNumber
                    << " за " << attempts << " попыток!" << std::endl;
                break; // Завершение игры
            }
        }

        return 0;
    }

    
    //Задание №2
    //Пользовательский интерфейс интерфейс
    


    //Задание №3
    //Пользовательский интерфейс интерфейс
}
