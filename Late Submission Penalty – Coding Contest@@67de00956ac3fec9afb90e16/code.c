// Your code here...
int calculatePenalty(int subDay, int subMonth, int subYear,
                     int dueDay, int dueMonth, int dueYear) {

    if (subYear > dueYear) {
        return 10000;
    } else if (subYear == dueYear) {
        if (subMonth > dueMonth) {
            return 500 * (subMonth - dueMonth);
        } else if (subMonth == dueMonth && subDay > dueDay) {
            return 10 * (subDay - dueDay);  // <-- Fixed here
        }
    }

    return 0;
}
