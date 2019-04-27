#include <iostream.h>
#include <conio.h>
void main()
{
int bil;
clrscr();
cout<<"Masukkan bilangan :";
cin>>bil;
switch(bil)
{
case1 :cout<<"Anda masukkan bil.satu";
break;
case2 :cout<<"Anda masukkan bil.dua";
break;
case3 :cout<<"Anda masukkan bil.tiga";
break;
default:cout<<"Anda masukkan bil selain 1,2, dan 3";
break;
}
getch();
}