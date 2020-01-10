#include <stdlib.h>
#include <assert.h>

/*                                        lemma: GCD(a, b) = GCD(a-bq, b),     a, b - positive integers
                                                                               q - integer
									       
									       
     PROOF:  1) Let d = GCD(a, b), then a = dx, b = dy, then
                     
	        a - bq = dx - dyq = d(x-yq), b = dy, 
	        therefore d|a, d|b (this means that d divides a, d divides b, i.e. d is a common divisor),
		therefore GCD(a, b) = d <= GCD(a-bq, b).
	     ---------------------------------------------------------------------------------------------
	     2) Let t = GCD(a-bq, b), then a-bq = tz, b = tw, then
	     
	        a = tz + bq = tz + twq = t(z+wq)
		therefore t|a, t|b,
		therefore GCD(a-bq, b) = t <= GCD(a, b)
	     ---------------------------------------------------------------------------------------------
	     3) On the one hand:          GCD(a, b) = d <= GCD(a-bq, b).
	        On the other hand:        GCD(a-bq, b) = t <= GCD(a, b).
		
		GCD(a, b) <= GCD(a-bq, b)   and    GCD(a, b) >= GCD(a-bq, b)
		It means, that GCD(a, b) = GCD(a-bq, b)
		                                                                      Q.E.D.
                                                                                         
    
*/


size_t GCD(size_t a, size_t b)
{
	assert(a >= 0);
	assert(b >= 0);
	if (a == 0)
		return b;

	return GCD((b % a), a);
	

	return b;
}

size_t LCM(size_t a, size_t b)
{
	return (a * b) / (GCD(a, b));
}
