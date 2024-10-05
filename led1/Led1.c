#include<mega8.h>
void main(){
PORTD=0B00000000;
DDRD=0B00000001;
while (1){
PORTD.0=1;
}
}
