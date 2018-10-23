//
//  Vector3.hpp
//  String
//
//  Created by Alumno on 23/10/18.
//  Copyright © 2018 Alumno. All rights reserved.
//

#ifndef Vector3_h
#define Vector3_h

namespace magma
{
    class Vector3
    {
        float x,y,z;
    public:
        Vector3();
        Vector3(float nx, float ny, float nz);
        Vector3(new Vector3 & other);
        
    public:
        Vector3 operator - () const//operador unario de negación
        {
            Vector3 result;
            result.x = -this->x;
            result.y = -this->y;
            result.z = -this->z;
            return result;
            
        }
        //hacer todos los operadores de vector como la normal, normalizar, suma, resta,etc
    }
}


#endif /* Vector3_h */
