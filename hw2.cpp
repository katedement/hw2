
#include <iostream>

int n1()
{
    int a, b, x;
    std::cout << "Enter a and b" << std::endl;
    std::cin >> a;
    std::cin >> b;
    x = a;
    a = b;
    b = x;
    std::cout << a << " " << b << std::endl;
    return 0;
}

double n4()
{
    double x; double k = 0;
    double arr[12];
    for (int i = 0; i < 12; i++) {
        arr[i] = rand();
    }
    for (int i = 0; i < 12; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < 11; i++) {
        for (int j = i + 1; j < 12; j++) {
            if (arr[i] < arr[j]) {
                x = arr[i];
                arr[i] = arr[j];
                arr[j] = x;
                k++;
            }
        }
    }
    for (int i = 0; i < 12; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl << "the number of shifts is " << k << std::endl;
    return 0;
}

int n6()
{
    const int ARRLEN = 14, MID = ARRLEN / 2;
    int arr[14];
    int k = 0;
    std::cout << "Enter elements:\n";
    for (int* i = arr; i != arr + 14; i++)
    {
        std::cin >> *i;
    }
    for (int* i = arr; i != arr + 7; i++)
    {
        int tmp = *i;
        *i = *(i + 7);
        *(i + 7) = tmp;
        k += 3;
    }
    std::cout << std::endl;
    for (int* i = arr; i != arr + 14; i++)
    {
        std::cout << *i << "  ";
    }
    std::cout << std::endl << "The nubmer of shifts is " << k << std::endl;
    return 0;
}


int main()
{
    std::cout << "Enter the task number: ";
    int n;
    std::cin >> n;

    if (n == 1)
        std::cout << n1() << std::endl;

    else if (n == 4)
        std::cout << n4() << std::endl;

    else if (n == 6)
        std::cout << n6() << std::endl;

    return 0;
}



