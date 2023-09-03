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

    int next() {
        return rand();
    }

    int nextInRange(int a, int b) {
        return rand() % (b - a + 1) + a;
    }
};