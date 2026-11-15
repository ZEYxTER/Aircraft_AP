#ifndef MATHUTILS_H
#define MATHUTILS_H


class mathUtils{
    public: 
        // Constructor 
        mathUtils(void);
        // Functions
        float DCM(float* ang); // direct cosine matrix (psi, theta, phi => ZYX)
        // Getters 
        // Setters
    protected: 
    private: 
};

#endif