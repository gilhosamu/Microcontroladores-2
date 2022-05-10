#ifndef _DEF_PRINCIPAIS_H
#define _DEF_PRINCIPAIS_H


#include <avr/io.h> 	    //defini��es do componente especificado

#include <avr/pgmspace.h>   //para o uso do PROGMEM, grava��o de dados na mem�ria flash

//Defini��es de macros para o trabalho com bits

#define	set_bit(y,bit)	(y|=(1<<bit))	//coloca em 1 o bit x da vari�vel Y
#define	clr_bit(y,bit)	(y&=~(1<<bit))	//coloca em 0 o bit x da vari�vel Y
#define cpl_bit(y,bit) 	(y^=(1<<bit))	//troca o estado l�gico do bit x da vari�vel Y
#define tst_bit(y,bit) 	(y&(1<<bit))	//retorna 0 ou 1 conforme leitura do bit

#endif
