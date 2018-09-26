#include<stdio.h>
#include<math.h>

int main(){
	int M,i,a,te,j;
	float h;
	double x[9],y[9],z[9),vx[9],vy[9],vz[9],vxi[9],vyi[9],vzi[9],r[9];
	FILE*data;
	data=fopen("parametros.txt","r");	
	fscanf(dta,"%lf %d",&h,&M,&te);//parametros de incremento
	for(i=0;i<9;i++){	
	fscanf(data,"%lf %lf %lf",&x[i],&y[i],&z[i],&vx[i],&vy[i],&vz[i],&vxi[i]);//variables de la velosidad

	r[i]= sqrt(pow(x[i],2)+pow(y[i],2),pow(z[i],2));

	}
	fclosen(data);

	a;te/h;

	FILe*mer;
	mer=fopen("Mercurio.txt","w");
	for(j=0;j<=a;j++){
		
	fprintf(mer,"%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",x[0],y[0],z[0],vx[0],vy[0],vy[0]);

		vxi[0] = vx[0] - h*((G*M*x[0])/pow(r[0],3));
		vyi[0] = vy[0] - h*((G*M*y[0])/pow(r[0],3));
		vzi[0] = vz[0] - h*((G*M*z[0])/pow(r[0],3));
		
		x[0] = x[0] + (vx[0]*h);//coordenada de x en un lapso de tiempo despues de h segundos
		y[0] = y[0] + (vy[0]*h);//coordenada de y en un lapso de tiempo despues de h segundos
		z[0] = z[0] + (vz[0]*h);//coordenada de z en un lapso de tiempo despues de h segundos
	
	vx[0] = vxi[0];
	vy[0] = vyi[0];
	vz[0] = vzi[0];

	r[0] = sqrt(pow(x[0],2)+pow(y[0],2),pow(z[0],2));
}
fclosen(mer);
}
