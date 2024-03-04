#include<iostream>
using namespace std;

int main()
{
    int array[10] = {1, 478, 4, 0, -9, 8, 7, -9, 0, 4};

    // Sorting
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
            if (array[j] < array[i])
            {
                int temp;
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << ", " ;
    }

    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (i == 0){
            if (array[i] != array[i+1]){
                count++ ;
            }
        }
        else if (i == 9){
            if (array[i] != array[i-1]){
                count++ ;
            }
        }
        else{
            if (array[i] != array[i+1] && array[i] != array[i-1]){
                count++ ;
            }
        }
    }

    cout << "count : " << count << endl;

    return 0;
}