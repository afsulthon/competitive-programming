#include <cstdio>
using namespace std;

int main() {
    int n, num, count = 0;
    scanf("%d", &n);
    for(int i = 0; i < n * n; i++) {
        scanf("%d", &num);
        if(num == 1) count++;
    }
    printf("%d\n", count / 2);
    return 0;
}