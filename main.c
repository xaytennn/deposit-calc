#include <stdio.h>
int input (int x);
int main()
{
    int i, n, summ, time;
    input(time);
    input(summ);
    if (time < 0 || time > 365) {printf("Incorrect time"); return 0;}
    if (summ < 10000) {printf("Incorrect  summ"); return 0;}
}

int input(int x)
{
    scanf("%d", &x);
    return x;
}

/*int percent(int summ, int time)
{
    
    if (time < 31 && summ < 100000) summ -= 0.83 * time;
    if (time > 30 && time < 121  && summ < 100000) summ -= summ / 10;
    if (time > 120 && time < 241 && summ < 100000) summ += summ / ;
    if (time > 240 && time < 366 && summ < 100000) summ += time;
    if (time <31 && summ > 100000) summ -= 0.83  * time;
    if (time > 30 && time < 121  && summ > 100000) summ += 0.25 * time;
    if (time > 120 && time < 241 && summ > 100000) summ += 0.7 * time;
    if (time > 240 && time < 366 && summ > 100000) summ += 1.25 * time;

}
*/

