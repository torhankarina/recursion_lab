#include "calculator.hpp"

int TriangleNumberCalculator::recursiveTri(int n) {
   if (n <= 1) {
      return n;
   }
   return n + recursiveTri(n - 1);
}

int TriangleNumberCalculator::value(int n) {
   return recursiveTri(n);
}

int TriangleNumberCalculator::add(int n, int m) {
   return value(n) + value(m);
}

int TriangleNumberCalculator::subtract(int n, int m) {
   return value(n) - value(m);
}