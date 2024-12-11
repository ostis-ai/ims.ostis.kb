#include <iostream>
#include <cstring>
void printMessage(const char* message, int length)
{
  if (length == 0)
  {
    return;
  }
  std::cout << *message;
  printMessage(message + 1, length - 1);
}
void createGreeting()
{
  const char* greeting = "Дорогой Никита,\n"
                         "Поздравляем тебя с очередным плюсиком в Счётчике твоих достижений!\n"
                         "Ты — настоящий мастер C++ и настоящий Бьёрн Страуструп нашего факультета.\n"
                         "Как и он, ты вдохновляешь нас на новые свершения и открытия.\n"
                         "Пусть каждая новая итерация твоей жизни будет ещё лучше и успешнее предыдущей.\n"
                         "Пусть твои навыки и дальше растут, а дни как и код будут безба(шен/ж)ными и эффективными.\n"
                         "Оставайся таким же добрым, отзывчивым и инетересным, каким мы тебя знаем.\n"
                         "С наилучшими пожеланиями,\n"
                         "Твои друзья и коллеги.\n";
  int length = strlen(greeting);
  printMessage(greeting, length);
}
int main()
{
  createGreeting();
  return 0;
}
