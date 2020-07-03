#include <stdio.h>
#include <stdlib.h>

int main () {
	long int n,s,c;
	scanf("%li", &n);
	scanf("%li", &s);
	long int fn = n;
	long int fs = s;
	long int ns = (n-s);
	long int nnss = ns;
	
	while(fn>1){
		fn--;
		n=n*fn;
	}
	while(fs>1){
		fs--;
		s=s*fs;
	}
	while(nnss>1){
		nnss--;
		ns=nnss*ns;
	}
	
	if (ns == 0){
	    c = n/s;
	}
	else{
    	c = n/(s*ns);
	}
	
	printf("%li", c);
	
	return 0;
}