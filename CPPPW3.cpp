#include <iostream>
#include <vector>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    bool runs = true;
    while (runs) {
        int rows, cols, op;

        cout << "Для запуска программы нажмите 1, для выхода - 0" << endl;
        cin >> op;
        switch (op) {
        case 1: {
            cout << "Введите количество строк:" << endl;
            cin >> rows;
            cout << "Введите количетсво столбцов" << endl;
            cin >> cols;
            cout << "Введите элементы массива:" << endl;
            vector<vector<double>> matrix(rows, vector<double>(cols));
            for (int a = 0; a < rows; ++a) {
                cout << "Строка " << a + 1 << ": ";
                for (int b = 0; b < cols; ++b) {
                    cin >> matrix[a][b];
                }
            }

            cout << "Среднее арифметическое для каждой строки: " << endl;

            for (int a = 0; a < rows; ++a) {
                double sum = 0;
                for (int b = 0; b < cols; ++b) {
                    sum += matrix[a][b];
                }
                double average = sum / cols;
                cout << "Строка " << a + 1 << ": " << average << endl;
            }
            return 0;
        }
        break;

        case 0:
            runs = false;
            break;
        
        default:
            cout << "Вы ввели неверную цифру." << endl;
            break;
        }
    }
}