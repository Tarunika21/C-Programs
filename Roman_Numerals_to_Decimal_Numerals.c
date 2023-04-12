#include<stdio.h>
#include<string.h>
int main()
{
    int a[100000],dec=0,choice,len,num;
    char rom[100];
    printf("1.convert Decimal to Roman Numerals.");
    printf("\n2.convert Roman Numerals to Decimal.");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch (choice) {
        case 1:
            printf("\nEnter the Decimal Number: ");
            scanf("%d",&dec);
            printf("Equivalent Roman numeral:");
            while(dec)
            {
                if(dec >= 1000)
                {
                    printf("M");
                    dec = dec - 1000;
                }
                else if(dec >= 900)
                {
                    printf("CM");
                    dec = dec - 900;
                }
                else if(dec >= 500)
                {
                    printf("D");
                    dec = dec - 500;
                }
                else if(dec >= 400)
                {
                    printf("CD");
                    dec = dec - 400;
                }
                else if(dec >= 100)
                {
                    printf("C");
                    dec = dec - 100;
                }
                else if(dec >= 90)
                {
                    printf("XC");
                    dec = dec - 90;
                }
                else if(dec >= 50)
                {
                    printf("L");
                    dec = dec - 50;
                }
                else if(dec >= 40)
                {
                    printf("XL");
                    dec = dec - 40;
                }
                else if(dec >= 10)
                {
                    printf("X");
                    dec = dec - 10;
                }
                else if(dec >= 9)
                {
                    printf("IX");
                    dec = dec - 9;
                }
                else if(dec >= 5)
                {
                    printf("V");
                    dec = dec - 5;
                }
                else if(dec >= 4)
                {
                    printf("IV");
                    dec = dec - 4;
                }
                else if(dec >= 3)
                {
                    printf("III");
                    dec = dec - 3;
                }
                else if(dec >= 2)
                {
                    printf("II");
                    dec = dec - 2;
                }
                else if(dec >= 1)
                {
                    printf("I");
                    dec = dec - 1;
                }
            }
            break;
        case 2:
            printf("\nEnter the Roman Numeral:");
            scanf("%s",&rom);
            len=strlen(rom);
            for(int i=0;i<len;i++){
                if(rom[i]=='I' || rom[i]=='i')
                    a[i]=1;
                else if(rom[i]=='V' || rom[i]=='v')
                    a[i]=5;
                else if(rom[i]=='X' || rom[i]=='x')
                    a[i]=10;
                else if(rom[i]=='L' || rom[i]=='l')
                    a[i]=50;
                else if(rom[i]=='C' || rom[i]=='c')
                    a[i]=100;
                else if(rom[i]=='D' || rom[i]=='d')
                    a[i]=500;
                else if(rom[i]=='M' || rom[i]=='m')
                    a[i]=1000;
            }
            num=a[len-1];
            for(int i=len-1;i>0;i--){
                if(a[i]>a[i-1]){num=num-a[i-1];}
                else if(a[i]==a[i-1] || a[i]<a[i-1]){num=num+a[i-1];}
            }
            printf("\nDecimal Equivalent is:%d",num);
            break;
        default:
            printf("\nInvalid choice");
            break;
    }
    return 0;
}
