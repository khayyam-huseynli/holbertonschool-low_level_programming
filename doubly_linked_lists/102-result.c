#include <stdio.h>

int is_polindrome(int n);

int main()
{
    int i, j, p,m,n, max=0;
    int res = 0;

    for (i=100; i<999; i++){
        for (j=100; j<999; j++){
            res = i * j;
            p = is_polindrome(res);
            if (p){
                if (res>max){
                    max = res;
                    m=i;
                    n=j;
                }
            }
        }
    }
    printf("%d, %d, %d\n", max, m, n);
    return 0;
}

int is_polindrome(int n)
{
    int original_number = n;
    int num = original_number;
    int reversed = 0;

    while (num != 0) {
        int r = num % 10;
        reversed = reversed * 10 + r;
        num /= 10;
    }
    if (original_number == reversed) {
        return 1;
    }
    else {
        return 0;
    }
}
