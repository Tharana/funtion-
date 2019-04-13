#include<stdio.h>

 
	float add(float a , float b);
	float multiply(float a,float b);
	float square (float a);

int main()
{

	float v ,v1 ,v2,v3;


v = multiply(3,4);
v1 = multiply(5,7);
v2 = add (v,v1);
v3 = square(v2);

printf("%f" , v3);

return 0;
}



float add(float a , float b){

       return a+b;	

}

float multiply(float a,float b){

	return a*b;

}

float square (float a){


	return a*a;

}


