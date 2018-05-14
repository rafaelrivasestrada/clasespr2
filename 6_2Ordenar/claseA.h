/**
 @brief Clase de soporte para ejemplo simple de ordenar un vector 
 usando std::sort
 @author R. Rivas
 @Date: Mayo, 2018
 **/
class ClaseA {
  private:
	 int a;
	 int b;

   public:
	int getA() const {
	   return(this->a);
	}

	int getB() const{
	   return(this->b);
	}

	 void set(int a, int b) {
		this->a = a;
		this->b = b;
		return;
	 }

	 int operator< (const ClaseA &x) {
		return(this->a < x.a);
	 }
};

