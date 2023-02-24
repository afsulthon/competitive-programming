#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;

int binToDec(char *bin)
{
    int dec = 0;
    int len = strlen(bin);
    for (int i = 0; i < len; i++)
        dec = dec * 2 + (bin[i] - '0');
    return dec;
}

int octToDec(char *oct)
{
    int dec = 0;
    int len = strlen(oct);
    for (int i = 0; i < len; i++)
        dec = dec * 8 + (oct[i] - '0');
    return dec;
}

int hexToDec(char *hex)
{
    int dec = 0;
    int len = strlen(hex);
    for (int i = 0; i < len; i++)
    {
        if (hex[i] >= '0' && hex[i] <= '9')
            dec = dec * 16 + (hex[i] - '0');
        else if (hex[i] >= 'A' && hex[i] <= 'F')
            dec = dec * 16 + (hex[i] - 'A' + 10);
        else if (hex[i] >= 'a' && hex[i] <= 'f')
            dec = dec * 16 + (hex[i] - 'a' + 10);
    }
    return dec;
}

void decToBin(int dec)
{
    int bin[32];
    int len = 0;
    while (dec)
    {
        bin[len++] = dec % 2;
        dec /= 2;
    }
    for (int i = len - 1; i >= 0; i--)
        printf("%d", bin[i]);
}

void decToOct(int dec)
{
    int oct[32];
    int len = 0;
    while (dec)
    {
        oct[len++] = dec % 8;
        dec /= 8;
    }
    for (int i = len - 1; i >= 0; i--)
        printf("%d", oct[i]);
}

void decToHex(int dec)
{
    int hex[32];
    int len = 0;
    while (dec)
    {
        hex[len++] = dec % 16;
        dec /= 16;
    }
    for (int i = len - 1; i >= 0; i--)
    {
        if (hex[i] >= 0 && hex[i] <= 9)
            printf("%d", hex[i]);
        else if (hex[i] >= 10 && hex[i] <= 15)
            printf("%c", hex[i] - 10 + 'A');
    }
}

int main()
{
    char number[100];
    char result[100];
    int ori_base, dest_base, len;

    scanf("%s %d %d", number, &ori_base, &dest_base);

    if (ori_base == 2)
    {
        if (dest_base == 10)
            printf("%d", binToDec(number));
        else if (dest_base == 8)
            decToOct(binToDec(number));
        else if (dest_base == 16)
            decToHex(binToDec(number));
    }
    else if (ori_base == 8)
    {
        if (dest_base == 10)
            printf("%d", octToDec(number));
        else if (dest_base == 2)
            decToBin(octToDec(number));
        else if (dest_base == 16)
            decToHex(octToDec(number));
    }
    else if (ori_base == 10)
    {
        if (dest_base == 2)
            decToBin(atoi(number));
        else if (dest_base == 8)
            decToOct(atoi(number));
        else if (dest_base == 16)
            decToHex(atoi(number));
    }
    else if (ori_base == 16)
    {
        if (dest_base == 10)
            printf("%d", hexToDec(number));
        else if (dest_base == 2)
            decToBin(hexToDec(number));
        else if (dest_base == 8)
            decToOct(hexToDec(number));
    }
    return 0;
}