#include <iostream>
using namespace std;
int main() {
    int ticket_number, digits, sum_first_half = 0, sum_second_half = 0;
    cout << "Enter the ticket number (six digits): ";
    cin >> ticket_number;

// Рассчитайте сумму первой половины и второй половины номера билета
    for (int i = 0; i < 6; ++i) {
        digits = ticket_number % 10;
        ticket_number /= 10;
        if (i < 3) {
            sum_first_half += digits;
        } else {
            sum_second_half += digits;
        }
    }

// Проверьте, является ли билет счастливым.
    if (sum_first_half == sum_second_half) {
        cout << "Lucky ticket!" << endl;
    } else {
        cout << "Better luck next time!" << endl;
    }

    return 0;
}
