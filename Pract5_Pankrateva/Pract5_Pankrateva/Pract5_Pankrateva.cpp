#include <iostream>
#include "Header.h"


int main() {
    setlocale(LC_ALL, "Russian");
    Time startTime = { 10, 15, 0 }; // Наачло 10:15:00
    Time endTime = { 12, 30, 0 };   // Конец 12:30:00

    int minutesDiff = CalculateMinutesDifference(startTime, endTime);

    std::cout << "Разница в минутах, если начало в 10:15 и конец в 12:30:\n " << std::endl;

    std::cout << "Два параметра типа структура:\n " << minutesDiff << std::endl;

    int minutesDiff2 = CalculateMinutesDifference(10, 15, 0, 12, 30, 0);
    std::cout << "Шесть целочисленных параметра:\n " << minutesDiff2 << std::endl;

    int minutesDiff3 = CalculateMinutesDifference(10, 15, 12, 30);
    std::cout << "Четыре целочисленных параметра:\n " << minutesDiff3 << std::endl;

    return 0;
}
