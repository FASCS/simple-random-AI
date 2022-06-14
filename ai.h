#include <iostream>
#include <random>
#include <cmath>

#define aiarraysize 8
#define aiarray int aiconditions[aiarraysize]


using namespace std;


int random(double a, double b) {

    random_device rd;
    mt19937 mt(rd());
    uniform_real_distribution<double> dist(a, b);
    int c = round(dist(mt));
    return c;

}

namespace AI {

    int swap(int aiconditions[], int pos1, int pos2) {
        int pos12 = aiconditions[pos1];
        int pos21 = aiconditions[pos2];
        aiconditions[pos1] = pos21;
        aiconditions[pos2] = pos12;
    }
    int mov(int aiconditions[], int pos1, int pos2) {
        aiconditions[pos1] = aiconditions[pos2];

    }
    int clean(int aiconditions[]) {
        for (int a = 0; a < aiarraysize; a = a + 1)
        {
            int c = 0;
            aiconditions[a] = c;
        }
        return 0;
    }
    int full(int ax, int aiconditions[]) {
        for (int a = 0; a < aiarraysize; a = a + 1)
        {
            aiconditions[a] = ax;
        }
        return 0;
    }
    int fill(double ax, double bx, int aiconditions[]) {
        for (int a = 0; a < aiarraysize; a = a + 1)
        {
            int c = random(ax, bx);
            aiconditions[a] = c;
        }
        return 0;
    }
    int record(double a, double b, int aiconditions[], int arraypos) {
        int c = random(a, b);
        aiconditions[arraypos] = c;
        return c;
    }
    int read(int aiconditions[], int arraypos) {
        int c = aiconditions[arraypos];
        return c;
    }
    int write(int aiconditions[], int arraypos, int data) {
        aiconditions[arraypos] = data;
        return data;
    }
}
