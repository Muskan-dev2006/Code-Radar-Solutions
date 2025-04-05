// Your code here...
int calculatePenalty(int subDay, int subMonth, int subYear, int dueDay, int dueMonth, int dueYear) {
    if (subYear > dueYear) {
        return 5000;
    }
    if (subYear == dueYear) {
        if (subMonth > dueMonth) {
            return 200 * (subMonth - dueMonth);
        }
    
        else if (subMonth == dueMonth && subDay > dueDay) {
            return 10 * (subDay - dueDay);
        }
    }
    return 0;
}
