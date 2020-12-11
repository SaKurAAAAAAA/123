#ifndef MYCOMPLEX_H
#define MYCOMPLEX_H

class complex
{
public:
	complex (double r=0,double i=0):re(r),im(i){}
	complex& operator +=(const complex&);
	complex& operator -=(const complex&);
	complex& operator *=(const complex&);
	complex& operator /=(const complex&);
	double real() const { return re; }
	double imag() const { return im; }
private:
	double re, im;

	friend 
};

#endif // !COMPLEX_H

