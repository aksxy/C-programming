0//FLOAT , DOUBLE , LONG DOUBLE
#include<stdio.h>
main()
{
    float a=3.1234567891234516; //float present value up to 7 digits thats way he store & print 7 digit as same up to 7 digit he chenge the values (numbers).
    double b=3.12345678912345616; //Double print & store up to 16 digit as it is .
    long double c=3.123456789123456789121; //Long Double print & store up to 19 digits as it is.
    printf("%.16f\n",a);
    printf("%.16lf\n",b);
    printf("%.21Lf\n",c);   //this is not working because system not suported
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(double));
    printf("%d\n",sizeof(long double));

}

