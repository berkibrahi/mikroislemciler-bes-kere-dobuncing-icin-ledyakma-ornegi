#include <led_yak7.h>
int sayac;
void main()
{
  set_tris_a(0xff);
set_tris_b(0x00);
output_b(0x00);
for(sayac=0;sayac<5;sayac++){
while(input(pin_A1)==0);
delay_us(250);   //debouncing icin
while(input(pin_A1)==1);
delay_us(250);       //debouncing icin
}
output_high(pin_B4);


   

}
