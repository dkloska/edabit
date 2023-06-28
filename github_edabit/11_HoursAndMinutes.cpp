#include "11_HoursAndMinutes.h"

int convertIntoSeconds(int hours, int minutes) {
	hours = 60 * 60 * hours;
	minutes = 60 * minutes;
	return hours + minutes;
}