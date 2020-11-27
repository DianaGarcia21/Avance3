#ifndef GASTOENTRETENIMIENTO_H_
#define GASTOENTRETENIMIENTO_H_

#include "Total.h"
#include "SaldoE.h"
#include <iostream>
using namespace std;

class GastoEntretenimiento {
	private:
		string tipo;
		float gastoE;
		float presupuestoE;
		float SE;
	
	public:
		GastoEntretenimiento(string t,float gE, float pE,float SE){
			tipo=t;
			gastoE=gE;
			presupuestoE=pE;
			SE=0;
		}
		float get_gastoE();
		float get_presupuestoE();
		void set_gastoE(float);
		float gasto3();
		float get_SE();
		void saldoE1();
};
float GastoEntretenimiento::get_gastoE(){
	return gastoE;
}
float GastoEntretenimiento::get_presupuestoE(){
	return presupuestoE;
}
void GastoEntretenimiento::set_gastoE(float gE){
	gastoE=gE
}

float GastoEntretenimiento::gasto3(){
	gasto3=presupuestoE-gastoE;
	cout<<"El costo en "<<tipo<<" fue de "<<gasto3<<endl;
}
void GastoEntretenimiento::saldoE1(){
	E=SE.saldoE;
	if saldoE<0{
		cout<<"Tu saldo por gastar es de "<<saldoE<<endl;
	}
	else{
		cout<<"Ya te sobrepasate a tu presupuesto"<<saldoE<<endl;
	}
}
#endif

