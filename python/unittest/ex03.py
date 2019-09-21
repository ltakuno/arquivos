# -*- coding: utf-8 -*-
from unittest import TestCase, main
from numbers import Number

# TODO : criar closure

def validate_cache(func):
    def validate(self, x, y):
        if isinstance(x, Number) and isinstance(y, Number):
            return func(x, y)
        else:
            raise Exception('Insira apenas números')
    return validate        

class Calc:

    @validate_cache
    def soma(self, x, y):
        return x + y

    def sub(self, x, y):
        return x - y

    def mul(self, x, y):
        if isinstance(x, Number) and isinstance(y, Number):
            return x * y 
        else:
            raise Exception('Insira apenas números')

    def div(self, x, y):
        if isinstance(x, int) and isinstance(y, int):
            return x / y 
        else:
            raise Exception('Insira apenas números')


class Testes_calculadora(TestCase):
    def setUp(self):
        self.calc = Calc()

    def test_soma(self):
        self.assertEqual(self.calc.soma(2,2), 4)

    def test_soma_negativo(self):
        self.assertEqual(self.calc.soma(-2,-3), -5)

    def test_soma_float(self):
        self.assertEqual(self.calc.soma(2.0,1.0), 3.0)

    def test_sub(self):
        self.assertEqual(self.calc.sub(2,2),0)

    def test_sub_float(self):
        self.assertEqual(self.calc.sub(2.0,2.0),0.0)

    def test_soma_string(self):
        with self.assertRaises(Exception):
            self.calc.soma('Leonardo','Takuno')

    def test_sub_string(self):
        with self.assertRaises(Exception):
            self.calc.sub('Leonardo','Takuno')

    def test_mul(self):
        self.assertEqual(self.calc.mul(2,2),4)

    def test_mul_string(self):
        with self.assertRaises(Exception):
            self.calc.mul('Leonardo', 2)

    def test_div(self):
        self.assertEqual(self.calc.div(2,2),1)

    def test_div_string(self):
        with self.assertRaises(Exception):
            self.calc.div('Leonardo', 2)

    def test_soma_cache(self):
        """
        2+2+4
        """
        self.assertEqual(self.calc.soma(self.calc.soma(2,2)),8)

if __name__ == '__main__':
    main()

