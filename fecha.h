#ifndef FECHA_H
#define FECHA_H

class fecha{
private:
	int d;
	int m;
	int a;
	
public:
	fecha(int dd, int mm, int aa){
		this->d = dd;
		this->m = mm;
		this->a = aa;
	}
	void MostrarFecha(){
		cout << this->d << "/" << this->m << "/" <<this->a;
	}
	
	bool ValidarFecha(){
		return true;
	}


#endif
	
