#include <stdio.h>
#include <math.h>

int main(){
	int cas;
	long long a;
    long long X, Y;
    
    scanf("%d", &cas);
    
    for( int i=0 ; i<cas ; i++ ){
    	scanf("%lld %lld", &X, &Y);
        
        a = (int)sqrt(Y-X);
        
        if( (Y-X)==a*a )
        	printf("%lld\n", 2*a-1);
        else if( a*a<(Y-X) && (Y-X)<=a*a+a )
        	printf("%lld\n", 2*a);
        else if( a*a+a<(Y-X) && (Y-X)<(a+1)*(a+1) )
        	printf("%lld\n", 2*a+1);
    }
    
	return 0;
}