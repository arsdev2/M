#include <stdio.h>

class Vector{
	
	public:
		float x;
		float y;

	Vector(float x, float y){
		this->x = x;
		this->y = y;
	}
	
	Vector& operator+(const Vector& first){
		return *(new Vector(first.x+this->x, first.y+this->y));
	}

	Vector& operator-(const Vector& first){
		return *(new Vector(first.x-this->x, first.y-this->y));
	}

	Vector& operator*(const Vector& first){
		return *(new Vector(first.x*this->x, first.y*this->y));
	}

};

int main(){
	printf("Hello, World\n");
	Vector v1 = Vector(1.0f, 2.0f);
	Vector v2 = Vector(2.0f, 5.0f);
	Vector v3 = v1+v2;
	Vector v4 = v1-v2;
	Vector v5 = v1*v2;
	printf("Vector3 x = %f y = %f\n", v3.x, v3.y);
	printf("Vector4 x = %f y = %f\n", v4.x, v4.y);
	printf("Vector5 x = %f y = %f\n", v5.x, v5.y);
	return 0;
}
