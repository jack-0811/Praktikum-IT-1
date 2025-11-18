//
// Praktikum Informatik 1
//
// Versuch 04: Einführung Klasse
//
// Datei:  Vektor.h
// Inhalt: Headerdatei der Klasse Vektor
//

#ifndef Vektor_H
#define Vektor_H

#include <iostream>
#include <cmath>
#include <iomanip>

/**
 * A vector class has 3-dimension parameter
 */
class Vektor
{
   public:
	/**
	 * @brief The constructor of vector
	 * @param x the value of x-coordinate
	 * @param y the value of y-coordinate
	 * @param z the value of z-coordinate
	 */
      Vektor(double x, double y, double z);

      /**
       * @brief The destructor of vector
       */
      ~Vektor();

      /**
       * @brief Output the data of 3-dimensional vector
       */
      void ausgabe() const;

	  /**
	   * @brief Subtracts a vector v and return the result
	   * @param v1 the vector to subtract
	   * @return the vector after subtraction
	   */
	  Vektor sub(const Vektor& input) const;

      /**
       * @brief Calculate the data of length of the vector and return this value
       * @return length of the vector
       */
      double laenge() const;

      /**
       * @brief Calculate the scalar-product of two vectors
       * @param v1 the vector to do scalar-product calculation
       * @return the result of the scalar-product
       */
      double skalarProd(const Vektor& input) const;

      /**
       * @brief Calculate the angle between two vectors
       * @param v1 the vector to do angle calculation
       * @return the result of the scalar-product(in Grad)
       */
      double winkel(const Vektor& input) const;

      /**
       * @brief Rotate a vector around the Z-axis with the given angle
       * @param rad The angle to rotate(in radiant)
       */
      void rotiereUmZ(const double rad);

	  /**
		* @brief Output the data of x
		* @return x-value
		*/
	   double getX() const;

	   /**
		* @brief Output the data of y
		* @return y-value
		*/
	   double getY() const;

	   /**
		* @brief Output the data of z
		* @return z-value
		*/
	   double getZ() const;

   	   private:
        double x;
        double y;
        double z;

};
#endif
