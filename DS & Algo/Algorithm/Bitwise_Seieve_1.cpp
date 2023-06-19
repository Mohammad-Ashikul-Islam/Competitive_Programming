#include<bits/stdc++.h>
//From Shafaet's Planet
//0=(32ta Zero),Amra Ekhane Protita Bit K Ekta Kore Songkhar True False Hishebe Kaje Lagai,
//Such As status[0]=binaray(0......101100) Mane 2,3,5 Prime !!
using namespace std;
int N =100,prime[100];
int status[100/32];//

bool check(int x,int pos){return (bool)(x & (1<<pos));}//Checks The Bit,For More Watch
                                                //Bit_Manipulation Programs In This PC

int Set(int x,int pos){	return x=x | (1<<pos);}//All bit Are Auto Set To Zero(As Status Is
//Global).So Which Element Are Not Prime,We Wll Set Their Bit To One By This Function

void bs()
{
     int i, j, sqrtN;
     sqrtN = int( sqrt( N ) );
     for( i = 3; i <= sqrtN; i += 2 )
     {
		 if( check(status[i/32],i%32)==0)
		 {
	 		 for( j = i*i; j <= N; j += 2*i )
			 {
				 status[j/32]=Set(status[j/32],j % 32)   ;
	 		 }
		 }
	 }
	 puts("2");
	 for(i=3;i<=N;i+=2)
		 if( check(status[i/32],i%32)==0)
	 	 printf("%d\n",i);

}
int main()
{
    bs();
    /*
    বিটওয়াইজ সিভ ব্যবহার করে ১০^৮ পর্যন্ত প্রাইম তুমি জেনারেট করে ফেলতে পারবে। সাধারণ সিভের থেকে সময় + মেমরি কম লাগবে।
    সাধারণ গুণ,ভাগ অপারেশনের থেকে বিটের অপারেশনগুলো দ্রুত কাজ করে। আমরা আরো কিছু অপটিমাইজেশন করতে পারি।
     যেমন তুমি উপরে দেয়া টিউটোরিয়াল পড়ে থাকলে জানো যে কাওকে ২ দিয়ে গুণ করা আর সংখ্যাটির বাইনারিকে ১ ঘর বামে শিফট করা একই কথা।
      আবার ২ দিয়ে ভাগ করা আর ১ ঘর ডানে শিফট করা একই কথা,৩২ দিয়ে mod করা আর ৩১ দিয়ে AND করা একই কথা।
    For Optimized Version,Watch Bitwise_Seieve_2*\n");*/
    return 0;
}
