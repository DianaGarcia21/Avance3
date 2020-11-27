#ifndef SALDOT_H_
#define SALDOT_H_

#include "GastoTransporte.h"
#include <iostream>
using namespace std;

class SaldoT:public GastoTransporte{
	public:
		GastoTransporte(float d,float gT,float pT,float STT){
			distancia=d;
			gastoT=gT;
			presupuestoT=pT;
			STT=0;
		}
		float saldoT(){;
			saldoTT=(presupuestoT.get_presupuestoT)-(gastoT.get_gastoT)+STT;
			return saldoTT
		}
};
#endf

