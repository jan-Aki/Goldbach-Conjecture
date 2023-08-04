#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
unsigned long long num,prime1,prime2,i,sqrtnum,start;

printf("Where would you like to start?\n");
scanf("%llu",&start);

for (num=start;1;num=num+2)
{
    printf("\n%llu = ",num);
    for(prime1=2;prime1<=num/2;prime1++)
    {
        prime2=num-prime1;

        sqrtnum = sqrt(prime1);
        for(i=2;i<=sqrtnum;i++)//check if prime1 is prime
        {
            if(prime1 % i == 0)
            {
                goto Marker;
            }
        }
        sqrtnum = sqrt(prime2);
        for(i=2;i<=sqrtnum;i++)//check if prime2 is prime
        {
            if(prime2 % i == 0)
            {
                goto Marker;
            }
        }

        printf("%llu + %llu, ",prime1,prime2);
        break;//commenting out this line will have the program list every solution
        Marker:
    }
}
return 0;
}