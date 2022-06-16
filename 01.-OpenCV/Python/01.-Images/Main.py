# Importar la librería de OpenCV
import cv2

# Ruta de la imagen
path = '/home/jonas/Dropbox/Pictures/OpenCV-Images/lenna.png'

# Usar el método cv2.imread() para asignar la ruta del objeto al objeto
image = cv2.imread(path)

# Mostrando la imagen
cv2.imshow('Imagen', image)

cv2.waitKey(0);

cv2.destroyAllWindows()
