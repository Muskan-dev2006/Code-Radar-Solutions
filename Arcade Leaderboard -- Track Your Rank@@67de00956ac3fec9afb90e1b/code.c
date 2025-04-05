// Your code here...
void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]) {
    int uniqueScores[200000];
    int size = 0;

    uniqueScores[size++] = ranked[0];
    for (int i = 1; i < n; i++) {
        if (ranked[i] != ranked[i - 1]) {
            uniqueScores[size++] = ranked[i];
        }
    }
    int i = size - 1;
    for (int j = 0; j < m; j++) {
        int score = player[j];
        while (i >= 0 && score >= uniqueScores[i]) {
            i--;
        }
        result[j] = i + 2; 
    }
}
