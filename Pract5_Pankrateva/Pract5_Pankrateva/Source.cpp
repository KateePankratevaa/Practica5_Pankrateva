
#include "Header.h"

int CalculateMinutesDifference(const Time& startTime, const Time& endTime) {
    int totalStartMinutes = startTime.hours * 60 + startTime.minutes;
    int totalEndMinutes = endTime.hours * 60 + endTime.minutes;

    return totalEndMinutes - totalStartMinutes;
}

int CalculateMinutesDifference(int startHours, int startMinutes, int startSeconds, int endHours, int endMinutes, int endSeconds) {
    int totalStartMinutes = startHours * 60 + startMinutes;
    int totalEndMinutes = endHours * 60 + endMinutes;

    return totalEndMinutes - totalStartMinutes;
}

int CalculateMinutesDifference(int startHours, int startMinutes, int endHours, int endMinutes) {
    int totalStartMinutes = startHours * 60 + startMinutes;
    int totalEndMinutes = endHours * 60 + endMinutes;

    return totalEndMinutes - totalStartMinutes;
}