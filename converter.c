#include <stdio.h>
#include <stdlib.h>

int main(){
    double celsius;
    float fahrenheit;
    int i;

    for (i=0;i<1000;i+=20){
        fahrenheit=i;
        celsius=5*(fahrenheit-32)/9;
        printf("\n temp in F: %f --->", fahrenheit);
        printf("\ntemp in C: %.2f", celsius);
    }

    return(0);
}