#!/bin/bash

echo "Este script instala las librerías para trabajar con este repositorio"
echo " "

sudo apt update && sudo apt upgrade -y

echo " "
echo "Interprete de Python 3 y el administrados de paquetes pip: "
echo " "

sudo apt install python3 python3-dev python3-pip

echo " "
echo "Paquetes de Python:"
echo " "

python3 -m pip install numpy
python3 -m pip install opencv-python
python3 -m pip install virtualenv

echo " "
echo "Compilador para C++: "
echo " "

sudo apt install build-essential 

echo " "
echo "Librerías para el funcionanmiento de OpenCV en GTK: "
echo " "

sudo apt-get install cmake git libgtk2.0-dev pkg-config libavcodec-dev libavformat-dev libswscale-dev -y

echo " "
echo "Clonar librería de OpenCV "
echo " "

cd ~

git clone https://github.com/opencv/opencv.git

cd opencv

echo " "
echo "Construir la librería de OpenCV "
echo " "

mkdir build 

cd build

cmake -D CMAKE_BUILD_TYPE=Release -D CMAKE_INSTALL_PREFIX=/usr/local .. -DOPENCV_GENERATE_PKGCONFIG=YES

make

sudo make install

echo " "
echo "ldconfig crea los vínculos y la memoria caché necesarios a las bibliotecas compartidas más recientes que se encuentran en los directorios especificados en la línea de comandos: "
echo " "

sudo su

ldconfig

exit

echo " "
echo "Verificar la instalar de OpenCV: "
echo " "

pkg-config --modversion opencv4

echo " "
echo "OpenCV ha sido construído exitosamente: "
echo " "

cd ~



