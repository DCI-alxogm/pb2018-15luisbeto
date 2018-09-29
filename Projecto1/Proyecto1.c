#include<stdio.h>
#include<math.h>

int main(){
    int M,i,j,o[9],c;
    float h[9],G;
    double x[9], y[9], z[9], vx[9], vy[9], vz[9],x0[9], y0[9], z0[9], vx0[9], vy0[9], vz0[9],a[9],r;

    FILE *data;
    data=fopen("parametros.txt","r");   
    fscanf(data,"%d %f",&M,&G);
//parametros de incremento
    for(i=0;i<9;i++){
    fscanf(data,"%lf %f",&a[i],&h[i]);   
    fscanf(data,"%lf %lf %lf %lf %lf %lf",&x0[i],&y0[i],&z0[i],&vx0[i],&vy0[i],&vz0[i]);

//variables de la velocidad

    vx0[i] = vx0[i]*365.225;
    vy0[i] = vy0[i]*365.225;
    vz0[i] = vz0[i]*365.225;
    o[i]=a[i]/h[i];

    }
    fclose(data);

G=4*(pow(3.1416,2));
    FILE *mer;
    mer=fopen("Mercurio.txt","w");
    c=0;
    fprintf(mer,"%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",x0[0],y0[0],z0[0],vx0[0],vy0[0],vz0[0]);
    for(j=0;j<o[1];j++){   
   
    r=sqrt(pow(x0[0],2)+pow(y0[0],2)+pow(z0[0],2));

        x[0]=x0[0]+(vx0[0]*h[0]);//coordenada de x en un lapso de tiempo despues de h segundos
        y[0]=y0[0]+(vy0[0]*h[0]);//coordenada de y en un lapso de tiempo despues de h segundos
        z[0]=z0[0]+(vz0[0]*h[0]);//coordenada de z en un lapso de tiempo despues de h segundos
        vx[0]=vx0[0]-((h[0]*G*x0[0])/pow(r,3));
        vy[0]=vy0[0]-((h[0]*G*y0[0])/pow(r,3));
        vz[0]=vz0[0]-((h[0]*G*z0[0])/pow(r,3));

        y0[0]=y[0];
        vy0[0]=vy[0];       
        z0[0]=z[0];
        vz0[0]=vz[0];
        x0[0]=x[0];
        vx0[0]=vx[0];

            if (c%500==0)
{
    fprintf(mer,"%f\t %f\t %f\t %f\t %f\t %f\n",x[0],y[0],z[0],vx[0],vy[0],vz[0]);
}
c++;
}
fclose(mer);


    FILE *ven;
    ven=fopen("Venus.txt","w");
    c=0;
fprintf(ven,"%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",x[1],y[1],z[1],vx[1],vy[1],vz[1]);
    for(j=0;j<o[1];j++){

    r=sqrt(pow(x0[1],2)+pow(y0[1],2)+pow(z0[1],2));

        x[1]=x0[1]+(vx0[1]*h[1]);//coordenada de x en un lapso de tiempo despues de h segundos
        y[1]=y0[1]+(vy0[1]*h[1]);//coordenada de y en un lapso de tiempo despues de h segundos
        z[1]=z0[1]+(vz0[1]*h[1]);//coordenada de z en un lapso de tiempo despues de h segundos
        vx[1]=vx0[1]-((h[1]*G*x0[1])/pow(r,3));
        vy[1]=vy0[1]-((h[1]*G*y0[1])/pow(r,3));
        vz[1]=vz0[1]-((h[1]*G*z0[1])/pow(r,3));

        y0[1]=y[1];
        vy0[1]=vy[1];       
        z0[1]=z[1];
        vz0[1]=vz[1];
        x0[1]=x[1];
        vx0[1]=vx[1];
            if (c%500==0)
{
fprintf(ven,"%f\t %f\t %f\t %f\t %f\t %f\n",x[1],y[1],z[1],vx[1],vy[1],vz[1]);
}
c++;
}
fclose(ven);


    FILE *tie;
    tie=fopen("Tierra.txt","w");
    c=0;
    fprintf(tie,"%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",x[2],y[2],z[2],vx[2],vy[2],vz[2]);
    for(j=0;j<o[2];j++){

    r=sqrt(pow(x0[2],2)+pow(y0[2],2)+pow(z0[2],2));

        x[2]=x0[2]+(vx0[2]*h[2]);//coordenada de x en un lapso de tiempo despues de h segundos
        y[2]=y0[2]+(vy0[2]*h[2]);//coordenada de y en un lapso de tiempo despues de h segundos
        z[2]=z0[2]+(vz0[2]*h[2]);//coordenada de z en un lapso de tiempo despues de h segundos
        vx[2]=vx0[2]-((h[2]*G*x0[2])/pow(r,3));
        vy[2]=vy0[2]-((h[2]*G*y0[2])/pow(r,3));
        vz[2]=vz0[2]-((h[2]*G*z0[2])/pow(r,3));

        y0[2]=y[2];
        vy0[2]=vy[2];       
        z0[2]=z[2];
        vz0[2]=vz[2];
        x0[2]=x[2];
        vx0[2]=vx[2];
            if (c%500==0)
{
    fprintf(tie,"%f\t %f\t %f\t %f\t %f\t %f\n",x[2],y[2],z[2],vx[2],vy[2],vz[2]);
}
c++;
}
fclose(tie);


    FILE *mar;
    mar=fopen("Marte.txt","w");
    c=0;
    fprintf(mar,"%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",x[3],y[3],z[3],vx[3],vy[3],vz[3]);
    for(j=0;j<o[3];j++){       

    r=sqrt(pow(x0[3],2)+pow(y0[3],2)+pow(z0[3],2));

        x[3]=x0[3]+(vx0[3]*h[3]);//coordenada de x en un lapso de tiempo despues de h segundos
        y[3]=y0[3]+(vy0[3]*h[3]);//coordenada de y en un lapso de tiempo despues de h segundos
        z[3]=z0[3]+(vz0[03]*h[3]);//coordenada de z en un lapso de tiempo despues de h segundos
        vx[3]=vx0[3]-((h[3]*G*x0[3])/pow(r,3));
        vy[3]=vy0[3]-((h[3]*G*y0[3])/pow(r,3));
        vz[3]=vz0[3]-((h[3]*G*z0[3])/pow(r,3));

        y0[3]=y[3];
        vy0[3]=vy[3];       
        z0[3]=z[3];
        vz0[3]=vz[3];
        x0[3]=x[3];
        vx0[3]=vx[3];
            if (c%500==0)
{
    fprintf(mar,"%f\t %f\t %f\t %f\t %f\t %f\n",x[3],y[3],z[3],vx[3],vy[3],vz[3]);
}
c++;
}
fclose(mar);


    FILE *jup;
    jup=fopen("Jupiter.txt","w");
    c=0;
    for(j=0;j<o[4];j++){

    r=sqrt(pow(x0[4],2)+pow(y0[4],2)+pow(z0[4],2));

        x[4]=x0[4]+(vx0[4]*h[4]);//coordenada de x en un lapso de tiempo despues de h segundos
        y[4]=y0[4]+(vy0[4]*h[4]);//coordenada de y en un lapso de tiempo despues de h segundos
        z[4]=z0[4]+(vz0[4]*h[4]);//coordenada de z en un lapso de tiempo despues de h segundos
        vx[4]=vx0[4]-((h[4]*G*x0[4])/pow(r,3));
        vy[4]=vy0[4]-((h[4]*G*y0[4])/pow(r,3));
        vz[4]=vz0[4]-((h[4]*G*z0[4])/pow(r,3));

        y0[4]=y[4];
        vy0[4]=vy[4];       
        z0[4]=z[4];
        vz0[4]=vz[4];
        x0[4]=x[4];
        vx0[4]=vx[4];
            if (c%500==0)
{
    fprintf(jup,"%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",x[4],y[4],z[4],vx[4],vy[4],vz[4]);
}
c++;
}
fclose(jup);


    FILE *sat;
    sat=fopen("Saturno.txt","w");
    c=0;
    for(j=0;j<o[5];j++){   
       
r=sqrt(pow(x0[5],2)+pow(y0[5],2)+pow(z0[5],2));

        x[5]=x0[5]+(vx0[5]*h[5]);//coordenada de x en un lapso de tiempo despues de h segundos
        y[5]=y0[5]+(vy0[5]*h[5]);//coordenada de y en un lapso de tiempo despues de h segundos
        z[5]=z0[5]+(vz0[5]*h[5]);//coordenada de z en un lapso de tiempo despues de h segundos
        vx[5]=vx0[5]-((h[5]*G*x0[5])/pow(r,3));
        vy[5]=vy0[5]-((h[5]*G*y0[5])/pow(r,3));
        vz[5]=vz0[5]-((h[5]*G*z0[5])/pow(r,3));

        y0[5]=y[5];
        vy0[5]=vy[5];       
        z0[5]=z[5];
        vz0[5]=vz[5];
        x0[5]=x[5];
        vx0[5]=vx[5];
            if (c%500==0)
{
fprintf(sat,"%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",x[5],y[5],z[5],vx[5],vy[5],vz[5]);
}
c++;
}
fclose(sat);


    FILE *ura;
    ura=fopen("Urano.txt","w");
    c=0;
    for(j=0;j<o[6];j++){
    r=sqrt(pow(x0[6],2)+pow(y0[6],2)+pow(z0[6],2));

        x[6]=x0[6]+(vx0[6]*h[6]);//coordenada de x en un lapso de tiempo despues de h segundos
        y[6]=y0[6]+(vy0[6]*h[6]);//coordenada de y en un lapso de tiempo despues de h segundos
        z[6]=z0[6]+(vz0[6]*h[6]);//coordenada de z en un lapso de tiempo despues de h segundos
        vx[6]=vx0[6]-((h[6]*G*x0[6])/pow(r,3));
        vy[6]=vy0[6]-((h[6]*G*y0[6])/pow(r,3));
        vz[6]=vz0[6]-((h[6]*G*z0[6])/pow(r,3));

        y0[6]=y[6];
        vy0[6]=vy[6];       
        z0[6]=z[6];
        vz0[6]=vz[6];
        x0[6]=x[6];
        vx0[6]=vx[6];
            if (c%500==0)
{   
    fprintf(ura,"%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",x[6],y[6],z[6],vx[6],vy[6],vz[6]);
}
c++;   
}
fclose(ura);


    FILE *nep;
    nep=fopen("Neptuno.txt","w");
    c=0;
    for(j=0;j<o[7];j++){
    r=sqrt(pow(x0[7],2)+pow(y0[7],2)+pow(z0[7],2));

        x[7]=x0[7]+(vx0[7]*h[7]);//coordenada de x en un lapso de tiempo despues de h segundos
        y[7]=y0[7]+(vy0[7]*h[7]);//coordenada de y en un lapso de tiempo despues de h segundos
        z[7]=z0[7]+(vz0[7]*h[7]);//coordenada de z en un lapso de tiempo despues de h segundos
        vx[7]=vx0[7]-((h[7]*G*x0[7])/pow(r,3));
        vy[7]=vy0[7]-((h[7]*G*y0[7])/pow(r,3));
        vz[7]=vz0[7]-((h[7]*G*z0[7])/pow(r,3));

        y0[7]=y[7];
        vy0[7]=vy[7];       
        z0[7]=z[7];
        vz0[7]=vz[7];
        x0[7]=x[7];
        vx0[7]=vx[7];
            if (c%500==0)
{   
    fprintf(nep,"%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",x[7],y[7],z[7],vx[7],vy[7],vz[7]);
}
c++;
}
fclose(nep);


    FILE *plu;
    plu=fopen("Pluton.txt","w");
    c=0;
    for(j=0;j<o[8];j++){
    r=sqrt(pow(x0[8],2)+pow(y0[8],2)+pow(z0[8],2));

        x[8]=x0[8]+(vx0[8]*h[8]);//coordenada de x en un lapso de tiempo despues de h segundos
        y[8]=y0[8]+(vy0[8]*h[8]);//coordenada de y en un lapso de tiempo despues de h segundos
        z[8]=z0[8]+(vz0[8]*h[8]);//coordenada de z en un lapso de tiempo despues de h segundos
        vx[8]=vx0[8]-((h[8]*G*x0[8])/pow(r,3));
        vy[8]=vy0[8]-((h[8]*G*y0[8])/pow(r,3));
        vz[8]=vz0[8]-((h[8]*G*z0[8])/pow(r,3));

        y0[8]=y[8];
        vy0[8]=vy[8];       
        z0[8]=z[8];
        vz0[8]=vz[8];
        x0[8]=x[8];
        vx0[8]=vx[8];
            if (c%500==0)
{
    fprintf(plu,"%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",x[8],y[8],z[8],vx[8],vy[8],vz[8]);
}
c++;
}
fclose(plu);

   
}
