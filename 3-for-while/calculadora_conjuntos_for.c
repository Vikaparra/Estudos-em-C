#include <stdio.h>
#include <stdlib.h>

int main () {
	long int n,s,c;
	scanf("%li", &n);
	scanf("%li", &s);
	long int fn = n;
	long int fs = s;
	long int ns = (n-s);
	long int fns = ns;
	
	for(fn=n-1;fn>0;fn--){
		n=n*fn;
	};
	
	for(fs=s-1;fs>0;fs--){
		s=s*fs;
	};
	
	for(fns=ns-1;fns>0;fns--){
		ns=ns*fns;
	};
	
	if (ns == 0){
	    c = n/s;
	}
	else {
	c = n/(s*ns);
	}
	
	printf("%li",  c);
	
	return 0;
}