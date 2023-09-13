#include "LPC214x.h"

#define intpin (1<<30)
#define extint3 (1<<17)
unsigned int count =0, set =0;

void delay(unsigned int time)
{
	unsigned int i,j;
	for (i=0; i<time; i++)
	   {
	   	for (j =0; j <4000; j++);
	   }
}

void IRQ_Handler() __irq
{

}

int main (void)
{


}