#include <16F877A.h>

#FUSES NOWDT,HS
#use delay(clock=20000000)

void main()
{
   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_CLOCK_DIV_2);
   
   dongu:
      output_high(pin_d0);
      output_high(pin_d2);
      output_high(pin_d4);//PortD nin ilk bitini lojik 1 yapar
      delay_ms(1000); //1sn bekle

      output_low(pin_d0);
      output_low(pin_d2);
      output_low(pin_d4);// PortD nin ilk bitini lojik 0 yapar
      delay_ms(1000); //1sn bekle
      goto dongu; //"dongu" etiketli satira atla
}
