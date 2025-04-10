// Your code here...
void deflateBalloons(int air[], int n) {
    int done = 0;

    while (done < n) {
        int min = 10001;
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                count++;
                if (air[i] < min)
                    min = air[i];
            }
        }

        if (count == 0)
            break;
        printf("%d\n", count);

        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                air[i] -= min;
                if (air[i] == 0)
                    done++;
            }
        }
    }
}
