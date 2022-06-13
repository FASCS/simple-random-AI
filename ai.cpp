#include <iostream>
#include <random>
#include <cmath>

using namespace std;


int random(double a, double b) {

	random_device rd;
	mt19937 mt(rd());
	uniform_real_distribution<double> dist(a, b);
	int c = round(dist(mt));
	return c;

}
int aiarray(int &aiconditions[], int size) {
        int aiconditions[size];
        return 0;
}
int airecord(double a, double b, int aiconditions[], int arraypos) {
        int c = random(a, b);
        aiconditions[arraypos] = c;
        return c;
}
int airead(int aiconditions[], int arraypos) {
        int c = aiconditions[arraypos];
        return c;
}
int aiwrite(int aiconditions[], int arraypos, int data) {
        aiconditions[arraypos] = data;
        return data;
}
