#include <iostream>


void shel(int mas[], int n)
{
    int i, j, step;
    int tmp;
    for (step = n / 2; step > 0; step /= 2)
        for (i = step; i < n; i++)
        {
            tmp = mas[i];
            for (j = i; j >= step; j -= step)
            {
                if (tmp < mas[j - step])
                    mas[j] = mas[j - step];
                else
                    break;
            }
            mas[j] = tmp;
        }
}



int main()
{
    int mas[10];
    int n = 10;
    for (int i = 0; i < n; i++) {
        mas[i] = rand() % 10;
        std::cout << mas[i] << " ";
    }

    std::cout << std::endl;

    shel(mas, n);

    for (int i = 0; i < n; i++) {
        std::cout << mas[i] << " ";
    }


}