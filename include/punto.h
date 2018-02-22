#ifndef PUNTO
#define PUNTO

/****************************************************************
 @file punto.h
 @Brief ARCHIVO CON LA DECLARACIÓN DE LA CLASE PUNTO BIDIMENSIONAL.
 

 @Author Rafael Rivas
  rafael@ula.ve
 * 
 @Date Octubre 2000
 */

/**
 @Brief Clase Punto Bidimensional. Esta clase es usada con fines academicos 
 para la instrucción a la programación orientada a objetos
*/
class CPunto {
private:
	
	float x; /*!< Coordenada x */
        float y; /*!< Coordenada y */
public:
	CPunto();
	CPunto(const CPunto&);
	~CPunto(){};

	CPunto(float, float);
	void asignar(float, float);
        /**
         @brief Observador de la coordenada x
         @return Valor de la coordenada x
        */
	float verX() const { return(x); }
        /**
         @brief Observador de la coordenada y
         @return Valor de la coordenada y
        */
	float verY() const { return(y); }
	CPunto operator=(const CPunto&);
	int operator==(const CPunto&);
};
#endif
