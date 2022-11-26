#include <iostream>
using namespace std;
int main() {
    //Input Test Cases
    int test = 1;
    cout << "Enter any no from 1 to 10 for Test Case  : ";
    do {
        cin >> test;
        if (test < 1 || test > 10) {
            cout << "\nError ! Only Enter from 1 to 10 \n";
        }
    } while (test < 1 || test > 10);
    
    do {
        //Input Array Size
        cout << "\nINPUT\n";
        int size1 = 1;
        cout << "Enter any no from 1 to 10000 for Array Size : ";
        do {
            cin >> size1;
            if (size1 < 1 || size1>10000) {
                cout << "\nError ! Only Enter from 1 to 10000 \n";
            }
        } while (size1 < 1 || size1>10000);

        //Input Repition Count
        int k = 0;
        cout << "Enter any no from 1 to " << size1 << " for Repeatition Count k : ";
        do {
            cin >> k;
            if (k < 1 || k > size1) {
                cout << "\nError ! Only Enter from 1 to " << size1 << " 10000 \n";
            }
        } while (k < 1 || k > size1);

        //Creating Dynamic Array of user Size
        int* arr1 = new int[size1];
        int* arr2 = new int[size1];

        //Input Integers in Array1
        cout << "Enter Integers : \n";
        for (int i = 0; i < size1; i++) {
            cin >> arr1[i];
        }

        //Finding Integers reapeating k times
        int size2 = 0;
        arr2[0] = -1;
        for (int i = 0; i < size1; i++)
        {
            int count = 1;
            for (int j = i + 1; j < size1; j++)
                if (arr1[i] == arr1[j])
                    count += 1;
            if (count == k)
                arr2[size2++] = arr1[i];
        }

        //Arranging Order of Occurence and Showing Output
        cout << "OUTPUT\n";
        if (arr2[0] == -1)
            cout << arr2[0] << endl;
        else
        {
            int m = 0, temp = 0;
            for (int i = 0; i < size1; i++)
                for (int j = m; j < size2; j++)
                    if (arr1[i] == arr2[j]) {
                        temp = arr2[m];
                        arr2[m++] = arr1[i];
                        arr2[j] = temp;
                    }
            for (int i = 0; i < size2; i++)
                cout << arr2[i] << " ";
        }

        //Deleting Arrays
        delete[] arr1;
        delete[] arr2;
        arr1 = nullptr;
        arr2 = nullptr;
        test--;
        cout << endl;

    } while (test);
    
    return 0;
}
