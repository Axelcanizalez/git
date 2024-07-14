//pide area y. perimetro de distintas figuras utilizando swicth  y booleanos
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
	//declarando las variables
	const double pi=3.1416;
	float area=0,perimetro=0,rectangulo[4],trapecio[4],diametro=0,radio=0,baseRectangulo=0,areatra1;
	float perimetrorec=0,alturaRectangulo=0,perimetrotra,aream=0,areaMe=0,altura1=0,areatra,cuadrado[4];
	float suma=0,lado=0,suma2=0,triangulo[3],sumatriangulo=0,alturatriangulo=0,basetriangulo=0,areaRectangulo=0;
	int opciones=0;
	bool verdadero=true,verdadero1=true,verdaderoTrapecio=true,verdaderoCuadrado=true,verdaderoTriangulo=true;
	string salir;
	cout<<"\n\t-----------------------------------------------------"<<endl;
	
	do{
	
	//menu principal
	cout<<"\t1:circulo"<<endl;
	cout<<"\t2:rectangulo"<<endl;
	cout<<"\t3:trapecio"<<endl;
	cout<<"\t4:cuadrado"<<endl;
	cout<<"\t5:triangulo"<<endl;
	cout<<"\t6:SALIR"<<endl;
	cout<<"\tSELECCIONE UNA OPCION"<<endl;
	cin>>opciones;//variable que almacena el menu
	system("pause");
	system("cls");
	
	switch(opciones){
		case 1:
			cout<<"\n\tDIAMETRO DEL CIRCULO";
			cout<<"\n\tdigite el diametro del circulo:";cin>>diametro;
			cout<<"\n\tdigite el radio:";cin>>radio;
			if(diametro<0){// si diametro es menor que 0 
				verdadero=false;

			}if(radio<0){//si radio es menor que 0 
				verdadero=false;
			}
			if(verdadero==false){//si es false se digita este if
				cout<<"\n\t-digito valores negativos ";
			}
			else if(verdadero==true){//si es true se digita este if
			perimetro=pi*diametro;//operacion para perimetro
			cout<<"\n\t el perimetro es "<<perimetro;
			cout<<"\n\t--------------------------------------"<<endl;
		    cout<<"\n\tAREA DEL CIRCULO";
	     	area=pi*pow(radio,2);//operacion para radio
			cout<<"\n\t-el area es "<<area;
			cout<<"\n\t---------------------------------------";
	     	
		}
		break;
	    case 2:
	    	verdadero1=true;
	    	cout<<"\n\tPERIMETRO DEL RECTANGULO"<<endl;
	    	for(int i=0;i<4;i++){//arreglo
	    	cout<<"\tdigite el lado del rectangulo:";cin>>rectangulo[i];
	    	if(rectangulo[i]<0){//si rectangulo es menor que 0 sera falso
	    		verdadero1=false;
	    		
			}
			perimetrorec+=rectangulo[i];//haciendo operacion para perimetro
	    }
	    	if(verdadero1==false){//si verdadero es false se ejecuta este if
	    	cout<<"\n\t-digito valores negativos";	
			}else if(verdadero1==true){	//si no se ejecuta este if
	    cout<<"\n\tel perimetro es "<<perimetrorec;	
        }
        cout<<"\n\t-----------------------------------------";
	    cout<<"\n\tAREA DEL RECTANGULO";
	    cout<<"\n\tdigite la base del rectangulo:";cin>>baseRectangulo;//pidiendo dato
	    cout<<"\tdigite la altura del rectangulo:";cin>>alturaRectangulo;//pidiendo dato
	    verdadero1=true;
      if(baseRectangulo<=0 || alturaRectangulo<=0){//si base rectangulo y altura es menor o igual a 0 es false
      	   verdadero1=false;
	  }
	   if(verdadero1==false){//si verdadero1 es igual a false se ejecuta este if
	   	cout<<"\n\t-digito valores negativos";
	   } 
	    else{//si no
	    	areaRectangulo=baseRectangulo*alturaRectangulo;
	    	cout<<"\n\t-el area es "<<areaRectangulo;
		}
	      
	   break;
	   case 3:
	   	verdaderoTrapecio=true;
	   	cout<<"\n\tPERIMETRO TRAPECIO"<<endl;
	   
	   	for(int i=0;i<4;i++){//arreglo para perimetro
	   		cout<<"\tdigite el lado del perimetro:";cin>>trapecio[i];//pidiendo dato
	   		if(trapecio[i]<=0){//si trapecio es menor que 0 es falso
	   			verdaderoTrapecio=false;
			   }
			perimetrotra+=trapecio[i];//operacion para perimetro
	   }
	   if(verdaderoTrapecio==false){//si vedaderotrapecio es igual a false se ejecuta este if
	       	cout<<"\n\t-digito valores negativos";
		   }
	   //si no se ejecuta este else if
	    else if(verdaderoTrapecio==true){
			 cout<<"\n\t-el perimetro del trapecio es "<<perimetrotra<<endl;
	}
	    
	   	cout<<"\n\t-------------------------------------------------";
	   	cout<<"\n\tAREA DE TRAPECIO";
	   	//pidiendo datos
	   	cout<<"\n\tdigite el area de la base mayor:";cin>>aream;
	   	cout<<"\tdigite el area de la base menor:";cin>>areaMe;
	   	cout<<"\tdigite la altura del trapecio:";cin>>altura1;
	   	
	    verdaderoTrapecio=true;//declarando con valor true
		if(aream<=0 ||areaMe<=0 ||altura1<=0){//si altura,area,areaMe es menor que 0 se ejecuta es false
				verdaderoTrapecio=false;
		}
		
	    if(verdaderoTrapecio==false){//si verdadero trapecio es igual a false se ejecuta este if
			cout<<"\n\t-digito valores negativos";
		}
		   //si no se ejecuta este else if
	   	else if(verdaderoTrapecio==true){
	   		areatra=(aream+areaMe)*altura1/2;
	   		cout<<"\n\t-el area del trapecio es "<<areatra;
		   }
	   	break;
	   	case 4:
	   		cout<<"\n\tPERIMETRO DEL CUADRADO"<<endl;
	   		verdaderoCuadrado=true;
	   	for(int i=0;i<4;i++){//arreglo de cuadrado
	   		cout<<"\tdigite el lado del cuadrado:";cin>>cuadrado[i];//pidiendo dato
	   		if(cuadrado[i]<=0){//si cuadrado es menor que 0 sera false
	   			verdaderoCuadrado=false;
			   }
			 suma+=cuadrado[i]; //operacion para sacra perimetro 
		   }
		   
		   if(verdaderoCuadrado==false){//si verdadero igual a false se ejecuta este if
		   	cout<<"\n\t-digito valores negativos	";
		
		   }else if(verdaderoCuadrado==true){//si no se ejecuta este else if 
		   	cout<<"\n\t-el perimetro del cuadrado es "<<suma;
		   }
		   
		   cout<<"\n\t--------------------------------------"<<endl;
		   cout<<"\n\tAREA DEL CUADRADO"<<endl;
		   cout<<"\n\tdigite el lado del cuadrado:";cin>>lado;//pidiendo dato
		    verdaderoCuadrado=true;//declarando verdadero true
		    if(lado<=0){//si lado es menor que 0 sera false
		    	verdaderoCuadrado=false;
			}if(verdaderoCuadrado==false){//si verdadero es igual a false se ejecuta este if
				cout<<"\n\t-digito valores negativos";
			}
			else if(verdaderoCuadrado==true){//si no se ejecuta este else if
				
		    suma2=lado*lado;//operacion area cuadrado
		    cout<<"\n\t-el area del cuadrado es "<<suma2;
		}
		break;
	case 5:
		 verdaderoTriangulo=true;
		cout<<"\n\tPERIMETRO TRIANGULO"<<endl;
		for(int i=0;i<3;i++){//arreglo de triangulo
			cout<<"\tdigite el lado del triangulo:";cin>>triangulo[i];//pidiendo dato
			if(triangulo[i]<0){//si triangulo es menor que 0 es false
				verdaderoTriangulo=false;
			}
		sumatriangulo+=triangulo[i];	//operacion para perimetro
		}
		if(verdaderoTriangulo==false){//si verdadero igual a false se ejecuta eset if
			cout<<"\n\t-digito un valor negativo";
		}else if(verdaderoTriangulo==true){//si no se ejecuta este else fi
			cout<<"\n\t-el perimetro del triangulo es "<<sumatriangulo;
		}
		//pidiendo datos
		cout<<"\n\t----------------------------------------------"<<endl;
		cout<<"\n\tAREA DEL TRIANGULO"<<endl;
		cout<<"\tdigite la base del triangulo:";cin>>basetriangulo;
		cout<<"\tdigite la altura del triangulo:";cin>>alturatriangulo;
		verdaderoTriangulo=true;//verdadero tiene valor de true lo estamos declarando nuevamente
		if(basetriangulo<0||alturatriangulo<0){//si base triangulo y altura es menor que 0 es false
			verdaderoTriangulo=false;
			cout<<"\n\t-digito valores negativos";
		}else if(verdaderoTriangulo==true){//si verdadero es igual a true se dijta este else if
        areatra1= (basetriangulo*alturatriangulo)/2;//operacion para area			
			cout<<"\n\t-el area del triangulo es "<<areatra1;
		}	
		break;
		   case 6://salir
		   	return 0;
		   	break;
		default:
			cout<<"\n\t-digito valores erroneos";
			return 0;	
			break;
		
}   
    cout<<"\n\t------------------------------------------------";
    cout<<"\n\tDESEAS SALIR DEL PROGRAMA ?DIGITE SI PARA SALIR:"<<endl;
	cin>>salir;
	system("pause");
	system("cls");
	
}while(salir=="no"||salir=="no");
	
	getch();
	return 0;
	
}