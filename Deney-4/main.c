#include <16F877A.h>
#FUSES NOWDT,HS
#use delay(clock=20000000)
int deger; //8-bitlik deger degiskeni tanimlaniyor. buton sw0(RC)
int i = 0;

void main()
{
   set_tris_b(0xFF); //PORTB tum pinler giris
   set_tris_d(0x00); //PORTD tum pinler cikis

   while(1)
   {
      if(input(pin_b0)==1)
      {
         delay_ms(100);
         if(++i >= 10) i = 0;         
         output_d(i);
         while(input(pin_b0) == 1);
      }
      
      if(input(pin_b1) == 1)
      {
         delay_ms(100);
         if(--i <= 0) i = 0;
         output_d(i);
      }
   }
}