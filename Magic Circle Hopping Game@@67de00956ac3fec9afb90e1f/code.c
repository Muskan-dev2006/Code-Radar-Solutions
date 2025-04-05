// Your code here...
int finalEnergy(int clouds[], int n, int k) {
    int energy = 100;
    int pos = 0;

    do {
        pos = (pos + k) % n;
        energy -= 1;  
        if (clouds[pos] == 1) {
            energy -= 2;  
        }
    } while (pos != 0);

    return energy;
}
