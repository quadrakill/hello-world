#include <stdio.h>

int sum_bit(int num) {

   int summit=0;

   int temp=num;

   while(temp>0){

     summit=summit+temp%10;

     temp/=10;

   }

   return summit;

}



int multi_bit(int num) {

   int multibit=1;

   int temp=num;

   while(temp>0){

     multibit=multibit*(temp%10);

	 temp/=10; 

   } 

   return multibit;

}



int square_sum_bit(int num) {

    int sqauresumbit=0;

   int temp=num;

   while(temp>0){

     sqauresumbit=sqauresumbit+(temp%10)*(temp%10);

	 temp/=10; 

   } 

   return sqauresumbit;

}



int isprime(int num) {

	int i;

   for( i=2;i<num;i++){

     if(num%i==0) return 0; 

  }

  return 1;

}



int main() {

	int i;

	for( i=100;i<=999;i++){ 

  if(isprime(i)&&isprime(sum_bit(i))&&isprime(multi_bit(i))&&isprime(square_sum_bit(i))){

   printf("%d\n",i); 

  } 


}

}
