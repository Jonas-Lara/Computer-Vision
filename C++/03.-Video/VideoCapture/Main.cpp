#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;

int main() 
{
    Mat image; //Declaro una matriz para cargar los marcos

    namedWindow("Display window"); //Declaro el video para mostrar el video

    VideoCapture cap(0); //Declaro un objeto para capturar el flujo de fotogramas de la camara predeterminada


	//Condiciono para mostrar un mensaje de error si no se encuentra ninguna transmisión de video
    if (!cap.isOpened()) {

   		std::cout << "cannot open camera";
    }
   	while (true) //Empieza un loop eterno para mostrar el video
   	{
       	cap >> image;
		
		//Condiciono para romper el bucle si no se detecta ningún cuadro de video
		if (image.empty())
		{
			break;
		}

       	imshow("Video Capture", image); //Mostrar el video
		
		//Permitiendo un tiempo de procesamiento de cuadros de 25 milisegundos e iniciando una condición de interrupción
		char c = (char)waitKey(25); 
		if (c == 27) //Si se teclea ESC, se rompe el ciclo
		{
			break;
		}
    }

cap.release(); //Liberar la memoria intermedia del objeto
return 0;
}
