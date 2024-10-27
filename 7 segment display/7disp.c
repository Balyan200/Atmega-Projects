#include <mega8.h>
#include <delay.h>
int i=0;
int a[]={0x3F,0X06,0X5B,0X4F,0X66,0X6D,0X7D,0X07,0X7F,0X67};  //binary combinations for 7 seg display leds for each number
void main(){
/*PORTD=0B00000000;
DDRD=0B01111111;*/
PORTD=0X00;
DDRD=0X7F;
while (1){
for (;i<10;i++){
/*FOR ONE
PORTD.4=1;
PORTD.5=1;*/
PORTD=a[i];

delay_ms(1000);
}
PORTD=0x00;
}
}



