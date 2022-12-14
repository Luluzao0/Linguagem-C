#include <stdio.h>
#include <stdbool.h>

int main(){
    char a = 'A';           //caracter unico use  %c
    char b[] = "Luis";      // array de caracteres use %s
 
    float c = 3.141592;             // 4 bytes(32 bites of precision) 6-7 digits use %f
    double d = 3.141592653589793;   // 8 bytes(64 bites of precision) 15-16 digits use %lf
    
    /*basciamente o double é literalmente o significado da palavra -> dobrar o valor que pode ser armazenado. Assim como o demonstrado a dif entre o "c" e o "d".     */

    bool e = true; // 1 byte(true or false) use %d

    char f = 100;               // 1 byte(-128 to +127) use %d or %c
    unsigned char g = 255;      // 1 byte(0 to +255) use %d or %c

    short int h = 32767;            // 2 bytes(-32,768 to +32,767) use %d
    unsigned short int i = 65535;   // 2 bytes(0 to +65,535) use %d

    int j = 2147483647;             // 4 bytes(-2,147,483,648 to + 2,147,483,647) use %d
    unsigned int k = 4294967295L;   // 4 bytes(0 to + 4,294,967,295) use %u

    long long int l = 9223372036854775807;              // 8 bytes(-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 18446744073709551615U;   // 8 bytes(0 to +18 quintillion) %llu, and without the "U", the code return with error. 


    /* u don't need to declare the int in all the lines.
     Example:
      --> short int h is the same thing of short h.
    */


    printf("%c\n", a);
    printf("");
    printf("");
    printf("");
    printf("");
    printf("");

    printf("%0.15lf\n", d);
    return 0;
}