#ifndef COMPLEX_H
#define COMPLEX_H

class complex {
    public:
        complex() : real(0), imagine(0) { }
        complex(double r) : real(r), imagine(0) { }
        complex(double r, double i) : real(r), imagine(i) { }
        complex operator*(const complex&b){
            complex result;
            result.real = this->real * b.real - this->imagine * b.imagine;
            result.imagine = this->imagine * b.real + this->real * b.imagine;
            return result;
        }

        double getReal() { return real; }
        double getI() { return imagine; }

    private:
        double real, imagine;
}; 

#endif