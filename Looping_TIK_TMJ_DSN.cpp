//Dzaky Setya Nugraha (2407421047) TMJ1B 

#include <iostream>

using namespace std;

int main()
{
    int min, max, while_var,do_var;

    cout << "Masukka Nilai Min yang Ingin di Test : ";
    cin >> min;

    cout << "Masukka Nilai Max yang Ingin di Test : ";
    cin >> max;

    cout << "\n1) For_Operation\n" << endl;

    for (int for_var = min; for_var <= max; for_var++) {
        cout << for_var << " \t= " ;
        if (for_var % 3 == 0 && for_var % 5 == 0) {
            cout << "TIK & TMJ" << endl;
        }
        else if (for_var % 3 == 0){
            cout << "TMJ" << endl;
        }
        else if (for_var % 5 == 0) {
            cout << "TIK" << endl;
        }
        else {
            cout << "Ga bisa dibagi 3 & 5" << endl;
        }
    }

    cout << "\n";
    cout << "2) While_Operation\n" << endl;

    while_var = min;
    while (while_var <= max) {
        cout << while_var << " \t= ";
        if (while_var % 3 == 0 && while_var % 5 == 0) {
            cout << "TIK & TMJ" << endl;
        }
        else if (while_var % 3 == 0) {
            cout << "TMJ" << endl;
        }
        else if (while_var % 5 == 0) {
            cout << "TIK" << endl;
        }
        else {
            cout << "Ga bisa dibagi 3 & 5" << endl;
        }
        while_var++;
    }

    cout << "\n";
    cout << "3) Do_While_Operation\n" << endl;

    do_var = min;
    do {
        cout << do_var << " \t= ";
        if (do_var % 3 == 0 && do_var % 5 == 0) {
            cout << "TIK & TMJ" << endl;
        }
        else if (do_var % 3 == 0) {
            cout << "TMJ" << endl;
        }
        else if (do_var % 5 == 0) {
            cout << "TIK" << endl;
        }
        else {
            cout << "Ga bisa dibagi 3 & 5" << endl;
        }
        do_var++;
    } while (do_var <= max);
}


