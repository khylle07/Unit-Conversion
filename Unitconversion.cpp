#include <iostream>

using namespace std;

int main() {
    
    int choice, length, weight, volume, temperature, time, area, speed, energy, pressure, exit;
    long double mm, cm, dm, m, dam, hm, km, mi, NM;
    cout << "==========Unit Conversion==========\n";
    cout << "Select a Category by its Number\n";
    cout << "1. Length\n";
    cout << "2. Weight\n";
    cout << "3. Volume\n";
    cout << "4. Temperature\n";
    cout << "5. Time\n";
    cout << "6. Area\n";
    cout << "7. Speed\n";
    cout << "8. Energy\n";
    cout << "9. Pressure\n";
    cout << "Press 0 to Exit\n";
    cin >> choice;

    if (choice == 1){
        cout << "=================Length Conversion=================\n";
        cout << "Select the Length Unit by its Number\n";
        cout << "1. Millimeter (mm)\n";
        cout << "2. Centimeter (cm)\n";
        cout << "3. Decimiter (dm)\n";
        cout << "4. Meter (m)\n";
        cout << "5. Decameter (dam)\n";
        cout << "6. Hectometer (hm)\n";
        cout << "7. Kilometer (km)\n";
        cout << "8. Mile (mi)\n";
        cout << "9. Nautical Mile (NM)\n";
        cout << "Press 0 to Exit\n";
        cin >> length;

        switch (length){
            case 1:
                cout << "==========Millimeter Conversion==========\n";
                cout << "Enter the Millimeter (mm): ";
                cin >> mm;

                cm = mm / 10;
                cout << "Millimeter to Centimeter: " << cm << endl;
                dm = mm / 100;
                cout << "Millimeter to Decimiter: " << dm << endl;
                m = mm / 1000;
                cout << "Millimeter to Meter: " << m << endl;
                dam = mm / 10000;
                cout << "Millimeter to Decameter: " << dam << endl;
                hm = mm / 100000;
                cout << "Millimeter to Hectometer: " << hm << endl;
                km = mm / 1000000;
                cout << "Millimeter to Kilometer: " << km << endl;
                mi = mm * 0.000000621371;
                cout << "Millimeter to Mile: " << km << endl;
                NM = mm * 0.000000539957;
                cout << "Millimeter to Nautical Mile: " << NM << endl;
        }
    }
    return 0;
}
