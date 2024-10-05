//blinking a led at port D 0
#include<mega8.h>
#include<delay.h>
void main(){
PORTD=0B00000000;
DDRD=0B00000001;
while(1){
PORTD.0=1;
delay_ms(1000);
PORTD.0=0;
delay_ms(1000);
}
}