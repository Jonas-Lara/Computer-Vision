# Importar librería OpenCV
import cv2

# Declaro un objeto para capturar el flujo de fotogramas de la camara predeterminada
cap = cv2.VideoCapture(0)


# Loop eterno para mostrar video
while True:
	# Capturar cuadro por cuadro
	ret, image = cap.read()

	# Función de OpenCV para mostrar el video
	cv2.imshow('Video Python',image)

	# Condición para romper el ciclo
	c = cv2.waitKey(33)
	if c == 27:
		break

cv2.destroyAllWindows()



