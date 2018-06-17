/*满足下列条件的自然数称为超级素数:该数本身,所有数字之和,所有数字之积以及所有数字的平方和都是素数.例如113就是一个超级素数.求[100,9999]之内:(1)超级素数的个数.(2)所有超级素数之和.(3)最大的超级素数.*/
int sum_bit(int num) {
  return 0;
}

int multi_bit(int num) {
  return 0;
}

int square_sum_bit(int num) {
  return 0;
}

bool isprime(int num) {
  return false;
}

int main() {
  if(isprime(113)&&isprime(sum_bit(113))&&isprime(multi_bit(113))&&isprime(square_sum_bit(113)))
    //to do sth
}
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
