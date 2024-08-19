#include <iostream>
using namespace std;

int main()
{
    cout << "task1\n";
    int d[10] = {};
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        d[i] += rand() % 40 - 20;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        if ((d[i]) < 0) {
            d[i] *= -1;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << d[i] << " ";
    }
    cout << "task4\n";   
    int arr[10] = {};
    srand(time(0));
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 10;
    }

    int n;
    cout << "n-i daxil edin: ";
    cin >> n;
    int newarr[10] = {};
    for (int i = 0; i < 10; i++) {
        newarr[(i + n) % 10] = arr[i];
    }
    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;

    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << newarr[i] << ' ';
    }
    cout << endl;
    cout << "task5\n";
    double arr5[10] = {1.3,2.0,3.2,4.0,5.5,6.7,7.0,8.0,9.7,9.9};
    double newarr5[10] = {};
    srand(time(0));
    int e = 0;
    for (int i = 0; i < 10; i++) {
        if (arr5[i]!=int(arr5[i]))
        {
            newarr5[e]+=arr5[i];
            e++;
        }
    }
    for(int i = 0; i < 10; i++) {
        if (arr5[i] == int(arr5[i]))
        {
            newarr5[e] += arr5[i];
            e++;
        }
    }
    for (int i = 0; i < 10; i++) {
        cout << newarr5[i] << ' ';
    }

    cout << "task3\n";
    int arr3[10];
    srand(time(0));
    for (int i = 0; i < 10; i++) {
        arr3[i] = rand() % 100; 
        cout << arr3[i] << " ";
    }
    cout << endl;
    int cem = 0;
    for (int i = 0; i < 10; i++) {
        cem += arr3[i];
    }
    double edediorta = cem / 10;

    int  enyaxin= arr3[0];
    double minferq;

    if (arr3[0] > edediorta) {
        minferq = arr3[0] - edediorta;
    }
    else {
        minferq = edediorta - arr3[0];
    }
    for (int i = 1; i < 10; i++) {
        double ferq;
        if (arr3[i] > edediorta) {
            ferq = arr3[i] - edediorta;
        }
        else {
            ferq = edediorta - arr3[i];
        }

        if (ferq < minferq) {
            minferq = ferq;
            enyaxin = arr3[i];
        }
    }
    cout << edediorta << endl;
    cout << enyaxin << endl;
    






}

