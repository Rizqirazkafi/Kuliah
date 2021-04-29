#include <stdio.h>

void sortit(int data[], int a)
{
    int i, j, MIN, temp;
    for (i = 0; i < a - 1; i++)
    {
        MIN = i;
        for (j = i + 1; j < a; j++)
        {
            if (data[j] < data[MIN])
                MIN = j;
        }
        temp = data[i];
        data[i] = data[MIN];
        data[MIN] = temp;
    }
}

void searchit(int data[], int a, int x)
{
    int l, r, m;
    int found = 0;
    l = 0;
    r = a - 1;
    while (l <= r && found == 0)
    {
        m = (l + r) / 2;
        if (data[m] == x)
            found = 1;
        else if (x < data[m])
        {
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    if (found == 1)
        // cout << "data ditemukan\n";
        printf("data ditemukan");
    else
        // cout << "data tidak ada\n";
        printf("data ditemukan");
}

int main()
{
}