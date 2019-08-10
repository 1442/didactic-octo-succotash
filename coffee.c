#include<stdio.h>
int main()
{
int price,discount,effective_price, total_price, off;
scanf("%d %d",&price,&discount);
if(discount==100) total_price=0;
else{
    total_price=price;
    effective_price=price;
    while(effective_price>1)
    {
        off = discount*effective_price/100;
        effective_price = effective_price - off;
        total_price += effective_price;
    }
}
printf("%d\n",total_price);
return 0;
}
