#include<iostream>
#include<cmath>
#include<ctime>

using namespace std;
int main()
{
  int target_num=rand()%100 +1;
  int num;
  int chance =0;
  cout<<"_\n";
  cout<<"welcome to the game....!!"<<endl;
  cout<<"guess the number between 1 to 100"<<endl;
  cout<<"you have FIVE chances"<<endl;
  cout<<"_\n";
  do
  {
   chance++;
   cout<<"CHANCE "<<chance<<endl;
   cout<<"enter the guessing number : ";
   cin>>num;
    int diff=abs(target_num - num);
   if(target_num<num)
   {
   if(diff<=10)
   {
   cout<<"you're getting closer to the guess...!"<<endl;
  cout<<"_\n";
   }
   else
   {
   cout<<"your guess is too high.....!"<<endl;
   cout<<"_\n";
   }
   }
   
   else if(target_num>num)
   {
   if(diff<=10)
   {
   cout<<"you're getting closer to the guess...!"<<endl;
  cout<<"_\n";
   }
   
   else
   {
   cout<<"your guess is too low.....!"<<endl;
   cout<<"_\n";
   }
   }
   
   else
   {
   cout<<"wow! you win the game!!"<<endl;
  cout<<"_\n";
   
   break;
   }
   
  }while(chance<5);
  if(chance == 5)
  {
    cout<<"THE ANSWER IS "<<target_num<<endl;
  cout<<"ALAS!,You lost the game...!"<<endl;
 cout<<"_\n";
   }
  
  return 0;
}