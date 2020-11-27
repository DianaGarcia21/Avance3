#ifndef SALDOC_H_
#define SALDOC_H_

#include "GastoComida.h"
#include <iostream>
using namespace std;

class SaldoC:public GastoComida{
	public:
		SaldoC(string t,float gC, float pC,float SC){
			tipo=t;
			gastoC=gC;
			presupuestoC=pC;
			SC=0;
		}
		float saldoC(){;
			saldoTC=(presupuestoC.get_presupuestoC)-(gastoC.get_gastoC)+SC;
			return saldoTC
		}
};
#endf

