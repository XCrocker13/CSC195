#pragma once
#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
#include <stdexcept>
#include <numeric>

namespace mathlib {

    template<typename T = int>
    class Fraction {
    private:
        T numerator;
        T denominator;

        void simplify() {
            T a = numerator;
            T b = denominator;

            while (b != 0) {
                T temp = b;
                b = a % b;
                a = temp;
            }

            T gcd = a;
            
            numerator /= gcd;
            denominator /= gcd;

            if (denominator < 0) {
                numerator = -numerator;
                denominator = -denominator;
            }
        }


    public:
        Fraction(T num = 0, T den = 1) : numerator(num), denominator(den) {
            if (den == 0)
                throw std::invalid_argument("Denominator cannot be zero.");
            simplify();
        }

        T getNumerator() const { return numerator; }
        T getDenominator() const { return denominator; }

        Fraction operator+(const Fraction& other) const {
            return Fraction(
                numerator * other.denominator + other.numerator * denominator,
                denominator * other.denominator
            );
        }

        Fraction operator-(const Fraction& other) const {
            return Fraction(
                numerator * other.denominator - other.numerator * denominator,
                denominator * other.denominator
            );
        }

        Fraction operator*(const Fraction& other) const {
            return Fraction(numerator * other.numerator, denominator * other.denominator);
        }

        Fraction operator/(const Fraction& other) const {
            if (other.numerator == 0)
                throw std::invalid_argument("Division by zero fraction.");
            return Fraction(numerator * other.denominator, denominator * other.numerator);
        }
        bool operator==(const Fraction& other) const {
            return numerator == other.numerator && denominator == other.denominator;
        }

    //chat GPT
        bool operator!=(const Fraction& other) const {
            return !(*this == other);
        }

       
        bool operator<(const Fraction& other) const {
            return numerator * other.denominator < other.numerator * denominator;
        }

        bool operator>(const Fraction& other) const {
            return other < *this;
        }

        bool operator<=(const Fraction& other) const {
            return !(*this > other);
        }

        bool operator>=(const Fraction& other) const {
            return !(*this < other);
        }
        double toDouble() const {
            return static_cast<double>(numerator) / static_cast<double>(denominator);
        }
        friend std::ostream& operator<<(std::ostream& os, const Fraction& frac) {
            os << frac.numerator << "/" << frac.denominator;
            return os;
        }

        friend std::istream& operator>>(std::istream& is, Fraction& frac) {
            T num, den;
            char slash;
            is >> num >> slash >> den;
            if (den == 0) throw std::invalid_argument("Input denominator cannot be zero.");
            frac = Fraction(num, den);
            return is;
        }
        void Simplify() {
            simplify();
        }
    };

}
#endif