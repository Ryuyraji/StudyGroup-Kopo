#pragma once
#include <iostream>
using namespace std;

#include <cstdlib>
#include <time.h>

// ���� ���� �߻���Ű�� Ŭ����
class Random {
public:
    Random() {
        srand((unsigned)time(NULL));    // �� ���ึ�� �ٸ� ���� ���� ����
    }

    int next(bool isEven) {
        int n;

        do {
            n = rand();
        } while (n % 2 == isEven);

        return n;
    }

    int nextInRange(int a, int b, bool isEven) {
        int n;

        do {
            n = rand() % (b - a + 1) + a;
        } while (n % 2 == isEven);

        return n;
    }
};