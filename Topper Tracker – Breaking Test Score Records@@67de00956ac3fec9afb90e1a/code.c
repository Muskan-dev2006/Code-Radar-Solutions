// Your code here...
void trackScores(int scores[], int n, int result[]) {
    int highest = scores[0];
    int lowest = scores[0];
    int highBreaks = 0;
    int lowBreaks = 0;

    for (int i = 1; i < n; i++) {
        if (scores[i] > highest) {
            highest = scores[i];
            highBreaks++;
        } else if (scores[i] < lowest) {
            lowest = scores[i];
            lowBreaks++;
        }
    }

    result[0] = highBreaks;
    result[1] = lowBreaks;
}
