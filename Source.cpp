#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>
using namespace std;



// підрахунок символу c в рядку символів m
int Count(char n, std::string m, int i)


{
    setlocale(LC_ALL, "Ukrainian");
    if (i == m.length()) // умова закінчення рекурсивного процесу - увесь рядок пройдено
        return 0;
    else
    {
        if (n == m[i]) // якщо символ знайдено
            return Count(n, m, i + 1) + 1; // збільшити кількість знайдених символів на 1
        else
            return Count(n, m, i + 1); // інакше, перейти до обробки наступного символу
    }
}