#include <stdio.h>

int main() {
	int shopAm;
    	float disAm, savAm, finalAm;
    
    	printf("How much money have you spent on shopping?:\t");
	scanf("%d", &shopAm);
    	if(shopAm >= 500 && shopAm < 2000)
   	{
        		disAm = (float)shopAm / 100 * 5;
    	}    
    	else if(shopAm >= 2000 && shopAm < 4000)
    	{
    		disAm = (float)shopAm / 100 * 10;
    	} 
    	else if(shopAm >= 4000 && shopAm < 6000)
    	{
        		disAm = (float)shopAm / 100 * 20;
    	} 
    	else if(shopAm >= 6000)
    	{
        		disAm = (float)shopAm / 100 * 35;
    	} 
    	else
    	{
        		printf("You are not eligible for discount\n");    
    	}
    
    	finalAm = shopAm - disAm;
    	savAm = shopAm - finalAm;
    
    	printf("The amount you spent on shopping is: %d\n", shopAm);
    	printf("The amount you saved is: %.2f\n", savAm);
    	printf("The amount after discount is: %.2f\n", finalAm);
    return 0;
}