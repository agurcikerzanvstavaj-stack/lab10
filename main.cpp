
#include <iostream>
#include <cmath>
using namespace std;

// ===== ЗАДАЧА 1 =====
struct TPoint {
    double x, y;
};

// ввод точки
void InputPoint(TPoint &p) {
    cin >> p.x >> p.y;
}

// длина отрезка
double Leng(TPoint A, TPoint B) {
    return sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
}

// вывод расстояний
void OutputLengths(TPoint A, TPoint B, TPoint C, TPoint D) {
    cout << "AB = " << Leng(A, B) << endl;
    cout << "AC = " << Leng(A, C) << endl;
    cout << "AD = " << Leng(A, D) << endl;
}


// ===== ЗАДАЧА 2 =====
struct Boat {
    double V, U, t1, t2;
};

// ввод данных
void InputBoat(Boat &b) {
    cout << "Введите V, U, t1, t2: ";
    cin >> b.V >> b.U >> b.t1 >> b.t2;
}

// обработка
double CalcDistance(Boat b) {
    return (b.V + b.U) * b.t1 + (b.V - b.U) * b.t2;
}

// вывод
void OutputBoat(Boat b) {
    cout << "Пройденный путь: " << CalcDistance(b) << endl;
}


// ===== ЗАДАЧА 3 =====
struct Numbers {
    int a, b, c;
};

// ввод
void InputNumbers(Numbers &n) {
    cout << "Введите A, B, C: ";
    cin >> n.a >> n.b >> n.c;
}

// обработка
bool Check(Numbers n) {
    return (n.a < n.b && n.b < n.c);
}

// вывод
void OutputNumbers(Numbers n) {
    if (Check(n))
        cout << "Истина (A < B < C)" << endl;
    else
        cout << "Ложь" << endl;
}


// ===== MAIN =====
int main() {

    // --- Задача 1 ---
    cout << "=== Задача 1 ===" << endl;
    TPoint A, B, C, D;

    cout << "Введите точки A, B, C, D:\n";
    InputPoint(A);
    InputPoint(B);
    InputPoint(C);
    InputPoint(D);

    OutputLengths(A, B, C, D);


    // --- Задача 2 ---
    cout << "\n=== Задача 2 ===" << endl;
    Boat b;

    InputBoat(b);
    OutputBoat(b);


    // --- Задача 3 ---
    cout << "\n=== Задача 3 ===" << endl;
    Numbers n;

    InputNumbers(n);
    OutputNumbers(n);

    return 0;
}
