//
//  String.hpp
//  String
//
//  Created by Alumno on 23/10/18.
//  Copyright © 2018 Alumno. All rights reserved.
//

#ifndef String_h
#define String_h

#include <cstddef>

namespace magma
{
    class String
    {
        wchar_t * data;
        size_t count;
        
    public:
        String(): data(nullptr), count(0){}
        
        String (const wchar_t * source)//esto es muy largo como para estar en una cabecera
        {
            count =0;
            for(const wchar_t * i = source; *i; ++i) ++count;
            //data = count > 0 ?  new wchar_t[count] : nullptr;
            if(count > 0)
            {
                data = new wchar_t[count];
                for(size_t = 0; i < count; ++count) data[i] = source[i];
            }
            else
                data = nullptr;
        }
        
        String(const String & other);//constructor de copia desarrollar en casa
        ~String();// destructor desarrollar en casa
        
    public:
        String & operator = (const String & other)//operador de asignación
        {
            if(this != & other)
            {
                delete[] data;
                
                this -> data = new wchar_t[this -> count = other.count];//esto es una asignación
                
                for(size_t i = 0; i < count; ++i) this -> data[i] = other.data[i];
            }
            return * this;
        }
        
        String operator + (const String & a, const String & b) const //el ultimo const esta porque no modifica nada y es para asegurarnos
        {
           // String result(*this);//*this le da un objeto igual a this por lo que llama al constructor de copia
        
            if( this-> count == 0)
            {
                return other;
            }
            else if(other.count == 0)
            {
                return *this;
            }
            else
            {
                String result;
                result.count = this -> count + other.count;
                
                result.data = new wchar_t[result.count];
                
                wchar_t * destination = result.data;
                
                for(size_t i = 0; i < this -> count; i++) *destination++ = this->data[i];
                for(size_t i = 0; i < other.count;i++) *destination++ = other.data[i];
                
                return result;
            }
        }
        
        String & operator +=(const String & other)
        {
            *this = *this + other;
        }
        wchar_t & operator[](size_t index)//operador de indexacion [] devuelve un valor de un array y manda la direccion de memoria para poder modificarlo
        {
            return data[index];
        }
        wchar_t & operator[](size_t index) const //esta es igual pero constante por lo que no se podra modificar aun sinedo un puntero lo que devuelve y el copilador es capaz de saber a cual hay que llamar dependiendo de si data es constante o no
        {
            return data[index];
        }
        
        bool operator == (const String &other)const;//completar en casa
        bool operator != (const String &other)const;//completar en casa
    };
   
}


#endif /* String_h */
