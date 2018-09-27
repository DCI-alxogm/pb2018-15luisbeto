#include<stdio.h>
#include<math.h>

int main(){
	int M,i,a[9],j,w;
	float h,G,te[9];
	double x[9], y[9], z[9], vx[9], vy[9], vz[9], vxi[9], vyi[9], vzi[9], r[9];

	FILE *data;
	data=fopen("parametros.txt","r");	
	fscanf(data,"%f %d %f",&h,&M,&G); 
//parametros de incremento
	for(i=0;i<9;i++){
	fscanf(data,"%f",&te[i]);	
	fscanf(data,"%lf %lf %lf %lf %lf %lf",&x[i],&y[i],&z[i],&vx[i],&vy[i],&vz[i],&vxi[i]); 

//variables de la velosidad

	vx[i] = vx[i]*365;
	vy[i] = vy[i]*365;
	vz[i] = vz[i]*365;

	r[i]=(pow(x[i],2)+pow(y[i],2),pow(z[i],2));
	r[i]=sqrt(r[i]);

	a[i];te[i]/h;
	}
	fclose(data);


	FILE *mer;
	mer=fopen("Mercurio.txt","w");
	for(j=0;j<=a[0];j++){

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

	r[0] = (pow(x[0],2)+pow(y[0],2),pow(z[0],2));
	r[0] = sqrt(r[0]);
}
fclose(mer);


	FILE *ven;
	ven=fopen("Venus.txt","w");
	for(j=0;j<=a[1];j++){
		
	fprintf(ven,"%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",x[1],y[1],z[1],vx[1],vy[1],vy[1]);

		vxi[1] = vx[1] - h*((G*M*x[1])/pow(r[1],3));
		vyi[1] = vy[1] - h*((G*M*y[1])/pow(r[1],3));
		vzi[1] = vz[1] - h*((G*M*z[1])/pow(r[1],3));
		
		x[1] = x[1] + (vx[1]*h);//coordenada de x en un lapso de tiempo despues de h segundos
		y[1] = y[1] + (vy[1]*h);//coordenada de y en un lapso de tiempo despues de h segundos
		z[1] = z[1] + (vz[1]*h);//coordenada de z en un lapso de tiempo despues de h segundos
	
	vx[1] = vxi[1];
	vy[1] = vyi[1];
	vz[1] = vzi[1];

	r[1] = (pow(x[1],2)+pow(y[1],2),pow(z[1],2));
	r[1] = sqrt(r[1]);
}
fclose(ven);


	FILE *tie;
	tie=fopen("Tierra.txt","w");
	w=0;
	for(j=0;j<=a[2];j++){
	if(w==0){
	fprintf(tie,"%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",x[2],y[2],z[2],vx[2],vy[2],vy[2]);
w=1;
}
		vxi[2] = vx[2] - h*((G*M*x[2])/pow(r[2],3));
		vyi[2] = vy[2] - h*((G*M*y[2])/pow(r[2],3));
		vzi[2] = vz[2] - h*((G*M*z[2])/pow(r[2],3));
		
		x[2] = x[2] + (vx[2]*h);//coordenada de x en un lapso de tiempo despues de h segundos
		y[2] = y[2] + (vy[2]*h);//coordenada de y en un lapso de tiempo despues de h segundos
		z[2] = z[2] + (vz[2]*h);//coordenada de z en un lapso de tiempo despues de h segundos
	
	vx[2] = vxi[2];
	vy[2] = vyi[2];
	vz[2] = vzi[2];

	r[2] = (pow(x[2],2)+pow(y[2],2),pow(z[2],2));
	r[1] = sqrt(r[2]);
w--;
}
fclose(tie);


	FILE *mar;
	mar=fopen("Marte.txt","w");
	w=0;
	for(j=0;j<=a[3];j++){
	if(w==0){		
	fprintf(mar,"%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",x[3],y[3],z[3],vx[3],vy[3],vy[3]);
w=3;
}
		vxi[3] = vx[3] - h*((G*M*x[3])/pow(r[3],3));
		vyi[3] = vy[3] - h*((G*M*y[3])/pow(r[3],3));
		vzi[3] = vz[3] - h*((G*M*z[3])/pow(r[3],3));
		
		x[3] = x[3] + (vx[3]*h);//coordenada de x en un lapso de tiempo despues de h segundos
		y[3] = y[3] + (vy[3]*h);//coordenada de y en un lapso de tiempo despues de h segundos
		z[3] = z[3] + (vz[3]*h);//coordenada de z en un lapso de tiempo despues de h segundos
	
	vx[3] = vxi[3];
	vy[3] = vyi[3];
	vz[3] = vzi[3];

	r[3] = (pow(x[3],2)+pow(y[3],2),pow(z[3],2));
	r[3] = sqrt(r[3]);
w--;
}
fclose(mar);


	FILE *jup;
	jup=fopen("Jupiter.txt","w");
	w=0;
	for(j=0;j<=a[4];j++){
	if(w==0){		
	fprintf(jup,"%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",x[4],y[4],z[4],vx[4],vy[4],vy[4]);
w=23;
}
		vxi[4] = vx[4] - h*((G*M*x[4])/pow(r[4],3));
		vyi[4] = vy[4] - h*((G*M*y[4])/pow(r[4],3));
		vzi[4] = vz[4] - h*((G*M*z[4])/pow(r[4],3));
		
		x[4] = x[4] + (vx[4]*h);//coordenada de x en un lapso de tiempo despues de h segundos
		y[4] = y[4] + (vy[4]*h);//coordenada de y en un lapso de tiempo despues de h segundos
		z[4] = z[0] + (vz[4]*h);//coordenada de z en un lapso de tiempo despues de h segundos
	
	vx[4] = vxi[4];
	vy[4] = vyi[4];
	vz[4] = vzi[4];

	r[4] = (pow(x[4],2)+pow(y[4],2),pow(z[4],2));
	r[4] = sqrt(r[4]);
w--;
}
fclose(jup);


	FILE *sat;
	sat=fopen("Saturno.txt","w");
	w=0;
	for(j=0;j<=a[5];j++){
	if(w==0){		
	fprintf(sat,"%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",x[5],y[5],z[5],vx[5],vy[5],vy[5]);
w=57;
}
		vxi[5] = vx[5] - h*((G*M*x[5])/pow(r[5],3));
		vyi[5] = vy[5] - h*((G*M*y[5])/pow(r[5],3));
		vzi[5] = vz[5] - h*((G*M*z[5])/pow(r[5],3));
		
		x[5] = x[5] + (vx[5]*h);//coordenada de x en un lapso de tiempo despues de h segundos
		y[5] = y[5] + (vy[5]*h);//coordenada de y en un lapso de tiempo despues de h segundos
		z[5] = z[5] + (vz[5]*h);//coordenada de z en un lapso de tiempo despues de h segundos
	
	vx[5] = vxi[5];
	vy[5] = vyi[5];
	vz[5] = vzi[5];

	r[5] = (pow(x[5],2)+pow(y[5],2),pow(z[5],2));
	r[5] = sqrt(r[5]);
w--;
}
fclose(sat);


	FILE *ura;
	ura=fopen("Urano.txt","w");
	w=0;
	for(j=0;j<=a[6];j++){
	if(w==0){	
	fprintf(ura,"%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",x[6],y[6],z[6],vx[6],vy[6],vy[6]);
w=167;
}
		vxi[6] = vx[6] - h*((G*M*x[6])/pow(r[6],3));
		vyi[6] = vy[6] - h*((G*M*y[6])/pow(r[6],3));
		vzi[6] = vz[6] - h*((G*M*z[6])/pow(r[6],3));
		
		x[6] = x[6] + (vx[6]*h);//coordenada de x en un lapso de tiempo despues de h segundos
		y[6] = y[6] + (vy[6]*h);//coordenada de y en un lapso de tiempo despues de h segundos
		z[6] = z[6] + (vz[6]*h);//coordenada de z en un lapso de tiempo despues de h segundos
	
	vx[6] = vxi[6];
	vy[6] = vyi[6];
	vz[6] = vzi[6];

	r[6] = (pow(x[6],2)+pow(y[6],2),pow(z[6],2));
	r[6] = sqrt(r[6]);
w--;
}
fclose(ura);


	FILE *nep;
	nep=fopen("Neptuno.txt","w");
	w=0;
	for(j=0;j<=a[7];j++){
	if(w==0){	
	fprintf(nep,"%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",x[7],y[7],z[7],vx[7],vy[7],vy[7]);
w=329;
}
		vxi[7] = vx[7] - h*((G*M*x[7])/pow(r[7],3));
		vyi[7] = vy[7] - h*((G*M*y[7])/pow(r[7],3));
		vzi[7] = vz[7] - h*((G*M*z[7])/pow(r[7],3));
		
		x[7] = x[7] + (vx[7]*h);//coordenada de x en un lapso de tiempo despues de h segundos
		y[7] = y[7] + (vy[7]*h);//coordenada de y en un lapso de tiempo despues de h segundos
		z[7] = z[7] + (vz[7]*h);//coordenada de z en un lapso de tiempo despues de h segundos
	
	vx[7] = vxi[7];
	vy[7] = vyi[7];
	vz[7] = vzi[7];

	r[7] = (pow(x[7],2)+pow(y[7],2),pow(z[7],2));
	r[7] = sqrt(r[7]);
w--;
}
fclose(nep);


	FILE *plu;
	plu=fopen("Pluton.txt","w");
	w=0;
	for(j=0;j<=a[8];j++){
	if(w==0){	
	fprintf(plu,"%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",x[8],y[8],z[8],vx[8],vy[8],vy[8]);
w=495;
}
		vxi[8] = vx[8] - h*((G*M*x[8])/pow(r[8],3));
		vyi[8] = vy[8] - h*((G*M*y[8])/pow(r[8],3));
		vzi[8] = vz[8] - h*((G*M*z[8])/pow(r[8],3));
		
		x[8] = x[8] + (vx[8]*h);//coordenada de x en un lapso de tiempo despues de h segundos
		y[8] = y[8] + (vy[8]*h);//coordenada de y en un lapso de tiempo despues de h segundos
		z[8] = z[8] + (vz[8]*h);//coordenada de z en un lapso de tiempo despues de h segundos
	
	vx[8] = vxi[8];
	vy[8] = vyi[8];
	vz[8] = vzi[8];

	r[8] = (pow(x[8],2)+pow(y[8],2),pow(z[8],2));
	r[8] = sqrt(r[8]);	
w--;
}
fclose(plu);

	
}
