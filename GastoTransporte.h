#ifndef GASTOTRANSPORTE_H_
#define GASTOTRANSPORTE_H_

#include "Total.h"
#onclude "SaldoT.h"
#include <iostream>
using namespace std;

class GastoTransporte{
	private:
		float distancia;
		float gastoT;
		float presupuestoT;
		float STT;
	
	public:
		GastoTransporte(float d,float gT,float pT,float STT){
			distancia=d;
			gastoT=gT;
			presupuestoT=pT;
			STT=0
		}
		float get_gastoT();
		float get_presupuestoT();
		void set_gastoT(float);
		float gasto2();
		float get_STT();
		void saldoT1();
}
float GastoTransporte::get_gastoT(){
	return gastoT;
}
float GastoTransporte::get_presupuestoT(){
	return presupuestoT;
}
void GastoTransporte::set_gastoT(float gT){
	gastoT=gT;
}
float GastoTransporte::get_STT(){
	return STT
}
float GastoTransporte::gasto2(){
	gasto2=-presupuestoT-gastoT
	cout<<"El costo en "<<distancia<<" fue de "<<gasto2<<endl;
}
void GastoTransporte::saldoT1{
	T=STT.saldoT;
	if saldoTT<0{
		cout<<"Tu saldo por gastar es de "<<saldoTT<<endl;
	}
	else{
		cout<<"Ya te sobrepasate a tu presupuesto"<<saldoTT<<endl;
	}
}



#endif

