//Define a structure “complex” (typedef) to read two complex numbers and perform addition, and subtraction of these two complex numbers and display the result. 
#include <stdio.h> 
 
typedef struct { 
    float real; 
    float imag; 
} complex; 
 
complex addComplex(complex c1, complex c2) { 
    complex result; 
    result.real = c1.real + c2.real; 
    result.imag = c1.imag + c2.imag; 
    return result; 
} 
 
complex subtractComplex(complex c1, complex c2) { 
    complex result; 
    result.real = c1.real - c2.real; 
    result.imag = c1.imag - c2.imag; 
    return result; 
} 
 
int main() { 
    complex c1, c2, sum, diff; 
 
    printf("Enter the real and imaginary part of the first complex number: "); 
    scanf("%f %f", &c1.real, &c1.imag); 
 
    printf("Enter the real and imaginary part of the second complex number: 
"); 
    scanf("%f %f", &c2.real, &c2.imag); 
 
    sum = addComplex(c1, c2); 
    diff = subtractComplex(c1, c2); 
 
    printf("Sum: %.2f + %.2fi\n", sum.real, sum.imag); 
    printf("Difference: %.2f + %.2fi\n", diff.real, diff.imag); 
 
    return 0; 
}
