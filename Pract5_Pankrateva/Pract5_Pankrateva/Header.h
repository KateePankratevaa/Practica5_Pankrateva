#pragma once


struct Time {
    int hours;
    int minutes;
    int seconds;
};

int CalculateMinutesDifference(const Time& startTime, const Time& endTime);
int CalculateMinutesDifference(int startHours, int startMinutes, int startSeconds, int endHours, int endMinutes, int endSeconds);
int CalculateMinutesDifference(int startHours, int startMinutes, int endHours, int endMinutes);

