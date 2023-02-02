 #include <stdio.h>
    
     typedef struct complex {
        int real;
        int imag;
    }complex;
    
    complex divide(complex n1, complex n2);
    
    int main() {
    
        complex n1, n2, rez;
    
        printf("real part n1: ");
        scanf("%d", &n1.real);
        printf("imag part n1: ");
        scanf("%d", &n1.imag);
    
        printf("real part n2: ");
        scanf("%d", &n2.real);
        printf("imag part n2: ");
        scanf("%d", &n2.imag);
    
        rez = divide(n1, n2);
        printf("Result= %d+%di", rez.real, rez.imag);
    }
    
    complex divide(complex n1, complex n2)
    {
        complex rez;
        rez.real = (n1.real * n2.real + n1.imag * n2.imag) / (n2.real * n2.real + n2.imag * n2.imag);
        rez.imag = (n1.imag * n2.real - n1.real * n2.imag) / (n2.real * n2.real + n2.imag * n2.imag);
        return rez;
    
    }
