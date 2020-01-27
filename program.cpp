#include<iostream.h>
int main()
{int choice;
float temp,countemp;
cout<<"temperature conversion menu :";
cout<<"1. fahrenheit to Celsius "<<"\n";
cout<<"2. Celsius to fahrenhiet "<<"\n";
cout<<"enter your choice:" ;
cin>>choice ;
if(choice==1)
{ cout<<"\n"<<"enter temperature in Fahrenheit :";
cin>>temp ;
countemp = (temp -32)/1.8 ;
cout<<" the temperature in clesius is :"<<countemp<<"\n";
}else
{ cout<<"\n"<<"enetr temperature in centigrade :";
cin>>temp;
countemp = 1.8*temp + 32 ;
cout<<" the temperature in Fahrenheit is : "<<countemp<<"\n";
}
return 0 ;
}
