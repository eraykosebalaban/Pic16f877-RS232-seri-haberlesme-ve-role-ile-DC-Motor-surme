#include<16f877.h>

#use delay(clock = 4000000)

#use fast_io(b)
#use fast_io(c)

#use rs232(baud=9600, xmit=pin_c6, rcv=pin_c7, parity=N, stop=1)

int veri;

void main(){
setup_psp(PSP_DISABLED);
setup_timer_1(T1_DISABLED);
setup_timer_2(T2_DISABLED,0,1);
setup_adc_ports(NO_ANALOGS);
setup_adc(ADC_OFF);
setup_ccp1(CCP_OFF);
setup_ccp2(CCP_OFF);

set_tris_b(0x00);
set_tris_c(0xFF);

output_b(0x00);

while(true){
veri = getc(); // 

if(veri=='B'){
output_high(pin_b0);

}

else if(veri=='D'){
output_low(pin_b0);

}




}
}
