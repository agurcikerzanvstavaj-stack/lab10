#include <iostream>
#include <cmath>
using namespace std;

// --- ЗАДАЧА 1 ---
// Тип TPoint и функция Leng
struct TPoint {
    double x;
    double y;
};

double Leng(TPoint A, TPoint B) {
    return sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
}

// --- ОСНОВНАЯ ПРОГРАММА ---
int main() {

    // ===== ЗАДАЧА 1 =====
    cout << "=== Задача 1 ===" << endl;
    TPoint A, B, C, D;

    cout << "Введите координаты A (x y): ";
    cin >> A.x >> A.y;
    cout << "Введите координаты B (x y): ";
    cin >> B.x >> B.y;
    cout << "Введите координаты C (x y): ";
    cin >> C.x >> C.y;
    cout << "Введите координаты D (x y): ";
    cin >> D.x >> D.y;

    cout << "AB = " << Leng(A, B) << endl;
    cout << "AC = " << Leng(A, C) << endl;
    cout << "AD = " << Leng(A, D) << endl;


    // ===== ЗАДАЧА 2 =====
    cout << "\n=== Задача 2 ===" << endl;
    double V, U, t1, t2;

    cout << "Введите скорость лодки в стоячей воде V: ";
    cin >> V;
    cout << "Введите скорость течения U: ";
    cin >> U;
    cout << "Введите время по течению t1: ";
    cin >> t1;
    cout << "Введите время против течения t2: ";
    cin >> t2;

    double S = (V + U) * t1 + (V - U) * t2;
    cout << "Пройденный путь: " << S << endl;


    // ===== ЗАДАЧА 3 =====
    cout << "\n=== Задача 3 ===" << endl;
    int a, b, c;

    cout << "Введите три числа A, B, C: ";
    cin >> a >> b >> c;

    if (a < b && b < c)
        cout << "Истина (A < B < C)" << endl;
    else
        cout << "Ложь" << endl;

    return 0;
}
