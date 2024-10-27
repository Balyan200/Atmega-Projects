//increment and decrement
#include <mega8.h>
#include <delay.h>
int counter;
int a[]={0x3F,0X06,0X5B,0X4F,0X66,0X6D,0X7D,0X07,0X7F,0X67};
void main(){
/*PORTD=0B00000000;
DDRD=0B01111111;*/
PORTC=0X0D;
DDRC=0X00;
PORTD=0X00;
DDRD=0X7F;
PORTD=a[0];
while (1){
if ((PINC.0==0)&&(counter<9)){
delay_ms(250);
counter++;    //increment
}
if ((PINC.2==0)&&(counter>0)){
delay_ms(250);
counter--;      //decrement
}

if(PINC.3==0){
delay_ms(300);
while (counter>0){
delay_ms(1000);        //decrement till 0
counter--;
PORTD=a[counter];   

}
}
PORTD=a[counter];  //display counter value on 7 seg display
}
}
