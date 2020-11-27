#ifndef SALDOE_H_
#define SALDOE_H_

#include "GastoEntretenimiento.h"
#include <iostream>
using namespace std;

class SaldoE:public GastoEntretenimiento{
	public:
		GastoEntretenimiento(string t,float gE, float pE,float SE){
			tipo=t;
			gastoE=gE;
			presupuestoE=pE;
			SE=0;
		}
		float saldoE(){;
			saldoE=(presupuestoE.get_presupuestoE)-(gastoE.get_gastoE)+SE;
			return saldoE
		}
};
#endf
