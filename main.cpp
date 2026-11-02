#include <iostream>
using namespace std;

// If13. Дано три числа. Знайти середнє з них.
void task_if13()
{
    double a, b, c;

    cout << "\n************* If13 *************" << endl;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (!cin)
    {
        cout << "Wrong input!" << endl;
        cin.clear();
        cin.ignore(10000, '\n');
        return;
    }

    // Знаходимо число, розташоване між двома іншими.
    if ((a >= b && a <= c) || (a >= c && a <= b))
        cout << "Middle number: " << a << endl;
    else if ((b >= a && b <= c) || (b >= c && b <= a))
        cout << "Middle number: " << b << endl;
    else
        cout << "Middle number: " << c << endl;
}

// If32. Обчислити значення функції h(x).
// h(x) = 2x, якщо x < 0;
// h(x) = x, якщо 0 <= x < 7;
// h(x) = x - 6, якщо x >= 7.
void task_if32() 
{
    double x, h;

    cout << "\n************* If32 *************";
    cout << "Enter x: ";
    cin >> x;

    if (cin){

        if (x < 0){
            h = 2 * x;
        }   
        else if (x < 7){
            h = x;
        }     
        else {
            h = x - 6;
        }
    
        cout << "h(x) = " << h << endl;
    }
}

// завдання 2 реалізація
void task_geom1 () 
{
    double x, y, r; 
    cout << "Введіть x, y, r : ";
    cin >> x >> y >> r;
    
    bool triangle = (x >= 0 && x <= 2*r && 
                    y <= 0 && y >=x-2*r);
    bool circle = (x >= r && y >= 0 &&
                   y <= x-r && 
                   (x-r)*(x-r) + (y-r)*(y-r)<=r*r);
    
    if (circle || triangle){
        cout << "Точка належить фігурі (чорна частина)" << endl;
    }
    else {
        cout << "Точка не належить фігурі" << endl;
    }
    return;
}
int main() {
    task_if13();
    task_if32();
    task_geom1();
    
    return 0;
}
